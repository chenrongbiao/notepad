#include "plugin.h"

#include <QDockWidget>
#include <QObject>
#include <QAction>
#include <QFileInfo>
#include <QMainWindow>
#include <QDir>
#include <QTreeView>
#include <QDebug>

#include <qsciscintilla.h>

#include "qheaderview.h"
#include "actorprocessor.h"

struct Param{
    int a; int b;
};


class PluginPrivate
{
public:
    PluginPrivate(Plugin *parent):
        q_ptr(parent)
    {}

public:
    ActorProcessor* m_processor;
    QWidget* m_notepadWidget;
    QMenu* m_topMenu;
private:
    Plugin * const q_ptr;
    Q_DECLARE_PUBLIC(Plugin)
};

Plugin::Plugin(QObject *parent):
    d_ptr(new PluginPrivate(this))
{}

Plugin::~Plugin()
{
}

void Plugin::setActorProcessor(ActorProcessor *processor)
{
    Q_D(Plugin);
    d->m_processor = processor;
}

void Plugin::setTopMenu(QMenu *newTopMenu)
{
    Q_D(Plugin);
    d->m_topMenu = newTopMenu;

    QAction* pAction = new QAction("test between plugins communication", d->m_topMenu);
    d->m_topMenu->addAction(pAction);
    connect(pAction, SIGNAL(triggered()),this,SLOT(slotTestPluginCommuncation()));
}

void Plugin::slotTestPluginCommuncation()
{
    Q_D(Plugin);

    Param para;
    para.a = 1;
    para.b = 2;

    d->m_processor->invoke("test_function_add",1,2);
    d->m_processor->invoke("test_function_para",&para);
    d->m_processor->invoke("test_function_para_combine",&para,1);

    d->m_processor->invoke("test_function_para",&para);
    d->m_processor->invoke("test_function_para",&para);
    d->m_processor->invoke("test_function_para",&para);
    d->m_processor->invoke("test_function_para",&para);

    //一个插件调用一个插件曝露接口
    QWidget * widget = new QWidget;
    d->m_processor->invoke("widget",widget);

    //测试获取接口返回值
    QsciScintilla* edit = d->m_processor->invoke<QsciScintilla*>("org.system.getCurEditView");
    if (edit)
    {
        edit->append("append text");
    }
}

void Plugin::setNotepad(QWidget *newNotepad)
{
    Q_D(Plugin);
    d->m_notepadWidget = newNotepad;
}
