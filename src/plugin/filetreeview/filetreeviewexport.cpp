#include <qobject.h>
#include <qstring.h>
#include <pluginGl.h>
#include <functional>
#include <qsciscintilla.h>
#include <QAction>
#include <QDebug>

#include "filetreeviewplugin.h"
#include "actorprocessor.h"
#define NDD_EXPORTDLL

#if defined(Q_OS_WIN)
#if defined(NDD_EXPORTDLL)
#define NDD_EXPORT __declspec(dllexport)
#else
#define NDD_EXPORT __declspec(dllimport)
#endif
#else
#define NDD_EXPORT __attribute__((visibility("default")))
#endif

#ifdef __cplusplus
extern "C" {
#endif

NDD_EXPORT bool NDD_PROC_IDENTIFY(NDD_PROC_DATA* pProcData);
//NDD_EXPORT int NDD_PROC_MAIN(QWidget* pNotepad, const QString& strFileName, std::function<QsciScintilla* ()>getCurEdit, NDD_PROC_DATA* procData);
NDD_EXPORT int NDD_PROC_MAIN_V2(QWidget* pNotepad, const QString& strFileName,ActorProcessor* processor, NDD_PROC_DATA* procData);

#ifdef __cplusplus
}
#endif

static NDD_PROC_DATA s_procData;
static QWidget* s_pMainNotepad = nullptr;
std::function<QsciScintilla* ()> s_getCurEdit;

bool NDD_PROC_IDENTIFY(NDD_PROC_DATA* pProcData)
{
    if(pProcData == NULL)
    {
        return false;
    }
    pProcData->m_strPlugName = QObject::tr("File Tree");
    pProcData->m_strComment = QObject::tr("file tree plugin");

    pProcData->m_version = QString("1.0");
    pProcData->m_auther = QString("matheuter@gmail.com");

    pProcData->m_menuType = 1;
    return true;
}

int NDD_PROC_MAIN_V2(QWidget* pNotepad, const QString& strFileName,ActorProcessor* processor,NDD_PROC_DATA* pProcData)
{
    qDebug() << "test plugin";
    //务必拷贝一份pProcData，在外面会释放。
    if (pProcData != nullptr)
    {
        s_procData = *pProcData;
    }
    else
    {
        return -1;
    }

    s_pMainNotepad = pNotepad;
    FileTreeViewPlugin* plugin = new FileTreeViewPlugin();
    plugin->setPluginModulePath(strFileName);
    plugin->setActorProcessor(processor);

    plugin->setTopMenu(pProcData->m_rootMenu);
    plugin->setMenuActions(s_procData.m_rootMenu);
    plugin->setNotepad(s_pMainNotepad);
    processor->invoke("openFile",QString("F:/Maple/tests/main.cpp"),-1);
    return 0;
}
