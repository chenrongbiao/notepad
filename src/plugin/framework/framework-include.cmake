# framework-extension.cmake
    # framework_plugin_include <target> <plugin.cmake>
        # 声明本地资源引用构建
    # framework_plugin_include_with_git <target> <git> [arg...]
        # 声明资源引用构建 with_git

# framework_plugin_include <target> <plugin.cmake>
# 该宏定义了从指定的 plugin.cmake 中获取插件共享构建资源
    # 标记 FRAMEWORK_WANT_INCLUDE 为 ON，让 include(plugin.cmake) 时产生策略性引用构建
    # 清空 FRAMEWORK_INCLUDE_EXPORTS 以便干净的引用资源(头文件目录)得以填充到此处
    # 清空 FRAMEWORK_SOURCES_EXPORTS 以便干净的引用资源(源文件声明)得以填充到此处
    # 框架构建将头文件目录 使用原生方案 追加到目标属性
    # 框架构建将源文件使用 spark_file_glob 解析一切可能的存在，直接提供到目标的构建
macro(framework_plugin_include _target _plug_cmake)
    if(EXISTS ${_plug_cmake})
        message("-- [FRAMEWORK WANT]: ${_target}")
        set(FRAMEWORK_WANT_INCLUDE TRUE)
        set(FRAMEWORK_PLUGIN ${_target})  # 预期在间接引用上使用
        set(FRAMEWORK_INCLUDE_EXPORTS)
        set(FRAMEWORK_SOURCES_EXPORTS)
        set(FRAMEWORK_WITHGIT_EXPORTS)    # 预期在间接引用上使用
            include(${_plug_cmake})
            spark_file_glob(_want_files ${FRAMEWORK_SOURCES_EXPORTS})
            message("-- [FRAMEWORK ANALYZE]: ${_target} Want Dirs:  ")
            message("                        ${FRAMEWORK_INCLUDE_EXPORTS}")
            message("-- [FRAMEWORK ANALYZE]: ${_target} Want Files: ")
            message("                        ${_want_files}")
            target_include_directories(${_target} PUBLIC ${FRAMEWORK_INCLUDE_EXPORTS})
            target_sources(${_target} PUBLIC ${_want_files})
            foreach(shared_export IN LISTS FRAMEWORK_WITHGIT_EXPORTS)
                string(REPLACE "," ";" shared_export "${shared_export}")
                framework_plugin_include_with_git(${_target} ${shared_export})
            endforeach()
        set(FRAMEWORK_WANT_INCLUDE FALSE)
    endif(EXISTS ${_plug_cmake})
endmacro(framework_plugin_include _target _plug_cmake)

# framework_plugin_include_with_git <target> <git_repo_url> [git_args...]
# 该宏定义了从指定的 git 仓库中获取插件源代码，并检查是否有 plugin.cmake，再转到引用资源构建
function(framework_plugin_include_with_git _target GIT_REPO_URL)
    set(GIT_ARGS ${ARGN})

    # 1. 匹配前缀
    string(REGEX MATCHALL "^http://"  HTTP_VAR  "${GIT_REPO_URL}")
    string(REGEX MATCHALL "^https://" HTTPS_VAR "${GIT_REPO_URL}")

    # 2. 移除前缀
    if(HTTP_VAR STREQUAL "http://")
        string(REPLACE "${HTTP_VAR}"  "" REPO_URL "${GIT_REPO_URL}")
    elseif(HTTPS_VAR STREQUAL "https://")
        string(REPLACE "${HTTPS_VAR}" "" REPO_URL "${GIT_REPO_URL}")
    else()
        return()
    endif(HTTP_VAR STREQUAL "http://")

    # 3. 分割字符串为 cmake LIST 格式
    string(REPLACE "/" ";" URLSEGS ${REPO_URL})
    list(LENGTH URLSEGS URLSEGS_LENGTH)
    # 4. 判断长度是否符合要求
    if(URLSEGS_LENGTH GREATER_EQUAL 3)
        list(GET URLSEGS 0 URL_DOMAIN)
        list(GET URLSEGS 1 URL_USER)
        list(GET URLSEGS 2 URL_REPO)
    else()
        return()
    endif(URLSEGS_LENGTH GREATER_EQUAL 3)

    message("HTTP_VAR: ${HTTP_VAR}")
    message("HTTPS_VAR: ${HTTPS_VAR}")
    message("URL_DOMAIN: ${URL_DOMAIN}")
    message("URL_USER:   ${URL_USER}")
    message("URL_REPO:   ${URL_REPO}")

    # 4. 处理自动化 git clone
    # domain
      # user
        # repo
    if(NOT EXISTS ${CMAKE_SOURCE_DIR}/3rd_plugins_cache/${URL_DOMAIN}/${URL_USER}/${URL_REPO}_git)
        execute_process(COMMAND ${CMAKE_COMMAND} -E make_directory "${URL_DOMAIN}/${URL_USER}"
            WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/3rd_plugins_cache)
        execute_process(COMMAND git clone ${GIT_REPO_URL} ${URL_DOMAIN}/${URL_USER}/${URL_REPO}_git ${GIT_ARGS}
            WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/3rd_plugins_cache)
    else()
        execute_process(COMMAND git pull
            WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/3rd_plugins_cache/${URL_DOMAIN}/${URL_USER}/${URL_REPO}_git)
    endif(NOT EXISTS ${CMAKE_SOURCE_DIR}/3rd_plugins_cache/${URL_DOMAIN}/${URL_USER}/${URL_REPO}_git)

    if(EXISTS ${CMAKE_SOURCE_DIR}/3rd_plugins_cache/${URL_DOMAIN}/${URL_USER}/${URL_REPO}_git/plugin.cmake)
        # message("-- [WANT_GIT_PLUGIN] Found new plugin with git: ${CMAKE_SOURCE_DIR}/3rd_plugins_cache/${URL_DOMAIN}/${URL_USER}/${URL_REPO}_git/plugin.cmake")
        message("-- [WANT_GIT_PLUGIN] Found new plugin with git: ")
        message("                ${CMAKE_SOURCE_DIR}/3rd_plugins_cache/${URL_DOMAIN}/${URL_USER}/${URL_REPO}_git/plugin.cmake")
        # set(WITH_GIT ON) 这个不需要继续标记，直接进入资源引用逻辑
        framework_plugin_include(${_target}
            ${CMAKE_SOURCE_DIR}/3rd_plugins_cache/${URL_DOMAIN}/${URL_USER}/${URL_REPO}_git/plugin.cmake)
    else()
        message("-- [WANT_GIT_PLUGIN] Not Found plugin.cmake with git: ${GIT_REPO_URL}")
        return()
    endif(EXISTS ${CMAKE_SOURCE_DIR}/3rd_plugins_cache/${URL_DOMAIN}/${URL_USER}/${URL_REPO}_git/plugin.cmake)

endfunction(framework_plugin_include_with_git _target GIT_REPO_URL)

# add_framework_plugin_with_git(https://gitee.com/ndd-community/notepad--plugin.plantuml-preview --branch=cmake-plugins-dev)
