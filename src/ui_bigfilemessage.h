/********************************************************************************
** Form generated from reading UI file 'bigfilemessage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIGFILEMESSAGE_H
#define UI_BIGFILEMESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BigFileMessageClass
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QRadioButton *hexMode;
    QRadioButton *superBigTextMode;
    QLabel *label_4;
    QRadioButton *textMode;
    QLabel *label_2;
    QRadioButton *bigTextMode;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *okBt;
    QPushButton *cancelBt;

    void setupUi(QDialog *BigFileMessageClass)
    {
        if (BigFileMessageClass->objectName().isEmpty())
            BigFileMessageClass->setObjectName(QString::fromUtf8("BigFileMessageClass"));
        BigFileMessageClass->resize(770, 195);
        verticalLayout = new QVBoxLayout(BigFileMessageClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 6);
        label = new QLabel(BigFileMessageClass);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        groupBox = new QGroupBox(BigFileMessageClass);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        hexMode = new QRadioButton(groupBox);
        hexMode->setObjectName(QString::fromUtf8("hexMode"));

        gridLayout->addWidget(hexMode, 3, 0, 1, 1);

        superBigTextMode = new QRadioButton(groupBox);
        superBigTextMode->setObjectName(QString::fromUtf8("superBigTextMode"));

        gridLayout->addWidget(superBigTextMode, 2, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 2, 1, 1);

        textMode = new QRadioButton(groupBox);
        textMode->setObjectName(QString::fromUtf8("textMode"));

        gridLayout->addWidget(textMode, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        bigTextMode = new QRadioButton(groupBox);
        bigTextMode->setObjectName(QString::fromUtf8("bigTextMode"));
        bigTextMode->setChecked(true);

        gridLayout->addWidget(bigTextMode, 1, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 2, 1, 1);


        verticalLayout->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okBt = new QPushButton(BigFileMessageClass);
        okBt->setObjectName(QString::fromUtf8("okBt"));

        horizontalLayout->addWidget(okBt);

        cancelBt = new QPushButton(BigFileMessageClass);
        cancelBt->setObjectName(QString::fromUtf8("cancelBt"));

        horizontalLayout->addWidget(cancelBt);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(BigFileMessageClass);
        QObject::connect(okBt, SIGNAL(clicked()), BigFileMessageClass, SLOT(slot_okBt()));
        QObject::connect(cancelBt, SIGNAL(clicked()), BigFileMessageClass, SLOT(slot_cancelBt()));

        QMetaObject::connectSlotsByName(BigFileMessageClass);
    } // setupUi

    void retranslateUi(QDialog *BigFileMessageClass)
    {
        BigFileMessageClass->setWindowTitle(QCoreApplication::translate("BigFileMessageClass", "BigFileMessage", nullptr));
        label->setText(QCoreApplication::translate("BigFileMessageClass", "TextLabel", nullptr));
        groupBox->setTitle(QCoreApplication::translate("BigFileMessageClass", "Open Mode", nullptr));
        label_3->setText(QCoreApplication::translate("BigFileMessageClass", "Big Text File(< 8G) Read only open, load in blocks, and turn pages manually.", nullptr));
        hexMode->setText(QCoreApplication::translate("BigFileMessageClass", "Hex Bin", nullptr));
        superBigTextMode->setText(QCoreApplication::translate("BigFileMessageClass", "Super Big Text Edit", nullptr));
        label_4->setText(QCoreApplication::translate("BigFileMessageClass", "Binary Open,load in blocks, and turn pages manually.", nullptr));
        textMode->setText(QCoreApplication::translate("BigFileMessageClass", "Text Mode", nullptr));
        label_2->setText(QCoreApplication::translate("BigFileMessageClass", "Open directly in text mode.May be slow, Need wait.", nullptr));
        bigTextMode->setText(QCoreApplication::translate("BigFileMessageClass", "Big Text", nullptr));
        label_5->setText(QCoreApplication::translate("BigFileMessageClass", "Super big Text File(> 8G bits) Read only open, load in blocks, and turn pages manually.", nullptr));
        okBt->setText(QCoreApplication::translate("BigFileMessageClass", "Ok", nullptr));
        cancelBt->setText(QCoreApplication::translate("BigFileMessageClass", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BigFileMessageClass: public Ui_BigFileMessageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIGFILEMESSAGE_H
