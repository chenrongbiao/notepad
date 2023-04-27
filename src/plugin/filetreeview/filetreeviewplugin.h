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


#ifndef FILETREEWIDGET_H
#define FILETREEWIDGET_H

#include <QWidget>
#include <QMenu>
#include <QString>

class QsciScintilla;
class FileTreeViewPluginPrivate;
class ActorProcessor;

class FileTreeViewPlugin :public QObject
{
    Q_OBJECT
public:
    FileTreeViewPlugin(QObject *parent = nullptr);
    ~FileTreeViewPlugin();

public:
    void setActorProcessor(ActorProcessor*processor);
    void setMenuActions(QMenu *menu);
    void setCurrentEditFunc(std::function<QsciScintilla* ()> func);
    void setNotepad(QWidget *newNotepad);
    void setTopMenu(QMenu *newTopMenu);
    void setPluginModulePath(const QString &newPluginModulePath);
private:
    void bindAction();

public slots:
    void slotMenuItemClick();

private:
    FileTreeViewPluginPrivate * const d_ptr;
    Q_DECLARE_PRIVATE(FileTreeViewPlugin);

    FileTreeViewPlugin(const FileTreeViewPlugin &) = delete;
    FileTreeViewPlugin &operator=(const FileTreeViewPlugin &) = delete;
};

#endif // FILETREEWIDGET_H
