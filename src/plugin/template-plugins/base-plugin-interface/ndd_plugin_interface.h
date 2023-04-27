#ifndef __NDD_PLUGIN_INTERFACE__H__
#define __NDD_PLUGIN_INTERFACE__H__

// #include <QWidget>
// #include <QDockWidget>
// #include <QMainWindow>
// #include <QFileInfo>
// #include <QDir>
// #include <qsciscintilla.h>
// #include <qstackedwidget.h>
// #include <qstatusbar.h>
// #include <qtoolbar.h>
// #include <QLabel>
// #include <QDebug>
// #include <QMenu>

#include "ndd_plugin_base_interface.h"

class NddPluginInterface : BaseNddPluginInterface {

public:
    explicit NddPluginInterface(QObject *parent = nullptr);

private:
    
};


#endif  //!__NDD_PLUGIN_INTERFACE__H__
