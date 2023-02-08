/********************************************************************************
** Form generated from reading UI file 'pluginmgr.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUGINMGR_H
#define UI_PLUGINMGR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PluginMgrClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *pluginTable;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pluginDirBt;
    QPushButton *cancelBt;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PluginMgrClass)
    {
        if (PluginMgrClass->objectName().isEmpty())
            PluginMgrClass->setObjectName(QString::fromUtf8("PluginMgrClass"));
        PluginMgrClass->resize(974, 488);
        centralWidget = new QWidget(PluginMgrClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, -1, 3, 3);
        pluginTable = new QTableWidget(centralWidget);
        if (pluginTable->columnCount() < 5)
            pluginTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        pluginTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        pluginTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        pluginTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        pluginTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        pluginTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        pluginTable->setObjectName(QString::fromUtf8("pluginTable"));

        verticalLayout->addWidget(pluginTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pluginDirBt = new QPushButton(centralWidget);
        pluginDirBt->setObjectName(QString::fromUtf8("pluginDirBt"));

        horizontalLayout->addWidget(pluginDirBt);

        cancelBt = new QPushButton(centralWidget);
        cancelBt->setObjectName(QString::fromUtf8("cancelBt"));

        horizontalLayout->addWidget(cancelBt);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        PluginMgrClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PluginMgrClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 974, 23));
        PluginMgrClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PluginMgrClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        PluginMgrClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PluginMgrClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        PluginMgrClass->setStatusBar(statusBar);

        retranslateUi(PluginMgrClass);
        QObject::connect(cancelBt, SIGNAL(clicked()), PluginMgrClass, SLOT(close()));
        QObject::connect(pluginDirBt, SIGNAL(clicked()), PluginMgrClass, SLOT(slot_openPluginDir()));

        QMetaObject::connectSlotsByName(PluginMgrClass);
    } // setupUi

    void retranslateUi(QMainWindow *PluginMgrClass)
    {
        PluginMgrClass->setWindowTitle(QCoreApplication::translate("PluginMgrClass", "PluginMgr", nullptr));
        QTableWidgetItem *___qtablewidgetitem = pluginTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("PluginMgrClass", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = pluginTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("PluginMgrClass", "Version", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = pluginTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("PluginMgrClass", "Auther", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = pluginTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("PluginMgrClass", "Comment", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = pluginTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("PluginMgrClass", "Path", nullptr));
        pluginDirBt->setText(QCoreApplication::translate("PluginMgrClass", "Plugin Dir", nullptr));
        cancelBt->setText(QCoreApplication::translate("PluginMgrClass", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PluginMgrClass: public Ui_PluginMgrClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGINMGR_H
