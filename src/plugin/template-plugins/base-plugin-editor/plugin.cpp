#include <qobject.h>
#include <qstring.h>
#include <include/pluginGl.h>
#include <functional>
#include <qsciscintilla.h>
#include "ndd_plugin_implement.h"

#include <QDebug>

/**************************************************************
// 当编译标志 NOTEPAD_PLUGIN_DECLARE_PLUGIN_CONFIG 被定义
    // 将会自动 #include <plugin-config.h>，并提供几个插件相关的宏
        // #define NOTEPAD_VERSION "v1.23.2"
        // #define PLUGIN_NAME     "opencc-demo-plugin"
        // #define PLUGIN_VERSION  "0.1"

**************************************************************/

// 使用可扩展宏 IDENTIFY_
NOTEPAD_PLUGIN_METADATA_IDENTIFY_ {
    USE_IDENTIFY_VARIABLES
    
    NOTEPAD_PLUGIN_METADATA(u8"基本插件(editor)", PLUGIN_VERSION, "author", u8"获取 editor 的内容", "");
    
    return true;
}

// 使用可扩展宏 IMPLEMENT_ ，在 _1 中将进行二级菜单扩展的全局声明
NOTEPAD_PLUGIN_METADATA_IMPLEMENT_1 {
    USE_IMPLEMENT_VARIABLES
    
    auto placeholder = s_getCurEdit();
    NddPluginImplement imp(placeholder);
   
    return 0;
}
