/********************************************************************************
** Form generated from reading UI file 'texteditsetwin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTEDITSETWIN_H
#define UI_TEXTEDITSETWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextEditSetWin
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBoxTabLens;
    QCheckBox *checkBoxReplaceTabToSpace;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpinBox *BigTextSizeLimit;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QToolButton *toolButton;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLabel *appFontColorLabel;
    QToolButton *toolButton1;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *restoreFile;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *TextEditSetWin)
    {
        if (TextEditSetWin->objectName().isEmpty())
            TextEditSetWin->setObjectName(QString::fromUtf8("TextEditSetWin"));
        TextEditSetWin->resize(617, 300);
        verticalLayout_2 = new QVBoxLayout(TextEditSetWin);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBox = new QGroupBox(TextEditSetWin);
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

        spinBoxTabLens = new QSpinBox(groupBox);
        spinBoxTabLens->setObjectName(QString::fromUtf8("spinBoxTabLens"));
        spinBoxTabLens->setMaximum(16);
        spinBoxTabLens->setValue(4);

        horizontalLayout->addWidget(spinBoxTabLens);


        verticalLayout->addLayout(horizontalLayout);

        checkBoxReplaceTabToSpace = new QCheckBox(groupBox);
        checkBoxReplaceTabToSpace->setObjectName(QString::fromUtf8("checkBoxReplaceTabToSpace"));
        checkBoxReplaceTabToSpace->setChecked(true);

        verticalLayout->addWidget(checkBoxReplaceTabToSpace);


        horizontalLayout_2->addWidget(groupBox);

        groupBox_3 = new QGroupBox(TextEditSetWin);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_3->addWidget(label_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        BigTextSizeLimit = new QSpinBox(groupBox_3);
        BigTextSizeLimit->setObjectName(QString::fromUtf8("BigTextSizeLimit"));
        BigTextSizeLimit->setMinimum(50);
        BigTextSizeLimit->setMaximum(300);
        BigTextSizeLimit->setValue(100);

        horizontalLayout_4->addWidget(BigTextSizeLimit);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_4);


        horizontalLayout_2->addWidget(groupBox_3);

        horizontalSpacer = new QSpacerItem(437, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_2);

        groupBox_2 = new QGroupBox(TextEditSetWin);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        toolButton = new QToolButton(groupBox_2);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        horizontalLayout_6->addWidget(toolButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_5->addWidget(label_2);

        appFontColorLabel = new QLabel(groupBox_2);
        appFontColorLabel->setObjectName(QString::fromUtf8("appFontColorLabel"));

        horizontalLayout_5->addWidget(appFontColorLabel);

        toolButton1 = new QToolButton(groupBox_2);
        toolButton1->setObjectName(QString::fromUtf8("toolButton1"));
        toolButton1->setEnabled(false);

        horizontalLayout_5->addWidget(toolButton1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_4->addLayout(horizontalLayout_5);


        verticalLayout_2->addWidget(groupBox_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        restoreFile = new QCheckBox(TextEditSetWin);
        restoreFile->setObjectName(QString::fromUtf8("restoreFile"));

        horizontalLayout_3->addWidget(restoreFile);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(TextEditSetWin);
        QObject::connect(toolButton, SIGNAL(clicked()), TextEditSetWin, SLOT(slot_txtFontSet()));
        QObject::connect(toolButton1, SIGNAL(clicked()), TextEditSetWin, SLOT(slot_appFontColor()));

        QMetaObject::connectSlotsByName(TextEditSetWin);
    } // setupUi

    void retranslateUi(QWidget *TextEditSetWin)
    {
        TextEditSetWin->setWindowTitle(QCoreApplication::translate("TextEditSetWin", "TextEditSetWin", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TextEditSetWin", "Tab Setting", nullptr));
        label->setText(QCoreApplication::translate("TextEditSetWin", "Set Tab Length", nullptr));
        checkBoxReplaceTabToSpace->setText(QCoreApplication::translate("TextEditSetWin", "Space Replacement Tab", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("TextEditSetWin", "Big Text Size", nullptr));
        label_4->setText(QCoreApplication::translate("TextEditSetWin", "Beyond this size, it can only be read-only and displayed in blocks", nullptr));
        label_3->setText(QCoreApplication::translate("TextEditSetWin", "Exceed(MB)", nullptr));
        label_5->setText(QCoreApplication::translate("TextEditSetWin", "(50-300MB)", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("TextEditSetWin", "Font Setting", nullptr));
        label_6->setText(QCoreApplication::translate("TextEditSetWin", "Txt File Font:", nullptr));
        toolButton->setText(QCoreApplication::translate("TextEditSetWin", " Set", nullptr));
        label_2->setText(QCoreApplication::translate("TextEditSetWin", "App Font Color:", nullptr));
        appFontColorLabel->setText(QCoreApplication::translate("TextEditSetWin", "TextLabel", nullptr));
        toolButton1->setText(QCoreApplication::translate("TextEditSetWin", "Set", nullptr));
        restoreFile->setText(QCoreApplication::translate("TextEditSetWin", "Restore files opened on close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextEditSetWin: public Ui_TextEditSetWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTEDITSETWIN_H
