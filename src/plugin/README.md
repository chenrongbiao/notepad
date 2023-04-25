# Notepad--Plugin - 基于源代码树的插件开发说明

> 当前插件开发提供一系列模板

- 有关基于源代码的插件开发描述与 template-plugins 说明

    ```shell
    ...
    template-plugins/
    ├── base-plugin                 # 一个比较原始的插件结构，仅用于参考
    ├── base-widget-plugin          # 一个基于 QWidget 的插件模板
    ├── base-widget-ui-plugin       # 一个基于 QMainWindow 的插件模板
    │   ├── CMakeLists.txt
    │   ├── ndd_plugin_implement.cpp    # 提供一组结构实现
    │   ├── ndd_plugin_implement.h      # 
    │   ├── ndd_plugin_implement.ui     # 提供 ui 文件的插件
    │   └── plugin.cpp                  # 提供 插件信息描述文件
    ├── ...                         # 添加更多的模板类型
    └── plugin.cpp # 插件宏变化文件，以记录插件宏与接口的历史性变化
    ...
    ```

- 有关插件接口的说明，以下所有内容在均在 `src/include/pluginGl.h` 中声明

    ```cpp
    // _V0 (早期设计)原始接口，仅提供基本声明与单一触发
    // _V1 (早期设计)在原始接口的基础上，加入了二级菜单接口，
    // _V2 (早期设计)在原始接口与二级菜单接口两者之间进行取舍

    // _   明确的逻辑宏，在不同接口之间进行抽离出具有可扩展的宏设计
    // _1  明确的逻辑宏，在不同接口之间进行抽离出具有可扩展的宏设计

    // 我们有计划性的让 _ 表示定制的插件开始，并计划让 V 系列的不可扩展宏废除
    ```

    ```cpp
    // 早期设计的宏有 _V0、_V1、_V... ，在 _ 出现之前在模板中有使用
    // 计划性让早期设计的 _V<?> 宏被废弃

    // 早期的插件信息描述与实现绑定宏，也许可能会计划性遗弃
    #define NOTEPAD_PLUGIN_METADATA_IDENTIFY(name, version, author, comment, filepath, menu)
    #define NOTEPAD_PLUGIN_METADATA_IMPLEMENT(imp_class, imp_show_window)

    // 在早期，我们使用 NOTEPAD_PLUGIN_METADATA_IDENTIFY 来命名。
    // 现在，我们对每一版本都将采用 _V0, _V1, _V2 的方式命名，并提供 无 V 版本的宏

    // 对于一些未知模板化的定制情况有足够的扩展性
    // 使用 NOTEPAD_PLUGIN_METADATA_IDENTIFY_ 来进行简化宏声明
    // 使用 NOTEPAD_PLUGIN_METADATA_IMPLEMENT_ 来进行简化宏声明

    // 类似这样，有关详细的声明在后面说明
    NOTEPAD_PLUGIN_METADATA_IDENTIFY_ {
        // 在这里写上你的插件信息，以及使用 NOTEPAD_PLUGIN_METADATA 宏来简化你的插件描述
        return true;
    }

    NOTEPAD_PLUGIN_METADATA_IMPLEMENT_ {
        // 在这里写上你的插件实现逻辑
        return 0;
    }
    ```
    
    接下来，对于宏的说明，我将使用缩略的 `...IDENTIFY_` 与 `...IMPLEMENT_` 来说明一些宏的结构

    ```cpp
    // NOTEPAD_PLUGIN_METADATA_IDENTIFY_ 与 _1 的宏定义是这样的
    //  在 IDENTIFY_ 中， 不使用二级菜单扩展的全局声明
    //  在 IDENTIFY_1 中，将使用二级菜单扩展的全局声明
    #define NOTEPAD_PLUGIN_METADATA_IDENTIFY_                   \
        static bool useSecondaryMenu = false;                   \
        bool NDD_PROC_IDENTIFY(NDD_PROC_DATA* pProcData)

    #define NOTEPAD_PLUGIN_METADATA_IDENTIFY_1                  \
        static bool useSecondaryMenu = true;                    \
        bool NDD_PROC_IDENTIFY(NDD_PROC_DATA* pProcData)
    
    // IDENTIFY_ 的扩展
    #define USE_IDENTIFY_VARIABLES                              \
        pProcData->m_menuType = useSecondaryMenu;               \
    ```
    ```cpp
    // NOTEPAD_PLUGIN_METADATA_IMPLEMENT_ 与 _1 的宏定义是这样的
    //  在 IMPLEMENT_  中，声明全局的变量
    //  在 IMPLEMENT_1 中，声明全局的变量
    #define NOTEPAD_PLUGIN_METADATA_IMPLEMENT_                  \
        int NDD_PROC_MAIN(QWidget* pNotepad, const QString& strFileName, std::function<QsciScintilla* ()>getCurEdit, NDD_PROC_DATA* pProcData)

    // 如果你觉得 IMPLEMENT_ 这个宏不够用，那么可以使用 _1 版本宏

    // IMPLEMENT_1 版本宏具有完整性的前面设计，同时可以使用一些扩展
        // 1. 扩展的 USE_IMPLEMENT_VARIABLES 宏
            // 为你完成预留的全局变量(s_开头)的初始化
            // 需要配合使用 IDENTIFY_1 宏

    NOTEPAD_PLUGIN_METADATA_IMPLEMENT_1 {
        // 使用 USE_IMPLEMENT_VARIABLES 宏即可初始化完成一些特定于完整插件实现的处理
    }

    // NOTEPAD_PLUGIN_METADATA_IMPLEMENT_1 的宏定义是这样的
    #define NOTEPAD_PLUGIN_METADATA_IMPLEMENT_1                 \
        static QWidget*                         s_pNotepad;     \
        static QString                          s_strFileName;  \
        static std::function<QsciScintilla* ()> s_getCurEdit;   \
        static NDD_PROC_DATA                    s_pProcData;    \
        NOTEPAD_PLUGIN_METADATA_IMPLEMENT_
        // 在 NOTEPAD_PLUGIN_METADATA_IMPLEMENT_ 之前提供了静态化变量

    // IMPLEMENT_ 的扩展
    #define USE_IMPLEMENT_VARIABLES                             \
        s_pNotepad    = pNotepad;                               \
        s_strFileName = strFileName;                            \
        s_getCurEdit  = getCurEdit;                             \
        if (useSecondaryMenu) {                                 \
            s_pProcData = *pProcData;                           \
        }                                                       \

    // 其中 useSecondaryMenu 变量由 IDENTIFY_ 与 IDENTIFY_1 提供
        // IDENTIFY_  提供了 false
        // IDENTIFY_1 提供了 true
        // 表示是否准备提供二级菜单能力，因为二级菜单能力决定了插件的触发形式
        // false: 不使用二级菜单，它的行为是每被点击一次即触发一次 IMPLEMENT_<?>
        // true: 使用二级菜单，它的行为是程序启动时即触发一次 IMPLEMENT_<?>
        //   接下来，由 IMPLEMENT_<?> 中实现的对 QMenu 类(s_pProcData) 的定制
    ```

    由 `cmake` 生成的的插件信息初始化文件

    ```cmake
    set(LOCAL_PLUGIN_NAME    "base-plugin")
    set(LOCAL_PLUGIN_VERSION "0.1")

    configure_file(${CMAKE_SOURCE_DIR}/cmake/modules/config.h.in 
        plugin-config.h @ONLY)

    # LOCAL_PLUGIN_NAME 可以被用于构建插件所引用的资源目录结构
    ```
    ```cpp
    // 使用  #include NOTEPAD_PLUGIN_CONFIG 来包含当前的插件基本信息
    #include NOTEPAD_PLUGIN_CONFIG
        // 提供了与 cmake 中相同的变量名作为宏名称
        // LOCAL_PLUGIN_NAME    表示这个插件的目标名称
        // LOCAL_PLUGIN_VERSION 表示这个插件的构建版本号

    // NOTEPAD_PLUGIN_CONFIG 的宏定义是这样的
    #define NOTEPAD_PLUGIN_CONFIG  <plugin-config.h>
    ```

