cmake_minimum_required(VERSION 3.16)
project(NotePad-- VERSION 1.22.0)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 REQUIRED COMPONENTS Core Gui Widgets Concurrent Network LinguistTools PrintSupport XmlPatterns)

# qscint 关键依赖库
add_subdirectory(${PROJECT_SOURCE_DIR}/src/qscint)

# 插件库包含
# helloworld 动态插件库
add_subdirectory(${PROJECT_SOURCE_DIR}/src/plugin/helloworld)
# add_subdirectory(${PROJECT_SOURCE_DIR}/src/plugin/nddPluginToys)

# win下需要开启UNICODE进行支持TCHAR
if(CMAKE_HOST_WIN32)
    add_definitions(-D_UNICODE -DUNICODE)
endif()


if(${PLUGIN_EN})
    if(${PLUGIN_EN}  STREQUAL on)
        add_definitions(-DNO_PLUGIN=1)
    endif(${PLUGIN_EN})    
endif()



file(GLOB UI_SRC ${PROJECT_SOURCE_DIR}/src/*.ui)
set(UI_SRC ${UI_SRC} ${PROJECT_SOURCE_DIR}/src/cceditor/ccnotepad.ui)
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC)
aux_source_directory(${PROJECT_SOURCE_DIR}/src/cceditor SRC)

set(TS_FILES ${PROJECT_SOURCE_DIR}/src/realcompare_zh.ts)

if(CMAKE_HOST_WIN32)
# 添加 WIN32 保证主程序启动没有命令行
    list(APPEND WIN_RCS ${PROJECT_SOURCE_DIR}/src/RealCompareToMinGw.rc)
    add_executable(${PROJECT_NAME} WIN32 ${WIN_RCS} ${TS_FILES} ${SRC} ${UI_SRC} ${PROJECT_SOURCE_DIR}/src/RealCompare.qrc)
else()
    add_executable(${PROJECT_NAME} ${SRC} ${UI_SRC} ${TS_FILES} ${PROJECT_SOURCE_DIR}/src/RealCompare.qrc)
endif()



qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR}/src ${TS_FILES})
# add_custom_target(lupdate_task DEPENDS ${TS_FILES})
# add_custom_target(lrelease_task DEPENDS ${QM_FILES})


target_include_directories(${PROJECT_NAME} PRIVATE
${PROJECT_SOURCE_DIR}/src
${PROJECT_SOURCE_DIR}/src/cceditor

${PROJECT_SOURCE_DIR}/src/qscint/src
${PROJECT_SOURCE_DIR}/src/qscint/src/Qsci
${PROJECT_SOURCE_DIR}/src/qscint/scintilla/src
${PROJECT_SOURCE_DIR}/src/qscint/scintilla/include
${PROJECT_SOURCE_DIR}/src/qscint/scintilla/lexlib
${PROJECT_SOURCE_DIR}/src/qscint/scintilla/boostregex
)

target_link_libraries(${PROJECT_NAME} qscint Qt5::Core Qt5::Gui Qt5::Widgets Qt5::Concurrent Qt5::Network  Qt5::PrintSupport Qt5::XmlPatterns)

# set(PROJECT_BINARY_DIR "${PROJECT_BINARY_DIR}/bin")
# set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)


if(CMAKE_HOST_UNIX)
    set(LINUX_INSTALL_PATH "usr/share/${PROJECT_NAME}")
    install(
        TARGETS ${PROJECT_NAME}
        DESTINATION ${LINUX_INSTALL_PATH}
    )

    install(DIRECTORY  ${PROJECT_SOURCE_DIR}/src/linux/usr
            DESTINATION "/")

    include(${PROJECT_SOURCE_DIR}/cmake/deb_package_config.cmake) 
    include(CPack)
    
elseif(CMAKE_HOST_WIN32)
add_custom_command(
    TARGET
    ${PROJECT_NAME}
    POST_BUILD
    # COMMAND
    # make_directory ${PROJECT_SOURCE_DIR}/build/bin/plugin
    # COMMAND
    # cd ${PROJECT_SOURCE_DIR} && copy  build/${PROJECT_NAME}.exe build/bin/
    COMMAND
    cd ${PROJECT_SOURCE_DIR}/build && ${CMAKE_PREFIX_PATH}/bin/windeployqt.exe --list "source" --force --qmldir "${CMAKE_PREFIX_PATH}/qml" --dir=bin ${PROJECT_NAME}.exe
    # COMMAND
    # cd ${PROJECT_SOURCE_DIR} && copy build/src/*/*/*.dll build/bin/plugin
    # COMMAND
    # cd ${PROJECT_SOURCE_DIR} && copy build/src/*/*.a build/bin/plugin
    COMMENT
    "${CMAKE_PREFIX_PATH}/qml"
    VERBATIM
    )

    install(TARGETS ${PROJECT_NAME}
            DESTINATION "/")

    install(DIRECTORY  ${PROJECT_SOURCE_DIR}/build/bin/
            DESTINATION "/")
    # 设置软件版本
    set(CPACK_PACKAGE_NAME "NotePad--")
    set(CPACK_PACKAGE_DESCRIPTION "NotePad--")
    set(CPACK_PACKAGE_COPYRIGHT "Copyright (c) 2023")
    set(CPACK_PACKAGE_VERSION "1.22.0")
    set(CPACK_PACKAGE_VERSION_MAJOR "1")
    set(CPACK_PACKAGE_VERSION_MINOR "22")
    set(CPACK_PACKAGE_VERSION_PATCH "0")

    include(${PROJECT_SOURCE_DIR}/cmake/nsis_package_config.cmake) 
    include(CPack)
endif()
