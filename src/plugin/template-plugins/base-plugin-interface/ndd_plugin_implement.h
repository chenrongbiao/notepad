#ifndef NDD_PLUGIN_IMPLEMENT_H
#define NDD_PLUGIN_IMPLEMENT_H

#include "ndd_plugin_base_interface.h"
#include "ndd_plugin_menu_interface.h"
#include "ndd_plugin_dock_interface.h"

#include <QMainWindow>

class NddPluginImplement : public BaseNddPluginInterface, public MenuNddPluginInterface
{
public:
    explicit NddPluginImplement(QObject *parent = nullptr);

    // MenuNddPluginInterface interface
protected:
    void setMenuAction() override;
};

#endif // NDD_PLUGIN_IMPLEMENT_H
