# interfaces.cmake
    # 仅作为在上层进行引入的方案

# 构建可扩展插件能力的接口
    # 从 base-plugin-interface 中进行设计并构建为 plugin_interface


if(TRUE)
    set(interfaces 
        ${CMAKE_CURRENT_LIST_DIR}/ndd-base
        ${CMAKE_CURRENT_LIST_DIR}/ndd-menu
        ${CMAKE_CURRENT_LIST_DIR}/ndd-dock
    )
    message("interfaces:" "${interfaces}")

    spark_add_library_file_glob(plugin_interface STATIC
        interfaces/ndd-base/*.h interfaces/ndd-base/*.cpp
        interfaces/ndd-menu/*.h interfaces/ndd-menu/*.cpp
        interfaces/ndd-dock/*.h interfaces/ndd-dock/*.cpp
    )
    target_include_directories(plugin_interface
        PUBLIC
            ${interfaces})
    # target_link_qt5(plugin_interface)
    if(USE_QT6)
        target_link_qt6(plugin_interface)
    else()
        target_link_qt5(plugin_interface)
    endif(USE_QT6)
endif(TRUE)

# 使用 spark 风格链接的 plugin_interface
macro(target_link_plugin_interface _target)
    target_link_libraries(${_target}
        plugin_interface)
endmacro(target_link_plugin_interface _target)