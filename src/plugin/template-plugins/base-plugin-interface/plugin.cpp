#include <qobject.h>
#include <qstring.h>
#include <include/pluginGl.h>
#include <functional>
#include <qsciscintilla.h>
#include "ndd_plugin_implement.h"
#include "ndd_plugin_interface.h"

#include <QDebug>

/**************************************************************
// 当编译标志 NOTEPAD_PLUGIN_DECLARE_PLUGIN_CONFIG 被定义
    // 将会自动 #include <plugin-config.h>，并提供几个插件相关的宏
        // #define NOTEPAD_VERSION "v1.23.2"
        // #define PLUGIN_NAME     "base-plugin"
        // #define PLUGIN_VERSION  "0.1"

**************************************************************/

// 使用可扩展宏 IDENTIFY_
NOTEPAD_PLUGIN_METADATA_IDENTIFY_1 {
    USE_IDENTIFY_VARIABLES

    NOTEPAD_PLUGIN_METADATA("基本插件(interface)", PLUGIN_VERSION, "author", "基本 接口化与多继承实现 的插件", "");
    
    return true;
}


// 使用可扩展宏 IMPLEMENT_ ，在 _1 中将进行二级菜单扩展的全局声明
NOTEPAD_PLUGIN_METADATA_IMPLEMENT_1 {
    USE_IMPLEMENT_VARIABLES


    qInfo() << PLUGIN_NAME << ":" << PLUGIN_VERSION;
    qInfo() << PLUGIN_NAME << ":" << QString("基于 %1 编译").arg(NOTEPAD_VERSION);
        
    // auto base = new BaseNddPluginInterface();
    // USE_INTERFACE_IMPLEMENT(base)

    // qInfo() << "[pluginDir]:" << base->pluginDir();
    // qInfo() << "[pluginFile]:" << base->pluginFile();
    // qInfo() << "[pluginVersion]:" << base->pluginVersion();
    // qInfo() << "[pluginResourceDir]:" << base->pluginResourceDir();


    auto imp = new NddPluginImplement();
    USE_INTERFACE_IMPLEMENT(imp);
    USE_MENU_IMPLEMENT(imp);

    return 0;
}
