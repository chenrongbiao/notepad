/********************************************************************************
** Form generated from reading UI file 'textfind.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTFIND_H
#define UI_TEXTFIND_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextFind
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *textLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushPrevButton;
    QPushButton *pushNextButton;
    QPushButton *pushCloseButton;

    void setupUi(QWidget *TextFind)
    {
        if (TextFind->objectName().isEmpty())
            TextFind->setObjectName(QString::fromUtf8("TextFind"));
        TextFind->resize(400, 161);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/img/main.png"), QSize(), QIcon::Normal, QIcon::Off);
        TextFind->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(TextFind);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(TextFind);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        textLineEdit = new QLineEdit(groupBox);
        textLineEdit->setObjectName(QString::fromUtf8("textLineEdit"));

        horizontalLayout->addWidget(textLineEdit);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushPrevButton = new QPushButton(TextFind);
        pushPrevButton->setObjectName(QString::fromUtf8("pushPrevButton"));

        horizontalLayout_3->addWidget(pushPrevButton);

        pushNextButton = new QPushButton(TextFind);
        pushNextButton->setObjectName(QString::fromUtf8("pushNextButton"));

        horizontalLayout_3->addWidget(pushNextButton);

        pushCloseButton = new QPushButton(TextFind);
        pushCloseButton->setObjectName(QString::fromUtf8("pushCloseButton"));

        horizontalLayout_3->addWidget(pushCloseButton);


        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(TextFind);
        QObject::connect(pushPrevButton, SIGNAL(clicked()), TextFind, SLOT(slot_findPrev()));
        QObject::connect(pushNextButton, SIGNAL(clicked()), TextFind, SLOT(slot_findNext()));
        QObject::connect(pushCloseButton, SIGNAL(clicked()), TextFind, SLOT(hide()));

        QMetaObject::connectSlotsByName(TextFind);
    } // setupUi

    void retranslateUi(QWidget *TextFind)
    {
        TextFind->setWindowTitle(QCoreApplication::translate("TextFind", "TextFind", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TextFind", "Find Options", nullptr));
        label->setText(QCoreApplication::translate("TextFind", "Find Text", nullptr));
        pushPrevButton->setText(QCoreApplication::translate("TextFind", "Find Prev", nullptr));
        pushNextButton->setText(QCoreApplication::translate("TextFind", "Find Next", nullptr));
        pushCloseButton->setText(QCoreApplication::translate("TextFind", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextFind: public Ui_TextFind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTFIND_H
