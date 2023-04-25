#ifndef NDD_PLUGIN_IMPLEMENT_H
#define NDD_PLUGIN_IMPLEMENT_H

#include <QWidget>

class NddPluginImplement : public QWidget
{
    Q_OBJECT
public:
    NddPluginImplement(QWidget *parent = nullptr) : QWidget(parent) {

    }
    virtual ~NddPluginImplement() {

    }
};
#endif // NDD_PLUGIN_IMPLEMENT_H
