/**
 ** This file is part of ndd plugin file tree view
 ** Copyright ji wang <matheuter@gmail.com>.
 **
 ** This program is free software: you can redistribute it and/or modify
 ** it under the terms of the GNU Lesser General Public License as
 ** published by the Free Software Foundation, either version 3 of the
 ** License, or (at your option) any later version.
 **
 ** This program is distributed in the hope that it will be useful,
 ** but WITHOUT ANY WARRANTY; without even the implied warranty of
 ** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 ** GNU Lesser General Public License for more details.
 **
 ** You should have received a copy of the GNU Lesser General Public License
 ** along with this program.  If not, see <http://www.gnu.org/licenses/>.
 **/

#include "filetreeview.h"

#include <QTreeView>
#include <QJsonObject>
#include <QFileDialog>
#include <QMenu>
#include <QApplication>
#include <QMessageBox>
#include <QProcess>
#include <qsciscintilla.h>
#include"actorprocessor.h"
#include "filesystemmodel.h"

class FileTreeViewPrivate
{
public:
    FileTreeViewPrivate(FileTreeView *parent):
        q_ptr(parent)
    {}

public:
    ActorProcessor* m_processor;
    QMenu*  m_fileMenu;
    QMenu*  m_dirMenu;
    QWidget* m_notepadWidget;

private:
    FileTreeView * const q_ptr;
    Q_DECLARE_PUBLIC(FileTreeView);
};

FileTreeView::FileTreeView(QWidget *parent):
    d_ptr(new FileTreeViewPrivate(this)),
    QTreeView(parent)
{
    bindAction();
    setContextMenuPolicy(Qt::CustomContextMenu);
    connect(this, SIGNAL(doubleClicked(QModelIndex)),this, SLOT(slotDoubleCliecked(QModelIndex)));
    connect(this,SIGNAL(customContextMenuRequested(const QPoint &)),this, SLOT(slotCustomContextMenu(const QPoint &)));
}

FileTreeView::~FileTreeView()
{}

void FileTreeView::onNewWorkspaceItem(bool)
{
    QString srcDirPath = QFileDialog::getExistingDirectory(
                   this, "choose src Directory",
                    "/");
    if (srcDirPath.isEmpty()){
        return;
    }
    FileSystemModel* model = static_cast<FileSystemModel*> (this->model());
    model->addRootPath(srcDirPath);
    model->reload();
    this->update();
}

void FileTreeView::slotCustomContextMenu(const QPoint & pos)
{
    Q_D(FileTreeView);
    auto model = static_cast<FileSystemModel*>(this->model());
    auto index= this->indexAt(pos);
    if (model->nodeFromIndex(index)->isDir()){
        d->m_dirMenu->exec(QCursor::pos());
    }
    else {
        d->m_fileMenu->exec(QCursor::pos());
    }
}

void FileTreeView::slotTerminal(bool)
{
}

void FileTreeView::slotNewFile(bool)
{
    
}

void FileTreeView::slotRemoveFile(bool)
{
}

void FileTreeView::slotAddDir(bool)
{
    
}

void FileTreeView::slotRemoveDir(bool)
{
    Q_D(FileTreeView);
    auto model = static_cast<FileSystemModel*>(this->model());
    auto index= this->currentIndex();
    if (model->nodeFromIndex(index)->isDir()){
        (d->m_dirMenu)->exec(QCursor::pos());
    }
    else {
        (d->m_fileMenu)->exec(QCursor::pos());
    }
}

void FileTreeView::slotupdateDir(bool)
{
    auto model = static_cast<FileSystemModel*>(this->model());
    auto index= this->currentIndex();
    if (model->nodeFromIndex(index)->isDir()){
        model->reloadDirectory(model->nodeFromIndex(index)->getNodePath());
    }
}

void FileTreeView::initMenuFile(QMenu *menu)
{
    Q_D(FileTreeView);
    d->m_fileMenu = menu;
}

void FileTreeView::initDirMenu(QMenu *menu)
{
    Q_D(FileTreeView);
    d->m_dirMenu = menu;
}

void FileTreeView::bindAction()
{
    Q_D(FileTreeView);
    QMenu* fileTreeMenu  = new QMenu("menu",this);
    QMenu* dirTreeMenu  = new QMenu("file",this);

    QAction *fileRename =           new QAction(tr("Rename"),fileTreeMenu);
    QAction *fileDelete =           new QAction(tr("Delete"),fileTreeMenu);
    QAction *fileOpenInExporter =   new QAction(tr("OpenInExporter"),fileTreeMenu);

    QAction *removeDir =            new QAction(tr("Remove Dir"),dirTreeMenu);
    QAction *update =               new QAction(tr("Update"),dirTreeMenu);
    QAction *fold =                 new QAction(tr("Fold Dir"),dirTreeMenu);
    QAction *unfold =               new QAction(tr("Unfold Dir"),dirTreeMenu);
    QAction *terminal =             new QAction(tr("terminal"));

    d->m_dirMenu = dirTreeMenu;
    d->m_dirMenu->addActions({removeDir,update,fold,unfold,terminal});
    d->m_fileMenu = fileTreeMenu;
    d->m_fileMenu->addActions({fileRename,fileDelete,fileOpenInExporter,terminal});
}

void FileTreeView::setActorProcessor(ActorProcessor *processor)
{
    Q_D(FileTreeView);
    d->m_processor = processor;
}

void FileTreeView::setMainWindow(QWidget *notepadWidget)
{
    Q_D(FileTreeView);
    d->m_notepadWidget = notepadWidget;
}

void FileTreeView::slotCliecked(const QModelIndex &index)
{
}

void FileTreeView::slotDoubleCliecked(const QModelIndex &index)
{
    Q_D(FileTreeView);
    auto model = static_cast<FileSystemModel*>(this->model());
    if (model->nodeFromIndex(index)->isDir()){
    }
    else {
        d->m_processor->invoke("openFile",model->nodeFromIndex(index)->getNodePath(),-1);
        int a = 0;
        int b = 2;
        int re = d->m_processor->invoke<int>("add",a,b);
        qDebug() << re;
    }
}




