/********************************************************************************
** Form generated from reading UI file 'hexfilegoto.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEXFILEGOTO_H
#define UI_HEXFILEGOTO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HexFileGoto
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButtonDec;
    QLineEdit *lineEditDecAddr;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButtonHex;
    QLineEdit *lineEditHexAddr;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOk;
    QPushButton *pushButtonClose;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *HexFileGoto)
    {
        if (HexFileGoto->objectName().isEmpty())
            HexFileGoto->setObjectName(QString::fromUtf8("HexFileGoto"));
        HexFileGoto->resize(290, 141);
        HexFileGoto->setMaximumSize(QSize(290, 215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/edit/global/notebook.png"), QSize(), QIcon::Normal, QIcon::Off);
        HexFileGoto->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(HexFileGoto);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 0, 2, 2);
        groupBox = new QGroupBox(HexFileGoto);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radioButtonDec = new QRadioButton(groupBox);
        radioButtonDec->setObjectName(QString::fromUtf8("radioButtonDec"));
        radioButtonDec->setChecked(true);

        horizontalLayout_2->addWidget(radioButtonDec);

        lineEditDecAddr = new QLineEdit(groupBox);
        lineEditDecAddr->setObjectName(QString::fromUtf8("lineEditDecAddr"));
        lineEditDecAddr->setMaxLength(15);

        horizontalLayout_2->addWidget(lineEditDecAddr);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioButtonHex = new QRadioButton(groupBox);
        radioButtonHex->setObjectName(QString::fromUtf8("radioButtonHex"));
        radioButtonHex->setChecked(false);

        horizontalLayout->addWidget(radioButtonHex);

        lineEditHexAddr = new QLineEdit(groupBox);
        lineEditHexAddr->setObjectName(QString::fromUtf8("lineEditHexAddr"));
        lineEditHexAddr->setMaxLength(12);

        horizontalLayout->addWidget(lineEditHexAddr);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(groupBox);

        textBrowser = new QTextBrowser(HexFileGoto);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setMaximumSize(QSize(16777215, 45));
        textBrowser->setReadOnly(true);
        textBrowser->setAcceptRichText(false);

        verticalLayout_2->addWidget(textBrowser);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButtonOk = new QPushButton(HexFileGoto);
        pushButtonOk->setObjectName(QString::fromUtf8("pushButtonOk"));

        horizontalLayout_3->addWidget(pushButtonOk);

        pushButtonClose = new QPushButton(HexFileGoto);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));

        horizontalLayout_3->addWidget(pushButtonClose);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(HexFileGoto);
        QObject::connect(pushButtonClose, SIGNAL(clicked()), HexFileGoto, SLOT(close()));
        QObject::connect(pushButtonOk, SIGNAL(clicked()), HexFileGoto, SLOT(slot_goto()));

        QMetaObject::connectSlotsByName(HexFileGoto);
    } // setupUi

    void retranslateUi(QWidget *HexFileGoto)
    {
        HexFileGoto->setWindowTitle(QCoreApplication::translate("HexFileGoto", "HexFileGoto", nullptr));
        groupBox->setTitle(QCoreApplication::translate("HexFileGoto", "Addr", nullptr));
        radioButtonDec->setText(QCoreApplication::translate("HexFileGoto", "Dec Addr", nullptr));
        radioButtonHex->setText(QCoreApplication::translate("HexFileGoto", "Hex Addr", nullptr));
        pushButtonOk->setText(QCoreApplication::translate("HexFileGoto", "Go to", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("HexFileGoto", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HexFileGoto: public Ui_HexFileGoto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEXFILEGOTO_H