- 如何开发一个基于源代码树的插件

    ```cmake
    # 复制一份你所想继承的模板，例如: base-widget-ui-plugin

    # 基于 base-widget-ui-plugin 开发一个新的插件 version-update
        # 1. 将文件夹重命名为插件名称
        # 2. 替换内部 CMakeLists.txt 文件的 base-widget-ui-plugin 字符串
        # 3. 在 plugin/CMakeLists.txt 中添加
        add_subdirectory(version-update)

        # 4. 在 version-update/plugin.cpp 中
        NOTEPAD_PLUGIN_METADATA_IDENTIFY("检查更新", "v0.1", "zinface", 
            "Notepad-- 版本检查", "");

        NOTEPAD_PLUGIN_METADATA_IMPLEMENT(NddPluginImplement, false);
        # NddPluginImplement 是来源于 ndd_plugin_implement.h 的类
        # false 表示这个窗口不需要显示
    ```

- 如何开发一个基于源代码树的原生二级菜单显示插件

    ```cmake
    # 复制一份你所想继承的模板，例如: base-secondary-menu-plugin-v1

    # 基于 base-secondary-menu-plugin-v1 开发一个新的插件 external-plugin
        # 1. 将文件夹重命名为插件名称
        # 2. 替换内部 CMakeLists.txt 文件的 base-widget-ui-plugin 字符串
        # 3. 在 plugin/CMakeLists.txt 中添加
        add_subdirectory(external-plugin)

        # 4. 在 external-plugin/plugin.cpp 中
        NOTEPAD_PLUGIN_METADATA_IDENTIFY_V1("外部插件测试", "0.1", "zinface",
            u8"二级扩展的插件支持", "");

        NOTEPAD_PLUGIN_METADATA_IMPLEMENT_V1(NddPluginImplement, false);
        # NddPluginImplement 是来源于 ndd_plugin_implement.h 的类
        # false 表示这个窗口不需要显示
    ```

- 有关 plugin.cpp 宏变化记录文件

    ```shell
    # 1. 记录了在 cmake-dev 以前的插件宏实现方式
    # 2. 记录了在 cmake-dev 以来的插件宏实现方式
    # 3. 记录了在 cmake-plugins-dev 以来的插件宏实现方式
    # 4. 记录了在 原生支持二级菜单显示 以来的插件宏实现方式
    # 5. 记录了以 _ 为起始的完整性可扩展定制宏，并计划性废除 V 系列不可扩展的固定宏 
    # ...
    ```


- 写在后面
    
    ```shell
    # 此系列插件继承原有的模式，暂不支持在源代码之外构建
    # 
    # 注意：
        # 由于插件系列统一以 ndd_plugin_implement 为文件名
        # 在编写 ui 文件时，请提前打开此 ui 文件相关的 cpp 文件
        # 或关闭其它不相关的插件源文件，以避免生成槽函数时出现在其它位置

    # 关于在 Windows 中编译插件出现的问题：
        # 1. error C2001: 常量中有换行符
            # 在中文与双引号处添加空格为分隔："中文 "
            # 或在中文结束位置添加英文结束符："中文."

            # 此错误一般来源于 NOTEPAD_PLUGIN_METADATA_IDENTIFY 宏
    ```
