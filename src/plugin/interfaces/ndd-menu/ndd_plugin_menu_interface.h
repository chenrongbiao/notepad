#ifndef __NDD_PLUGIN_MENU_INTERFACE__H__
#define __NDD_PLUGIN_MENU_INTERFACE__H__

#include <QMenu>

class MenuNddPluginInterface : public QObject {

    Q_OBJECT
    Q_PROPERTY(QMenu* menu READ menu WRITE setMenu);
public:
    explicit MenuNddPluginInterface(QObject *parent = nullptr);

    QMenu *menu() const;
    void setMenu(QMenu *newMenu);

private:
    QMenu *m_menu = nullptr;

protected:
    virtual void setMenuAction() = 0;
};

#define USE_MENU_IMPLEMENT(menu) \
    menu->setMenu(s_pProcData.m_rootMenu);

#endif  //!__NDD_PLUGIN_MENU_INTERFACE__H__
