#include "ndd_plugin_dock_interface.h"

DockNddPluginInterface::DockNddPluginInterface(QObject *parent) : QObject(parent)
{

}


int DockNddPluginInterface::showInDock(Qt::DockWidgetArea area) {
    // m_widget 是
    auto mainwindow = dynamic_cast<QMainWindow*>(m_widget);
    if (!mainwindow) {
        return -1;
    }
    if (!m_dockerContainer) {
        m_dockerContainer = new QDockWidget(mainwindow);
        auto m_dockTitleBarWidget = m_dockerContainer->titleBarWidget();
    }

    return 0;
}

