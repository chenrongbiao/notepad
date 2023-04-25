#include <qobject.h>
#include <qstring.h>
#include <include/pluginGl.h>
#include <functional>
#include <qsciscintilla.h>
#include "ndd_plugin_implement.h"

NOTEPAD_PLUGIN_METADATA_IDENTIFY_1 {
    USE_IDENTIFY_VARIABLES

    NOTEPAD_PLUGIN_METADATA("简易 Linux 集成终端", "0.1", "author", u8"基于 LXQT QTerminal 的插件", "");

    return true;
}

NOTEPAD_PLUGIN_METADATA_IMPLEMENT_1 {
    USE_IMPLEMENT_VARIABLES

    auto imp = new NddPluginImplement(s_pNotepad, s_getCurEdit());
    imp->setMenuActions(s_pProcData.m_rootMenu);
    imp->setCurrentEditFunc(s_getCurEdit);

    return 0;   
}
