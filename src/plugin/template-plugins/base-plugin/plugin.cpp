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
    
    NOTEPAD_PLUGIN_METADATA("base-plugin", PLUGIN_VERSION, "author", u8"基本插件", "");
    
    qInfo() << "[Plugin]" << "strPlugName:" << pProcData->m_strPlugName;
    qInfo() << "[Plugin]" << "Version:    " << pProcData->m_version;
    qInfo() << "[Plugin]" << "strComment: " << pProcData->m_strComment;
    qInfo() << "[Plugin]" << "Author:     " << pProcData->m_auther;
    qInfo() << "[Plugin]" << "strFilePath:" << pProcData->m_strFilePath;

    qInfo() << "[Plugin]" << "PLUGIN_VERSION: " << PLUGIN_VERSION;
    qInfo() << "[Plugin]" << "NOTEPAD_VERSION:" << QString(u8"基于 %1 编译").arg(NOTEPAD_VERSION);

    // [Plugin] strPlugName: "base-plugin"
    // [Plugin] Version:     "0.1"
    // [Plugin] strComment:  "基本插件"
    // [Plugin] Author:      "author"
    // [Plugin] strFilePath: ""
    // [Plugin] PLUGIN_VERSION:  0.1
    // [Plugin] NOTEPAD_VERSION: "基于 v1.23.2 编译"

    return true;
}

// 使用可扩展宏 IMPLEMENT_ ，在 _1 中将进行二级菜单扩展的全局声明
NOTEPAD_PLUGIN_METADATA_IMPLEMENT_1 {
    USE_IMPLEMENT_VARIABLES
    
    // 输出：从插件中能获取的所有继承的对象名称
    QObject *parent = nullptr;
    QString indent = "";

    // 以 s_pNotepad 对象开始的父级探索
    {
        parent = s_pNotepad;
        // if 判断
        if (parent) {
            qInfo() << PLUGIN_NAME << ":" << parent->objectName();
        }
        // base-plugin：CCNotePad

        // while 简写
        qInfo() << "[Parent layer]";
        while (parent) {
            qInfo() << QString("%1%2").arg(indent).arg(parent->objectName());
            parent = parent->parent();   
            indent = indent.append("  ");
        }
        // [Parent layer]
        // "CCNotePad"
    }

    // 从 [s_]getCurEdit 开始的父级探索
    {
        // if 判断形式，比较复杂
        // if (getCurEdit) // 从 getCurEdit 开始
        // {
        //     if (getCurEdit()) {
        //         // ""
        //         qInfo() << PLUGIN_NAME << ":" << getCurEdit()->objectName();
        //         if (getCurEdit()->parent())
        //         {  // qt_tabwidget_stackedwidget
        //             qInfo() << PLUGIN_NAME << ":" << getCurEdit()->parent()->objectName();
        //             if (getCurEdit()->parent()->parent())
        //             { // editTabWidget
        //                 qInfo() << PLUGIN_NAME << ":" << getCurEdit()->parent()->parent()->objectName();
        //                 if (getCurEdit()->parent()->parent()->parent())
        //                 { // centralWidget
        //                     qInfo() << PLUGIN_NAME << ":" << getCurEdit()->parent()->parent()->parent()->objectName();
        //                     if (getCurEdit()->parent()->parent()->parent()->parent())
        //                     { // CCNotePad
        //                         qInfo() << PLUGIN_NAME << ":" << getCurEdit()->parent()->parent()->parent()->parent()->objectName();
        //                     }
        //                 }
        //             }
        //         }
        //     }
        // }

        // while 判断形式，比较简单
        parent = getCurEdit();
        indent = "";
        qInfo() << "[Parent layer]";
        // while 简写
        while (parent) {
            qInfo() << QString("%1%2").arg(indent).arg(parent->objectName());
            parent = parent->parent();   
            indent = indent.append("  ");
        }
        // [Parent layer]
        // ""
        // "  qt_tabwidget_stackedwidget"
        // "    editTabWidget"
        // "      centralWidget"
        // "        CCNotePad"
    }

    return 0;
}
