
if(CMAKE_HOST_WIN32)
    include(cmake/SparkInstallMacrosConfig.cmake)
    # ------------------ INSTALL PLUGIN CONFIG ------------------ #
    # ------------------ INSTALL PLUGIN CONFIG ------------------ #
    # ------------------ INSTALL PLUGIN CONFIG ------------------ #
    include(CMakePackageConfigHelpers)
    include(GNUInstallDirs)
    
    # 定义插件配置安装位置
    # set(CMAKE_INSTALL_PREFIX "/usr") # 仅限 Linux ，Windows 中不使用
    set(NOTEPAD_PLUGIN NotepadPlugin)
    
    # 定义开发插件时的配置目录与 CMake 模块文件名称
    set(NOTEPAD_PLUGIN_CONFIG       ${NOTEPAD_PLUGIN}Config.cmake)
    # 定义一些扩展内容，主要是提供给 CMake 模块文件填充
    set(NOTEPAD_PLUGIN_CORELIB QSci) # QSci 为构建的 QScintllia 库

    # 定义在插件开发的 CMake 模块中，Notepad-- 是否是基于 QT5 实现
        # 并自动为插件开发层自动开启相关 Qt 依赖组件
        # 此部分逻辑将自动提供给 add_notepad_plugin 自行处理
    set(NOTEPAD_BUILD_BY_QT5 TRUE)
    set(NOTEPAD_BUILD_BY_QT6 FALSE)

    # 定义在平台中插件应该安装的位置(待确定)
        # 定义在插件开发的 CMake 模块中，Notepad-- 是否将提供 "插件安装目录(位置)"
    set(NOTEPAD_PLUGIN_EXTERNAL_PLUGIN_INSTALL_DIRECTORY "")

    # 这些是在此部分安装时使用，但不被用于填充 NotepadPlugin.cmake.in 的内容
    set(NOTEPAD_PLUGIN_INCLUDEDIR   ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_INCLUDEDIR}/${NOTEPAD_PLUGIN})
    set(NOTEPAD_PLUGIN_LIBDIR       ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR}/${NOTEPAD_PLUGIN})
    

    # 将 NOTEPAD_PLUGIN_INCLUDEDIR NOTEPAD_PLUGIN_LIBDIR 填充到 cmake 文件
    configure_package_config_file(cmake/NotepadPluginConfig.cmake.in
        ${CMAKE_BINARY_DIR}/${NOTEPAD_PLUGIN_CONFIG}
        INSTALL_DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/${NOTEPAD_PLUGIN})
    # 安装 cmake 文件
    spark_install_file(${CMAKE_INSTALL_LIBDIR}/cmake/${NOTEPAD_PLUGIN} 
        ${CMAKE_BINARY_DIR}/${NOTEPAD_PLUGIN_CONFIG})
    # 安装头插件接口文件
    spark_install_file(${NOTEPAD_PLUGIN_INCLUDEDIR} 
        src/include/pluginGl.h)
    # 安装插件所需要的Qsci文件
    spark_install_directory(${NOTEPAD_PLUGIN_INCLUDEDIR} 
        src/qscint/src/Qsci)
    # 安装开发插件高级功能所需要的内容
    spark_install_directory(${NOTEPAD_PLUGIN_INCLUDEDIR}/qscint
        src/qscint/scintilla)

    # 导出 QSci 的头文件(从插件实现层面来看，目前是使用*.h 与 pluginGl.h
        # 但从 Qsci 层面来看，*.h 使用的是 #include <Qsci/*.h> ，所以此部分不被使用)
    # spark_file_glob(QSci_HEADERS src/qscint/src/Qsci/*.h src/include/pluginGl.h)
    # set_target_properties(QSci PROPERTIES PUBLIC_HEADER "${QSci_HEADERS}")

    # 导出 Notepad-- 的接口文件(从逻辑层面来看，目前已经在前面安装了接口文件，所以此部分不被使用)
    # spark_file_glob(Notepad_HEADERS src/include/pluginGl.h)
    # set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER "${QSci_HEADERS}")

    # 安装项目文件与 QSci 文件
    install(TARGETS ${PROJECT_NAME} QSci
        RUNTIME DESTINATION         bin
        LIBRARY DESTINATION         ${NOTEPAD_PLUGIN_LIBDIR}
        ARCHIVE DESTINATION         ${NOTEPAD_PLUGIN_LIBDIR}
        PUBLIC_HEADER DESTINATION   ${NOTEPAD_PLUGIN_INCLUDEDIR}
    )
    # ------------------ INSTALL PLUGIN CONFIG ------------------ #
    # ------------------ INSTALL PLUGIN CONFIG ------------------ #
    # ------------------ INSTALL PLUGIN CONFIG ------------------ #

    message(" -------- ${CMAKE_INSTALL_PREFIX} ---------- ")
    message("${Qt5_DIR}/../../../bin/windeployqt")

	# 1. 在顶层构建中导入 WindowsQtDeploy 的构建
    # 自动化构建 Windows Qt 部署功能
    add_custom_target(windeployqt
            COMMAND ${Qt5_DIR}/../../../bin/windeployqt ${CMAKE_BINARY_DIR}/${PROJECT_NAME}.exe --compiler-runtime --verbose 2 --dir ${CMAKE_BINARY_DIR}/winqt/)

endif(CMAKE_HOST_WIN32)
