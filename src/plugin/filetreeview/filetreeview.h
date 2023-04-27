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

#ifndef WORKSPACE_H
#define WORKSPACE_H

#include <QObject>
#include <QTreeView>

class QModelIndex;
class QWidget;
class QMenu;
class ActorProcessor;

class FileTreeViewPrivate;

class  FileTreeView : public QTreeView
{
    Q_OBJECT
public:
    FileTreeView(QWidget* parent = nullptr);

    ~FileTreeView();

    void initMenuFile(QMenu*);
    void initDirMenu(QMenu*);

    void bindAction();
    void setActorProcessor(ActorProcessor*processor);

    void setMainWindow(QWidget* notepadWidget);

public slots:
    void onNewWorkspaceItem(bool);
    void slotCliecked(const QModelIndex &);
    void slotDoubleCliecked(const QModelIndex &);
    void slotCustomContextMenu(const QPoint &);
    void slotTerminal(bool);
    void slotNewFile(bool);
    void slotRemoveFile(bool);
    void slotAddDir(bool);
    void slotRemoveDir(bool);
    void slotupdateDir(bool);
signals:
    void signalNewFile();
    void signalRemoveFile();
    void signalAddDir();

private:
    FileTreeViewPrivate * const d_ptr;
    Q_DECLARE_PRIVATE(FileTreeView);

    FileTreeView(const FileTreeView &) = delete;
    FileTreeView &operator=(const FileTreeView &) = delete;
};

#endif // WORKSPACE_H
