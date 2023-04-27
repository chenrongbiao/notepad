#ifndef __NDD_PLUGIN_BASE_INTERFACE__H__
#define __NDD_PLUGIN_BASE_INTERFACE__H__

#include <QDir>
#include <QFileInfo>

class BaseNddPluginInterface : public QObject {

    Q_OBJECT
    Q_PROPERTY(QString pluginFile READ pluginFile WRITE setPluginFile);
    Q_PROPERTY(QString pluginName READ pluginName WRITE setPluginName);
    Q_PROPERTY(QString pluginVersion READ pluginVersion WRITE setPluginVersion);
    // Q_PROPERTY(QString pluginDir READ pluginDir);
    // Q_PROPERTY(QString pluginResourceDir READ pluginResourceDir);

public:
    explicit BaseNddPluginInterface(QObject *parent = nullptr);
    explicit BaseNddPluginInterface(QString pluginFile, QString pluginName, QString pluginVersion, QObject *parent = nullptr);

    QString pluginFile() const;
    void setPluginFile(const QString &newPluginFile);

    QString pluginName() const;
    void setPluginName(const QString &newPluginName);

    QString pluginVersion() const;
    void setPluginVersion(const QString &newPluginVersion);

    QString pluginDir() const;
    QString pluginResourceDir() const;

private:
    QString m_pluginFile;
    QString m_pluginName;
    QString m_pluginVersion;

    QString m_pluginDir;
    QString m_pluginResourceDir;
};

#define USE_INTERFACE_IMPLEMENT(interface)          \
    interface->setPluginFile(s_strFileName);        \
    interface->setPluginName(PLUGIN_NAME);          \
    interface->setPluginVersion(PLUGIN_VERSION);    \

#endif  //!__NDD_PLUGIN_BASE_INTERFACE__H__