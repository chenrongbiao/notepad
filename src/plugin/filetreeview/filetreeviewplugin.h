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
