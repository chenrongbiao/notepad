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
    int a = 2;
    int b = 1;
    int c = d->m_processor->invoke<int>("add",a,b);
    qDebug() << "this is from actor-communication-main-plugins interfece , call by actor-communication-between-plugins" ;
    qDebug() << a << "+" << b << "=" << c;
}

void Plugin::setNotepad(QWidget *newNotepad)
{
    Q_D(Plugin);
    d->m_notepadWidget = newNotepad;
}
