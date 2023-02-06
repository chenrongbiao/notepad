/********************************************************************************
** Form generated from reading UI file 'shortcutkeymgr.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHORTCUTKEYMGR_H
#define UI_SHORTCUTKEYMGR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShortcutKeyMgrClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidget;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QTableWidget *qscintTableWidget;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ShortcutKeyMgrClass)
    {
        if (ShortcutKeyMgrClass->objectName().isEmpty())
            ShortcutKeyMgrClass->setObjectName(QString::fromUtf8("ShortcutKeyMgrClass"));
        ShortcutKeyMgrClass->resize(766, 508);
        centralWidget = new QWidget(ShortcutKeyMgrClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 2, 3);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(tab);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

        gridLayout_2->addWidget(tableWidget, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        qscintTableWidget = new QTableWidget(tab_2);
        if (qscintTableWidget->columnCount() < 3)
            qscintTableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        qscintTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        qscintTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        qscintTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        qscintTableWidget->setObjectName(QString::fromUtf8("qscintTableWidget"));
        qscintTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

        gridLayout_3->addWidget(qscintTableWidget, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setMaximumSize(QSize(16777215, 50));

        verticalLayout->addWidget(plainTextEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        ShortcutKeyMgrClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(ShortcutKeyMgrClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ShortcutKeyMgrClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ShortcutKeyMgrClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ShortcutKeyMgrClass->setStatusBar(statusBar);

        retranslateUi(ShortcutKeyMgrClass);
        QObject::connect(pushButton_2, SIGNAL(clicked()), ShortcutKeyMgrClass, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ShortcutKeyMgrClass);
    } // setupUi

    void retranslateUi(QMainWindow *ShortcutKeyMgrClass)
    {
        ShortcutKeyMgrClass->setWindowTitle(QCoreApplication::translate("ShortcutKeyMgrClass", "ShortcutKeyMgr", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ShortcutKeyMgrClass", "Function", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ShortcutKeyMgrClass", "Shortcut Key", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ShortcutKeyMgrClass", "Comment", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("ShortcutKeyMgrClass", "Ndd Shortcut", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = qscintTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ShortcutKeyMgrClass", "Function", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = qscintTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ShortcutKeyMgrClass", "Shortcut Key", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = qscintTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("ShortcutKeyMgrClass", "Comment", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("ShortcutKeyMgrClass", "Qscint Shortcut", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ShortcutKeyMgrClass", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShortcutKeyMgrClass: public Ui_ShortcutKeyMgrClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHORTCUTKEYMGR_H
