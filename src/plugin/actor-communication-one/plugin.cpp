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

    REGISTER_METHOD_FUNCTION(processor, "add", &Plugin::test_commcuncation, this);

    REGISTER_METHOD_FUNCTION(processor, "test_function_add", &Plugin::test_function_add, this);

    REGISTER_METHOD_FUNCTION(processor, "test_function_more_para", &Plugin::test_function_more_para, this);

    REGISTER_METHOD_FUNCTION(processor, "test_function_para", &Plugin::test_function_para, this);

    REGISTER_METHOD_FUNCTION(processor, "test_function_para_combine", &Plugin::test_function_para_combine, this);

    REGISTER_METHOD_FUNCTION(processor, "test_function_return", &Plugin::test_function_return, this);

    REGISTER_METHOD_FUNCTION(processor, "test_commcuncation", &Plugin::test_commcuncation, this);

    REGISTER_METHOD_FUNCTION(processor, "ref", &Plugin::test_ref_commcuncation, this);

    REGISTER_METHOD_FUNCTION(processor, "widget", &Plugin::test_commcuncation_const, this);
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
