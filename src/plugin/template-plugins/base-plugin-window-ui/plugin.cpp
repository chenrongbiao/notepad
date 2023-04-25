#include <qobject.h>
#include <qstring.h>
#include <include/pluginGl.h>
#include <functional>
#include <qsciscintilla.h>
#include "ndd_plugin_implement.h"

NOTEPAD_PLUGIN_METADATA_IDENTIFY_ {
    USE_IDENTIFY_VARIABLES

    NOTEPAD_PLUGIN_METADATA(u8"基本插件(window-ui)", PLUGIN_VERSION, "author", u8"基于 QMainWindow Ui 的插件", "");

    return true;
}

NOTEPAD_PLUGIN_METADATA_IMPLEMENT_1 {
    USE_IMPLEMENT_VARIABLES

    NddPluginImplement *imp = new NddPluginImplement(s_pNotepad);
    imp->setWindowTitle(u8"基于 QMainWindow Ui 的插件");
    imp->setWindowFlag(Qt::Window);
    imp->show();

    return 0;
}
