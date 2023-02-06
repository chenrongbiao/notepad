/********************************************************************************
** Form generated from reading UI file 'langstyledefine.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANGSTYLEDEFINE_H
#define UI_LANGSTYLEDEFINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LangStyleDefineClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *curDefineLangCb;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *motherLangCb;
    QGridLayout *gridLayout;
    QPushButton *delBt;
    QPushButton *newBt;
    QPushButton *saveBt;
    QPushButton *saveAsBt;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *extNameLe;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *keyWordEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LangStyleDefineClass)
    {
        if (LangStyleDefineClass->objectName().isEmpty())
            LangStyleDefineClass->setObjectName(QString::fromUtf8("LangStyleDefineClass"));
        LangStyleDefineClass->resize(843, 575);
        centralWidget = new QWidget(LangStyleDefineClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_4 = new QHBoxLayout(centralWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(3, 6, 3, 3);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMaximumSize(QSize(300, 16777215));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(3);
        gridLayout_3->setVerticalSpacing(6);
        gridLayout_3->setContentsMargins(3, 3, 3, 3);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        curDefineLangCb = new QComboBox(groupBox_2);
        curDefineLangCb->setObjectName(QString::fromUtf8("curDefineLangCb"));

        horizontalLayout->addWidget(curDefineLangCb);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        motherLangCb = new QComboBox(groupBox_2);
        motherLangCb->addItem(QString());
        motherLangCb->addItem(QString());
        motherLangCb->setObjectName(QString::fromUtf8("motherLangCb"));

        horizontalLayout_3->addWidget(motherLangCb);


        gridLayout_3->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        delBt = new QPushButton(groupBox_2);
        delBt->setObjectName(QString::fromUtf8("delBt"));

        gridLayout->addWidget(delBt, 0, 1, 1, 1);

        newBt = new QPushButton(groupBox_2);
        newBt->setObjectName(QString::fromUtf8("newBt"));

        gridLayout->addWidget(newBt, 0, 0, 1, 1);

        saveBt = new QPushButton(groupBox_2);
        saveBt->setObjectName(QString::fromUtf8("saveBt"));

        gridLayout->addWidget(saveBt, 3, 0, 1, 1);

        saveAsBt = new QPushButton(groupBox_2);
        saveAsBt->setObjectName(QString::fromUtf8("saveAsBt"));

        gridLayout->addWidget(saveAsBt, 3, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 5, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        extNameLe = new QLineEdit(groupBox_2);
        extNameLe->setObjectName(QString::fromUtf8("extNameLe"));
        extNameLe->setMaxLength(256);

        horizontalLayout_2->addWidget(extNameLe);


        gridLayout_3->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 3, 0, 1, 1);


        horizontalLayout_4->addWidget(groupBox_2);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(3);
        gridLayout_2->setVerticalSpacing(6);
        gridLayout_2->setContentsMargins(3, 3, 3, 3);
        keyWordEdit = new QPlainTextEdit(groupBox);
        keyWordEdit->setObjectName(QString::fromUtf8("keyWordEdit"));

        gridLayout_2->addWidget(keyWordEdit, 0, 0, 1, 1);


        horizontalLayout_4->addWidget(groupBox);

        LangStyleDefineClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(LangStyleDefineClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 843, 23));
        LangStyleDefineClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(LangStyleDefineClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        LangStyleDefineClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(LangStyleDefineClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        LangStyleDefineClass->setStatusBar(statusBar);

        retranslateUi(LangStyleDefineClass);
        QObject::connect(newBt, SIGNAL(clicked()), LangStyleDefineClass, SLOT(slot_new()));
        QObject::connect(saveBt, SIGNAL(clicked()), LangStyleDefineClass, SLOT(slot_save()));
        QObject::connect(saveAsBt, SIGNAL(clicked()), LangStyleDefineClass, SLOT(close()));
        QObject::connect(delBt, SIGNAL(clicked()), LangStyleDefineClass, SLOT(slot_delete()));

        QMetaObject::connectSlotsByName(LangStyleDefineClass);
    } // setupUi

    void retranslateUi(QMainWindow *LangStyleDefineClass)
    {
        LangStyleDefineClass->setWindowTitle(QCoreApplication::translate("LangStyleDefineClass", "LangStyleDefine", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("LangStyleDefineClass", "Setting", nullptr));
        label->setText(QCoreApplication::translate("LangStyleDefineClass", "Definition Language", nullptr));
        label_3->setText(QCoreApplication::translate("LangStyleDefineClass", "Mother Language", nullptr));
        motherLangCb->setItemText(0, QCoreApplication::translate("LangStyleDefineClass", "None", nullptr));
        motherLangCb->setItemText(1, QCoreApplication::translate("LangStyleDefineClass", "Cpp", nullptr));

        delBt->setText(QCoreApplication::translate("LangStyleDefineClass", "Delete", nullptr));
        newBt->setText(QCoreApplication::translate("LangStyleDefineClass", "New Create", nullptr));
        saveBt->setText(QCoreApplication::translate("LangStyleDefineClass", "Save", nullptr));
        saveAsBt->setText(QCoreApplication::translate("LangStyleDefineClass", "Close", nullptr));
        label_2->setText(QCoreApplication::translate("LangStyleDefineClass", "Expand File Name:", nullptr));
        extNameLe->setPlaceholderText(QCoreApplication::translate("LangStyleDefineClass", "js cs (split with space\357\274\211", nullptr));
        groupBox->setTitle(QCoreApplication::translate("LangStyleDefineClass", "Input Key Words", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LangStyleDefineClass: public Ui_LangStyleDefineClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANGSTYLEDEFINE_H
