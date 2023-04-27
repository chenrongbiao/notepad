#ifndef __NDD_PLUGIN_DOCK_INTERFACE__H__
#define __NDD_PLUGIN_DOCK_INTERFACE__H__

#include <QMainWindow>
#include <QDockWidget>

class DockNddPluginInterface : public QObject{

public:
    explicit DockNddPluginInterface(QObject *parent = nullptr);

    /**
     * @brief  显示在 DockWidget 中
     * @note
     * @param  area: DockWidget
     * @retval 
     */
    int showInDock(Qt::DockWidgetArea area);

    QWidget *m_widget;
    QDockWidget *m_dockerContainer;
};


#endif  //!__NDD_PLUGIN_DOCK_INTERFACE__H__
