#ifndef FILESYSTEMMODEL_H
#define FILESYSTEMMODEL_H

#include <QAbstractItemModel>
#include <QStringList>
#include <QIcon>
#include <QFileInfo>
#include <QDir>
#include <QMutex>

class FileSystemModel;
class QFileSystemWatcher;

class QFileIconProvider;
class QFileSystemWatcher;
class QTreeView;

class FileNode
{
public:

    FileNode(FileSystemModel *model);
    FileNode(FileSystemModel *model,const QString &path, FileNode *parent);
    virtual ~FileNode();

    // 返回父节点
    FileNode* getNodeParent(); 	

    // 按照index返回
    FileNode* getChild(int row);    

    //! returns the number of children this node has.
    int childCount();   

    //! returns the row number of this node.
    int row() const;    			

    //! returns a list of all the children of this node. The list will be empty if this node has no children.
    QList<FileNode*>* getChildrenList();  

    //! returns the path of this node.
    QString getNodePath() const;   

    //! returns the text of this node.
    QString text() const;   		

    //! returns the QFileInfo for this node.
    QFileInfo getFileInformation() const;  

    //! returns true if this node exists on the file system.
    bool isExist() const;   	

    //! returns true if this node is a directory.
    bool isDir() const; 

    //! returns true if this node is a file.
    bool isFile() const;  

    //! clears this node.
    void clear();   			

    //! recreates the node from the file system.
    void reload();  		

    //! returns the node for the path specified.
    FileNode *findPath(const QString &path);    

protected:

    //! The FileSystemModel is a QAbstractItemModel that provides a hierarchical view of the file system.
    FileSystemModel *m_model;

    //! The FileNode is a node in the tree of FileNodes.
    FileNode *m_parent;

    //! The list of FileNodes.
    QList<FileNode*> *m_children;

    //! The path of the FileNode.
    QString m_path;

    //! The text of the FileNode.
    QString m_text;

    //!< true if this node is being watched.  If so, the model will watch the node and will need to be manually updated.
    bool    m_bWatcher;
};

class FileSystemModel : public QAbstractItemModel
{
    Q_OBJECT
public:
    explicit FileSystemModel(QObject *parent = 0);

    ~FileSystemModel();

    void clear();

    void reload();

    void setFilter(QDir::Filters filters);

    void setDirSort(QDir::SortFlags flags);

    QDir::Filters filter() const;

    bool isShowHideFiles() const;

    QDir::SortFlags dirSort() const;

    bool removeRootPath(const QString &path);

    bool addRootPath(const QString &path);

    void setRootPathList(const QStringList &pathList);

    void setRootPath(const QString &path);

    QStringList rootPathList() const;

    QList<QModelIndex> findPaths(const QString &path) const;

    QModelIndex findPath(const QString &path) const;

    QString filePath(const QModelIndex &index) const;

    FileNode *nodeFromIndex(const QModelIndex &index) const;

    void setStartIndex(const QModelIndex &index);

    void setStartPath(const QString &path);

    QModelIndex startIndex() const;

    QString startPath() const;

    virtual int rowCount(const QModelIndex &parent = QModelIndex()) const;

    virtual int columnCount(const QModelIndex &parent = QModelIndex()) const;

    virtual QModelIndex parent(const QModelIndex &child) const;

    virtual QModelIndex index(int row, int column,const QModelIndex &parent = QModelIndex()) const;

    virtual QVariant data(const QModelIndex &index, int role) const;

    bool isRootPathNode(FileNode *node) const;

    bool isRootPathNodeFillPath() const;

    void addWatcher(const QString &path);

    void removeWatcher(const QString &path);
signals:
    void direcotryChanged(QString);
public slots:
    void reloadDirectory(const QString &path);
protected:
    //! Finds the node at the given \a path in the model.
    QModelIndex findPathHelper(const QString &path, const QModelIndex &parentIndex) const;

    //! The list of paths that are currently being watched.
    QStringList m_pathList;

    //! The root node of the model.
    FileNode  *m_rootNode;

    //! The path to the directory to watch.
    QString   m_startPath;

    //! The file icon provider.
    QFileIconProvider *m_iconProvider;

    //! The file system watcher.
    QFileSystemWatcher *m_fileWatcher;

    //! A map of watched files and their watcher indices.
    QMap<QString,int> m_fileWatcherMap;

    //! The tree view.
    QTreeView *m_treeView;

    //! The filters to apply to the directory.
    QDir::Filters m_dirFilter;

    //! The sort order to apply to the directory.
    QDir::SortFlags m_sorts;

    //! The mutex to protect the model.
    QMutex m_mutex;
};

#endif // FILESYSTEMMODEL_H
