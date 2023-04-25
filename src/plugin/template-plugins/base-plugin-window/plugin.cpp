#include <qobject.h>
#include <qstring.h>
#include <include/pluginGl.h>
#include <functional>
#include <qsciscintilla.h>
#include "ndd_plugin_implement.h"

#include <QMessageBox>

NOTEPAD_PLUGIN_METADATA_IDENTIFY_ {
    USE_IDENTIFY_VARIABLES

    NOTEPAD_PLUGIN_METADATA(u8"基本插件(window)", PLUGIN_VERSION, "author", u8"显示 Window 插件", "");
    
    return true;
}

NOTEPAD_PLUGIN_METADATA_IMPLEMENT_1 {
    USE_IMPLEMENT_VARIABLES

    NddPluginImplement *imp = new NddPluginImplement(s_pNotepad);
    imp->setWindowTitle(u8"显示 Window 插件");
    imp->setWindowFlags(Qt::Window);
    imp->resize(QSize(600, 400));
    imp->show();

    // 插件已成功实现
    return 0;
}
