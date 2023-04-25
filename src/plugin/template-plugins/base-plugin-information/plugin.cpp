#include <qobject.h>
#include <qstring.h>
#include <include/pluginGl.h>
#include <functional>
#include <qsciscintilla.h>
#include "ndd_plugin_implement.h"

#include <QMessageBox>
#include <QDir>

/**************************************************************
// 当编译标志 NOTEPAD_PLUGIN_DECLARE_PLUGIN_CONFIG 被定义
    // 将会自动 #include <plugin-config.h>，并提供几个插件相关的宏
        // #define NOTEPAD_VERSION "v1.23.2"
        // #define PLUGIN_NAME     "base-plugin"
        // #define PLUGIN_VERSION  "0.1"

**************************************************************/

// 使用可扩展宏 IDENTIFY_
NOTEPAD_PLUGIN_METADATA_IDENTIFY_ {
    USE_IDENTIFY_VARIABLES

    NOTEPAD_PLUGIN_METADATA(u8"插件信息(information)", PLUGIN_VERSION, "author", u8"显示插件路径插件", "");
    
    return true;
}

// 使用可扩展宏 IMPLEMENT_ ，在 _1 中将进行二级菜单扩展的全局声明
NOTEPAD_PLUGIN_METADATA_IMPLEMENT_1 {
    USE_IMPLEMENT_VARIABLES

    QString title    = "显示插件路径";
    QString textPath = "该插件位置是: \n" + s_strFileName;
    QString textDir  = "该插件目录是: \n" + QFileInfo(strFileName).dir().path();
    
    QMessageBox::information(s_pNotepad, title, textDir);
    QMessageBox::information(s_pNotepad, title, textPath);

    return 0;
}
