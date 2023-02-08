/********************************************************************************
** Form generated from reading UI file 'batchfindreplace.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATCHFINDREPLACE_H
#define UI_BATCHFINDREPLACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BatchFindReplaceClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPlainTextEdit *findKeywordEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QPlainTextEdit *replaceKeywordEdit;
    QTableWidget *findReplaceTable;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *freshBt;
    QPushButton *swapBt;
    QPushButton *findBt;
    QPushButton *replaceBt;
    QPushButton *markBt;
    QPushButton *pushButton;
    QPushButton *importBt;
    QPushButton *exportBt;
    QSpacerItem *horizontalSpacer_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BatchFindReplaceClass)
    {
        if (BatchFindReplaceClass->objectName().isEmpty())
            BatchFindReplaceClass->setObjectName(QString::fromUtf8("BatchFindReplaceClass"));
        BatchFindReplaceClass->resize(902, 737);
        centralWidget = new QWidget(BatchFindReplaceClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(3, 6, 3, 3);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        findKeywordEdit = new QPlainTextEdit(centralWidget);
        findKeywordEdit->setObjectName(QString::fromUtf8("findKeywordEdit"));

        verticalLayout->addWidget(findKeywordEdit);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        replaceKeywordEdit = new QPlainTextEdit(centralWidget);
        replaceKeywordEdit->setObjectName(QString::fromUtf8("replaceKeywordEdit"));

        verticalLayout_2->addWidget(replaceKeywordEdit);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        findReplaceTable = new QTableWidget(centralWidget);
        if (findReplaceTable->columnCount() < 2)
            findReplaceTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        findReplaceTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        findReplaceTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        findReplaceTable->setObjectName(QString::fromUtf8("findReplaceTable"));
        findReplaceTable->horizontalHeader()->setVisible(true);

        verticalLayout_3->addWidget(findReplaceTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        freshBt = new QPushButton(centralWidget);
        freshBt->setObjectName(QString::fromUtf8("freshBt"));

        horizontalLayout->addWidget(freshBt);

        swapBt = new QPushButton(centralWidget);
        swapBt->setObjectName(QString::fromUtf8("swapBt"));

        horizontalLayout->addWidget(swapBt);

        findBt = new QPushButton(centralWidget);
        findBt->setObjectName(QString::fromUtf8("findBt"));

        horizontalLayout->addWidget(findBt);

        replaceBt = new QPushButton(centralWidget);
        replaceBt->setObjectName(QString::fromUtf8("replaceBt"));

        horizontalLayout->addWidget(replaceBt);

        markBt = new QPushButton(centralWidget);
        markBt->setObjectName(QString::fromUtf8("markBt"));

        horizontalLayout->addWidget(markBt);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        importBt = new QPushButton(centralWidget);
        importBt->setObjectName(QString::fromUtf8("importBt"));

        horizontalLayout->addWidget(importBt);

        exportBt = new QPushButton(centralWidget);
        exportBt->setObjectName(QString::fromUtf8("exportBt"));

        horizontalLayout->addWidget(exportBt);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout);

        BatchFindReplaceClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(BatchFindReplaceClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        BatchFindReplaceClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(BatchFindReplaceClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        BatchFindReplaceClass->setStatusBar(statusBar);

        retranslateUi(BatchFindReplaceClass);
        QObject::connect(freshBt, SIGNAL(clicked()), BatchFindReplaceClass, SLOT(on_freshBtClick()));
        QObject::connect(findBt, SIGNAL(clicked()), BatchFindReplaceClass, SLOT(on_findBtClick()));
        QObject::connect(replaceBt, SIGNAL(clicked()), BatchFindReplaceClass, SLOT(on_replaceBtClick()));
        QObject::connect(swapBt, SIGNAL(clicked()), BatchFindReplaceClass, SLOT(on_swapFindReplace()));
        QObject::connect(importBt, SIGNAL(clicked()), BatchFindReplaceClass, SLOT(on_import()));
        QObject::connect(exportBt, SIGNAL(clicked()), BatchFindReplaceClass, SLOT(on_export()));
        QObject::connect(markBt, SIGNAL(clicked()), BatchFindReplaceClass, SLOT(on_mark()));
        QObject::connect(pushButton, SIGNAL(clicked()), BatchFindReplaceClass, SLOT(on_clearMark()));

        QMetaObject::connectSlotsByName(BatchFindReplaceClass);
    } // setupUi

    void retranslateUi(QMainWindow *BatchFindReplaceClass)
    {
        BatchFindReplaceClass->setWindowTitle(QCoreApplication::translate("BatchFindReplaceClass", "BatchFindReplace", nullptr));
        label->setText(QCoreApplication::translate("BatchFindReplaceClass", "Enter multiple find keywords, separated by blank characters", nullptr));
        label_2->setText(QCoreApplication::translate("BatchFindReplaceClass", "Enter multiple Replace keywords, separated by blank characters", nullptr));
        QTableWidgetItem *___qtablewidgetitem = findReplaceTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("BatchFindReplaceClass", "Keyword", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = findReplaceTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("BatchFindReplaceClass", "Replace", nullptr));
        freshBt->setText(QCoreApplication::translate("BatchFindReplaceClass", "Fresh", nullptr));
        swapBt->setText(QCoreApplication::translate("BatchFindReplaceClass", "swap", nullptr));
        findBt->setText(QCoreApplication::translate("BatchFindReplaceClass", "Find", nullptr));
        replaceBt->setText(QCoreApplication::translate("BatchFindReplaceClass", "Replace", nullptr));
        markBt->setText(QCoreApplication::translate("BatchFindReplaceClass", "Mark", nullptr));
        pushButton->setText(QCoreApplication::translate("BatchFindReplaceClass", "ClearMark", nullptr));
        importBt->setText(QCoreApplication::translate("BatchFindReplaceClass", "Import", nullptr));
        exportBt->setText(QCoreApplication::translate("BatchFindReplaceClass", "Export", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BatchFindReplaceClass: public Ui_BatchFindReplaceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATCHFINDREPLACE_H
