#include "ndd_plugin_menu_interface.h"

MenuNddPluginInterface::MenuNddPluginInterface(QObject *parent) : QObject(parent) {

}

QMenu *MenuNddPluginInterface::menu() const
{
    return m_menu;
}

void MenuNddPluginInterface::setMenu(QMenu *newMenu)
{
    m_menu = newMenu;
    setMenuAction();
}
