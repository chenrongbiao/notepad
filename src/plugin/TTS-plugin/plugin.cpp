#include <qobject.h>
#include <qstring.h>
#include <include/pluginGl.h>
#include <functional>
#include <qsciscintilla.h>
#include "ndd_plugin_implement.h"


NOTEPAD_PLUGIN_METADATA_IDENTIFY_1 {
    USE_IDENTIFY_VARIABLES

    NOTEPAD_PLUGIN_METADATA(u8"TTS 语音合成", "0.1", "zinface", u8"二级菜单高级插件", "");

    return true;
}

NOTEPAD_PLUGIN_METADATA_IMPLEMENT_1 {
    USE_IMPLEMENT_VARIABLES

    auto imp = new NddPluginImplement(s_pNotepad, s_getCurEdit());
    imp->setCurrentEditFunc(s_getCurEdit);
    imp->setMenuActions(s_pProcData.m_rootMenu);

    return 0;
}
