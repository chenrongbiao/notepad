# base-plugin-interface 设计

- 主体结构预览

    ```
    .
    ├── CMakeLists.txt
    ├── interfaces
    │   ├── ndd-base
    │   │   ├── ndd_plugin_base_interface.cpp
    │   │   └── ndd_plugin_base_interface.h
    │   ├── ndd-dock
    │   │   ├── ndd_plugin_dock_interface.cpp
    │   │   └── ndd_plugin_dock_interface.h
    │   └── ndd-menu
    │       ├── ndd_plugin_menu_interface.cpp
    │       └── ndd_plugin_menu_interface.h
    ├── ndd_plugin_implement.cpp
    ├── ndd_plugin_implement.h
    ├── ndd_plugin_interface.cpp
    ├── ndd_plugin_interface.h
    ├── plugin.cpp
    └── README.md

    4 directories, 13 files
    ```


- 接口化与继承实现说明

    ```c
    // 前提：一切基于接口化操作
    
    // 如果插件实现需要拥有某种特定功能，即可继承一个类接口

    // 如果插件继承了一个包含虚函数的接口，继承者应该去实现它
    ```