#include "ndd_plugin_implement.h"
#include "qdebug.h"


NddPluginImplement::NddPluginImplement(QObject *parent) : BaseNddPluginInterface(parent), MenuNddPluginInterface(parent)
{

}

void NddPluginImplement::setMenuAction()
{
    menu()->addAction("First Menu", [](){
        qDebug() << ">>> First Menu";
    });

    menu()->addAction("plugin infomations", [=](){
        qInfo() << "[pluginDir]:" << pluginDir();
        qInfo() << "[pluginFile]:" << pluginFile();
        qInfo() << "[pluginVersion]:" << pluginVersion();
        qInfo() << "[pluginResourceDir]:" << pluginResourceDir();
    });
}
