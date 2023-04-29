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

#include "actor.h"
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

    REGISTER_FUNCTION(processor, "add", [this](int a, int b)->int{
        return test_commcuncation(a,b);
    })

    REGISTER_FUNCTION(processor, "add", [this](int a, int b)->int{
            return test_commcuncation(a,b);
    })

    REGISTER_FUNCTION(processor, "ref", [this](int a, int b)->int{
         return test_ref_commcuncation(a,b);
    })

    REGISTER_FUNCTION(processor, "widget", [this](QWidget* widget)->void{
        test_commcuncation_const(widget);
        qDebug() << "actor-communication-main-plugins plugin respond" ;
    })
}

void Plugin::setTopMenu(QMenu *newTopMenu)
{
    Q_D(Plugin);
    d->m_topMenu = newTopMenu;
}

void Plugin::setNotepad(QWidget *newNotepad)
{
    Q_D(Plugin);
    d->m_notepadWidget = newNotepad;
}
