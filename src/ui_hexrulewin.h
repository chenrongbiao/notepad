/********************************************************************************
** Form generated from reading UI file 'hexrulewin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEXRULEWIN_H
#define UI_HEXRULEWIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HexRuleWin
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *maxLcsMode;
    QRadioButton *byteCmpMode;
    QCheckBox *hightlightBack;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *okBt;
    QPushButton *cancelBt;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *HexRuleWin)
    {
        if (HexRuleWin->objectName().isEmpty())
            HexRuleWin->setObjectName(QString::fromUtf8("HexRuleWin"));
        HexRuleWin->resize(332, 152);
        HexRuleWin->setMaximumSize(QSize(350, 160));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/img/main.png"), QSize(), QIcon::Normal, QIcon::Off);
        HexRuleWin->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(HexRuleWin);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(HexRuleWin);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        maxLcsMode = new QRadioButton(groupBox);
        maxLcsMode->setObjectName(QString::fromUtf8("maxLcsMode"));
        maxLcsMode->setChecked(true);

        verticalLayout_2->addWidget(maxLcsMode);

        byteCmpMode = new QRadioButton(groupBox);
        byteCmpMode->setObjectName(QString::fromUtf8("byteCmpMode"));

        verticalLayout_2->addWidget(byteCmpMode);


        verticalLayout->addWidget(groupBox);

        hightlightBack = new QCheckBox(HexRuleWin);
        hightlightBack->setObjectName(QString::fromUtf8("hightlightBack"));

        verticalLayout->addWidget(hightlightBack);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        okBt = new QPushButton(HexRuleWin);
        okBt->setObjectName(QString::fromUtf8("okBt"));

        horizontalLayout_2->addWidget(okBt);

        cancelBt = new QPushButton(HexRuleWin);
        cancelBt->setObjectName(QString::fromUtf8("cancelBt"));

        horizontalLayout_2->addWidget(cancelBt);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(HexRuleWin);
        QObject::connect(cancelBt, SIGNAL(clicked()), HexRuleWin, SLOT(close()));
        QObject::connect(okBt, SIGNAL(clicked()), HexRuleWin, SLOT(slot_okBt()));

        QMetaObject::connectSlotsByName(HexRuleWin);
    } // setupUi

    void retranslateUi(QWidget *HexRuleWin)
    {
        HexRuleWin->setWindowTitle(QCoreApplication::translate("HexRuleWin", "HexRuleWinRule", nullptr));
        groupBox->setTitle(QCoreApplication::translate("HexRuleWin", "Mode", nullptr));
        maxLcsMode->setText(QCoreApplication::translate("HexRuleWin", "Maximum Common String", nullptr));
        byteCmpMode->setText(QCoreApplication::translate("HexRuleWin", "One-to-one Byte Contrast", nullptr));
        hightlightBack->setText(QCoreApplication::translate("HexRuleWin", "Highlight diff Background", nullptr));
        okBt->setText(QCoreApplication::translate("HexRuleWin", "OK", nullptr));
        cancelBt->setText(QCoreApplication::translate("HexRuleWin", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HexRuleWin: public Ui_HexRuleWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEXRULEWIN_H
