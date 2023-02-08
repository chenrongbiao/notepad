/********************************************************************************
** Form generated from reading UI file 'filecmprulewin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILECMPRULEWIN_H
#define UI_FILECMPRULEWIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileCmpRuleWin
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButtonDefault;
    QRadioButton *radioButtonIgnoreBackWhite;
    QRadioButton *radioButtonIgnoreAllWhite;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBoxBlankMatch;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *comboBoxEqualRato;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *FileCmpRuleWin)
    {
        if (FileCmpRuleWin->objectName().isEmpty())
            FileCmpRuleWin->setObjectName(QString::fromUtf8("FileCmpRuleWin"));
        FileCmpRuleWin->resize(481, 231);
        FileCmpRuleWin->setMaximumSize(QSize(500, 400));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/img/main.png"), QSize(), QIcon::Normal, QIcon::Off);
        FileCmpRuleWin->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(FileCmpRuleWin);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(FileCmpRuleWin);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButtonDefault = new QRadioButton(groupBox);
        radioButtonDefault->setObjectName(QString::fromUtf8("radioButtonDefault"));
        radioButtonDefault->setChecked(true);

        verticalLayout->addWidget(radioButtonDefault);

        radioButtonIgnoreBackWhite = new QRadioButton(groupBox);
        radioButtonIgnoreBackWhite->setObjectName(QString::fromUtf8("radioButtonIgnoreBackWhite"));

        verticalLayout->addWidget(radioButtonIgnoreBackWhite);

        radioButtonIgnoreAllWhite = new QRadioButton(groupBox);
        radioButtonIgnoreAllWhite->setObjectName(QString::fromUtf8("radioButtonIgnoreAllWhite"));

        verticalLayout->addWidget(radioButtonIgnoreAllWhite);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(FileCmpRuleWin);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        checkBoxBlankMatch = new QCheckBox(groupBox_2);
        checkBoxBlankMatch->setObjectName(QString::fromUtf8("checkBoxBlankMatch"));
        checkBoxBlankMatch->setChecked(true);

        verticalLayout_2->addWidget(checkBoxBlankMatch);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        comboBoxEqualRato = new QComboBox(groupBox_2);
        comboBoxEqualRato->addItem(QString());
        comboBoxEqualRato->addItem(QString());
        comboBoxEqualRato->addItem(QString());
        comboBoxEqualRato->setObjectName(QString::fromUtf8("comboBoxEqualRato"));

        horizontalLayout_2->addWidget(comboBoxEqualRato);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(FileCmpRuleWin);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(FileCmpRuleWin);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(FileCmpRuleWin);
        QObject::connect(pushButton_2, SIGNAL(clicked()), FileCmpRuleWin, SLOT(close()));
        QObject::connect(pushButton, SIGNAL(clicked()), FileCmpRuleWin, SLOT(slot_apply()));

        QMetaObject::connectSlotsByName(FileCmpRuleWin);
    } // setupUi

    void retranslateUi(QWidget *FileCmpRuleWin)
    {
        FileCmpRuleWin->setWindowTitle(QCoreApplication::translate("FileCmpRuleWin", "FileCmpRuleWin", nullptr));
        groupBox->setTitle(QCoreApplication::translate("FileCmpRuleWin", "Compare Options", nullptr));
        radioButtonDefault->setText(QCoreApplication::translate("FileCmpRuleWin", "Ignore whitespace characters before line", nullptr));
        radioButtonIgnoreBackWhite->setText(QCoreApplication::translate("FileCmpRuleWin", "Ignore whitespace characters At back of the line(such as python)", nullptr));
        radioButtonIgnoreAllWhite->setText(QCoreApplication::translate("FileCmpRuleWin", "Ignore all whitespace characters", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("FileCmpRuleWin", "Match Options", nullptr));
        checkBoxBlankMatch->setText(QCoreApplication::translate("FileCmpRuleWin", "Blank lines participate in matching", nullptr));
        label->setText(QCoreApplication::translate("FileCmpRuleWin", "Identify matching rates for rows that are equal", nullptr));
        comboBoxEqualRato->setItemText(0, QCoreApplication::translate("FileCmpRuleWin", "Match >= 50%", nullptr));
        comboBoxEqualRato->setItemText(1, QCoreApplication::translate("FileCmpRuleWin", "Match >= 70%", nullptr));
        comboBoxEqualRato->setItemText(2, QCoreApplication::translate("FileCmpRuleWin", "Match >= 90%", nullptr));

        pushButton->setText(QCoreApplication::translate("FileCmpRuleWin", "Apply", nullptr));
        pushButton_2->setText(QCoreApplication::translate("FileCmpRuleWin", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileCmpRuleWin: public Ui_FileCmpRuleWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILECMPRULEWIN_H
