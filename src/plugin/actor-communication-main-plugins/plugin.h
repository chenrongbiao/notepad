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
class PluginPrivate;
class ActorProcessor;

class Plugin : public QObject
{
    Q_OBJECT
public:
    Plugin(QObject *parent = nullptr);
    ~Plugin();

public:
    void setActorProcessor(ActorProcessor*processor);
    void setNotepad(QWidget *newNotepad);
    void setTopMenu(QMenu *newTopMenu);

    int test_commcuncation(int a, int b){return a + b;}
    int test_ref_commcuncation(int& a, int& b){return a + b;}
    void test_commcuncation_const(QWidget* a){a->setMinimumWidth(10);a->setMinimumHeight(10); a->show();}

private:
    PluginPrivate * const d_ptr;
    Q_DECLARE_PRIVATE(Plugin)

    Plugin(const Plugin &) = delete;
    Plugin &operator=(const Plugin &) = delete;
};

#endif // FILETREEWIDGET_H
