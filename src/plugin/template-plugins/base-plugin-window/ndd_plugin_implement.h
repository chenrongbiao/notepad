#ifndef NDD_PLUGIN_IMPLEMENT_H
#define NDD_PLUGIN_IMPLEMENT_H

#include <QMainWindow>
#include <QStatusBar>

class NddPluginImplement : public QMainWindow
{
    Q_OBJECT
public:
    NddPluginImplement(QWidget *parent = nullptr) : QMainWindow(parent) {
        QStatusBar *statusBar = new QStatusBar;

        this->setStatusBar(statusBar);
    }
    virtual ~NddPluginImplement() {

    }
};
#endif // NDD_PLUGIN_IMPLEMENT_H
