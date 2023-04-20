#include "filetreeviewplugin.h"

#include <QDockWidget>
#include <QObject>
#include <QAction>
#include <QFileInfo>
#include <QMainWindow>
#include <QDir>
#include <QTreeView>
#include <QDebug>

#include <qsciscintilla.h>

#include "filetreeview.h"
#include "filesystemmodel.h"
#include "qheaderview.h"
#include "actorprocessor.h"

class FileTreeViewPluginPrivate
{
public:
    FileTreeViewPluginPrivate(FileTreeViewPlugin *parent):
        q_ptr(parent)
    {}

public:
    ActorProcessor* m_processor;
    QWidget* m_notepadWidget;
    QMenu* m_topMenu;
    QString m_pluginModulePath;
    QDockWidget* m_dockWidget;
    FileTreeView*m_treeview;
    FileSystemModel * m_model;

    std::function<QsciScintilla* ()> getCurrentEditFunc;

private:
    FileTreeViewPlugin * const q_ptr;
    Q_DECLARE_PUBLIC(FileTreeViewPlugin);
};

FileTreeViewPlugin::FileTreeViewPlugin(QObject *parent):
    d_ptr(new FileTreeViewPluginPrivate(this))
{}

FileTreeViewPlugin::~FileTreeViewPlugin()
{
}

void FileTreeViewPlugin::setActorProcessor(ActorProcessor *processor)
{
    Q_D(FileTreeViewPlugin);
    d->m_processor = processor;
}

void FileTreeViewPlugin::setPluginModulePath(const QString &newPluginModulePath)
{
    Q_D(FileTreeViewPlugin);
    d->m_pluginModulePath = newPluginModulePath;
}

void FileTreeViewPlugin::bindAction()
{
}

void FileTreeViewPlugin::setTopMenu(QMenu *newTopMenu)
{
    Q_D(FileTreeViewPlugin);
    d->m_topMenu = newTopMenu;
}

void FileTreeViewPlugin::setNotepad(QWidget *newNotepad)
{
    Q_D(FileTreeViewPlugin);
    d->m_notepadWidget = newNotepad;
}

void FileTreeViewPlugin::setMenuActions(QMenu *menu)
{
    Q_D(FileTreeViewPlugin);
    QAction* pAction = new QAction("File Tree", menu);
    menu->addAction(pAction);
    connect(pAction, SIGNAL(triggered()),this,SLOT(slotMenuItemClick()));
}

void FileTreeViewPlugin::setCurrentEditFunc(std::function<QsciScintilla *()> func)
{
    Q_D(FileTreeViewPlugin);
    d->getCurrentEditFunc = func;
}

void FileTreeViewPlugin::slotMenuItemClick()
{
    Q_D(FileTreeViewPlugin);

    auto action = qobject_cast<QAction*>(sender());
    auto mainWindow = dynamic_cast<QMainWindow*>(d->m_notepadWidget);
    if (!mainWindow)
        return;

    if (!d->m_dockWidget) {
        d->m_dockWidget = new QDockWidget(mainWindow);
        mainWindow->addDockWidget(Qt::LeftDockWidgetArea, d->m_dockWidget);

        d->m_treeview = new FileTreeView();
        d->m_treeview->setActorProcessor(d->m_processor);
        d->m_treeview->setMainWindow(d->m_notepadWidget);
        d->m_treeview->header()->setVisible(false);
        d->m_model = new FileSystemModel(d->m_treeview);
        d->m_model->setRootPath("C:");

        QAction* pAction = new QAction("Open Fold", d->m_topMenu);
        d->m_topMenu->addAction(pAction);
        connect(pAction, SIGNAL(triggered(bool)),d->m_treeview,SLOT(onNewWorkspaceItem(bool)));
        d->m_treeview->setModel(d->m_model);
        d->m_dockWidget->setWidget(d->m_treeview);
    }

    if (!d->m_dockWidget->isVisible())
        d->m_dockWidget->show();
}
