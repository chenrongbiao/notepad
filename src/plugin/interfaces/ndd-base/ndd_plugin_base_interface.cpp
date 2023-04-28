#include "ndd_plugin_base_interface.h"


BaseNddPluginInterface::BaseNddPluginInterface(QObject *parent) : QObject(parent)
{

}

BaseNddPluginInterface::BaseNddPluginInterface(QString pluginFile, QString pluginName, QString pluginVersion, QObject *parent) : QObject(parent)
    , m_pluginFile(pluginFile)
    , m_pluginName(pluginName)
    , m_pluginVersion(pluginVersion)
{
    m_pluginDir = QFileInfo(m_pluginFile).dir().path();
    m_pluginResourceDir = QFileInfo(m_pluginFile).dir().filePath(m_pluginName);
}

QString BaseNddPluginInterface::pluginFile() const
{
    return m_pluginFile;
}

void BaseNddPluginInterface::setPluginFile(const QString &newPluginFile)
{
    m_pluginFile = newPluginFile;
}

QString BaseNddPluginInterface::pluginName() const
{
    return m_pluginName;
}

void BaseNddPluginInterface::setPluginName(const QString &newPluginName)
{
    m_pluginName = newPluginName;
}

QString BaseNddPluginInterface::pluginVersion() const
{
    return m_pluginVersion;
}

void BaseNddPluginInterface::setPluginVersion(const QString &newPluginVersion)
{
    m_pluginVersion = newPluginVersion;
}

QString BaseNddPluginInterface::pluginDir() const
{
    return QFileInfo(m_pluginFile).dir().path();
//    return m_pluginDir;
}

QString BaseNddPluginInterface::pluginResourceDir() const
{
    return QFileInfo(m_pluginFile).dir().filePath(m_pluginName);
//    return m_pluginResourceDir;
}
