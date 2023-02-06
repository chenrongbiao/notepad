/********************************************************************************
** Form generated from reading UI file 'langextset.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANGEXTSET_H
#define UI_LANGEXTSET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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

class Ui_LangExtSetClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *langTableWidget;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LangExtSetClass)
    {
        if (LangExtSetClass->objectName().isEmpty())
            LangExtSetClass->setObjectName(QString::fromUtf8("LangExtSetClass"));
        LangExtSetClass->resize(809, 504);
        centralWidget = new QWidget(LangExtSetClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, -1, 3, 3);
        langTableWidget = new QTableWidget(centralWidget);
        if (langTableWidget->columnCount() < 2)
            langTableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        langTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        langTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        langTableWidget->setObjectName(QString::fromUtf8("langTableWidget"));

        verticalLayout->addWidget(langTableWidget);

        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setMaximumSize(QSize(16777215, 100));

        verticalLayout->addWidget(plainTextEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        LangExtSetClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(LangExtSetClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        LangExtSetClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(LangExtSetClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        LangExtSetClass->setStatusBar(statusBar);

        retranslateUi(LangExtSetClass);
        QObject::connect(pushButton, SIGNAL(clicked()), LangExtSetClass, SLOT(slot_save()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), LangExtSetClass, SLOT(close()));

        QMetaObject::connectSlotsByName(LangExtSetClass);
    } // setupUi

    void retranslateUi(QMainWindow *LangExtSetClass)
    {
        LangExtSetClass->setWindowTitle(QCoreApplication::translate("LangExtSetClass", "LangExtSet", nullptr));
        QTableWidgetItem *___qtablewidgetitem = langTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("LangExtSetClass", "Language", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = langTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("LangExtSetClass", "File Suffix", nullptr));
        pushButton->setText(QCoreApplication::translate("LangExtSetClass", "Save", nullptr));
        pushButton_2->setText(QCoreApplication::translate("LangExtSetClass", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LangExtSetClass: public Ui_LangExtSetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANGEXTSET_H
