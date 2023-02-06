/********************************************************************************
** Form generated from reading UI file 'hexcmprangewin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEXCMPRANGEWIN_H
#define UI_HEXCMPRANGEWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HexCmpRangeWin
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *leftStartPos;
    QLabel *label_5;
    QLineEdit *leftCmpLens;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *rightStartPos;
    QLabel *label_6;
    QLineEdit *rightCmpLens;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *HexCmpRangeWin)
    {
        if (HexCmpRangeWin->objectName().isEmpty())
            HexCmpRangeWin->setObjectName(QString::fromUtf8("HexCmpRangeWin"));
        HexCmpRangeWin->resize(524, 167);
        HexCmpRangeWin->setMaximumSize(QSize(550, 16777215));
        verticalLayout_2 = new QVBoxLayout(HexCmpRangeWin);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(HexCmpRangeWin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 50));

        verticalLayout_2->addWidget(label);

        groupBox = new QGroupBox(HexCmpRangeWin);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        leftStartPos = new QLineEdit(groupBox);
        leftStartPos->setObjectName(QString::fromUtf8("leftStartPos"));
        leftStartPos->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(leftStartPos);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        leftCmpLens = new QLineEdit(groupBox);
        leftCmpLens->setObjectName(QString::fromUtf8("leftCmpLens"));
        leftCmpLens->setMaximumSize(QSize(100, 16777215));
        leftCmpLens->setMaxLength(8);

        horizontalLayout->addWidget(leftCmpLens);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        rightStartPos = new QLineEdit(groupBox);
        rightStartPos->setObjectName(QString::fromUtf8("rightStartPos"));
        rightStartPos->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(rightStartPos);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        rightCmpLens = new QLineEdit(groupBox);
        rightCmpLens->setObjectName(QString::fromUtf8("rightCmpLens"));
        rightCmpLens->setMaximumSize(QSize(100, 16777215));
        rightCmpLens->setMaxLength(8);

        horizontalLayout_2->addWidget(rightCmpLens);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_4 = new QLabel(HexCmpRangeWin);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_7->addWidget(label_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        pushButton = new QPushButton(HexCmpRangeWin);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_7->addWidget(pushButton);

        pushButton_2 = new QPushButton(HexCmpRangeWin);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_7->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_7);


        retranslateUi(HexCmpRangeWin);
        QObject::connect(pushButton_2, SIGNAL(clicked()), HexCmpRangeWin, SLOT(close()));
        QObject::connect(pushButton, SIGNAL(clicked()), HexCmpRangeWin, SLOT(slot_ok()));

        QMetaObject::connectSlotsByName(HexCmpRangeWin);
    } // setupUi

    void retranslateUi(QWidget *HexCmpRangeWin)
    {
        HexCmpRangeWin->setWindowTitle(QCoreApplication::translate("HexCmpRangeWin", "HexCmpRangeWin", nullptr));
        label->setText(QCoreApplication::translate("HexCmpRangeWin", "Max Bin File Size is 10M ! Exceeding file size ! \n"
"Select a shorter range for comparison. ", nullptr));
        groupBox->setTitle(QCoreApplication::translate("HexCmpRangeWin", "Select Range", nullptr));
        label_2->setText(QCoreApplication::translate("HexCmpRangeWin", "Left Start Pos: ", nullptr));
        leftStartPos->setText(QCoreApplication::translate("HexCmpRangeWin", "0", nullptr));
        label_5->setText(QCoreApplication::translate("HexCmpRangeWin", "Left Compare Length:", nullptr));
        leftCmpLens->setText(QCoreApplication::translate("HexCmpRangeWin", "10240", nullptr));
        label_3->setText(QCoreApplication::translate("HexCmpRangeWin", "Right Start Pos:", nullptr));
        rightStartPos->setText(QCoreApplication::translate("HexCmpRangeWin", "0", nullptr));
        label_6->setText(QCoreApplication::translate("HexCmpRangeWin", "Right Compare Length:", nullptr));
        rightCmpLens->setText(QCoreApplication::translate("HexCmpRangeWin", "10240", nullptr));
        label_4->setText(QString());
        pushButton->setText(QCoreApplication::translate("HexCmpRangeWin", "Ok", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HexCmpRangeWin", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HexCmpRangeWin: public Ui_HexCmpRangeWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEXCMPRANGEWIN_H
