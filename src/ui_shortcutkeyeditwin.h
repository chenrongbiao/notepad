/********************************************************************************
** Form generated from reading UI file 'shortcutkeyeditwin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHORTCUTKEYEDITWIN_H
#define UI_SHORTCUTKEYEDITWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QKeySequenceEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ShortcutKeyEditWinClass
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *curKeylineEdit;
    QLabel *label_2;
    QKeySequenceEdit *keySequenceEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *ShortcutKeyEditWinClass)
    {
        if (ShortcutKeyEditWinClass->objectName().isEmpty())
            ShortcutKeyEditWinClass->setObjectName(QString::fromUtf8("ShortcutKeyEditWinClass"));
        ShortcutKeyEditWinClass->resize(459, 137);
        verticalLayout = new QVBoxLayout(ShortcutKeyEditWinClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(ShortcutKeyEditWinClass);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        curKeylineEdit = new QLineEdit(ShortcutKeyEditWinClass);
        curKeylineEdit->setObjectName(QString::fromUtf8("curKeylineEdit"));
        curKeylineEdit->setReadOnly(true);

        gridLayout->addWidget(curKeylineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(ShortcutKeyEditWinClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        keySequenceEdit = new QKeySequenceEdit(ShortcutKeyEditWinClass);
        keySequenceEdit->setObjectName(QString::fromUtf8("keySequenceEdit"));

        gridLayout->addWidget(keySequenceEdit, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(ShortcutKeyEditWinClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(ShortcutKeyEditWinClass);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ShortcutKeyEditWinClass);
        QObject::connect(pushButton_2, SIGNAL(clicked()), ShortcutKeyEditWinClass, SLOT(reject()));
        QObject::connect(pushButton, SIGNAL(clicked()), ShortcutKeyEditWinClass, SLOT(slot_ok()));

        QMetaObject::connectSlotsByName(ShortcutKeyEditWinClass);
    } // setupUi

    void retranslateUi(QDialog *ShortcutKeyEditWinClass)
    {
        ShortcutKeyEditWinClass->setWindowTitle(QCoreApplication::translate("ShortcutKeyEditWinClass", "ShortcutKeyEditWin", nullptr));
        label->setText(QCoreApplication::translate("ShortcutKeyEditWinClass", "Current Key Sequence:", nullptr));
        label_2->setText(QCoreApplication::translate("ShortcutKeyEditWinClass", "New Key Sequence:", nullptr));
        pushButton->setText(QCoreApplication::translate("ShortcutKeyEditWinClass", "Ok", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ShortcutKeyEditWinClass", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShortcutKeyEditWinClass: public Ui_ShortcutKeyEditWinClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHORTCUTKEYEDITWIN_H
