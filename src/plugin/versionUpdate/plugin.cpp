#include <qobject.h>
#include <qstring.h>
#include <include/pluginGl.h>
#include <functional>
#include <qsciscintilla.h>
#include "ndd_plugin_implement.h"



NOTEPAD_PLUGIN_METADATA_IDENTIFY_ {
    USE_IDENTIFY_VARIABLES

    NOTEPAD_PLUGIN_METADATA(u8"检查更新", "v0.1", "zinface", u8"Notepad-- 版本检查插件", "");

    return true;
}


NOTEPAD_PLUGIN_METADATA_IMPLEMENT_1 {
    USE_IMPLEMENT_VARIABLES
    
    // FIXME: improve StatusWidget, add lifecycle flags.
    auto *imp = new NddPluginImplement(s_pNotepad, s_getCurEdit());

    return 0;
}
