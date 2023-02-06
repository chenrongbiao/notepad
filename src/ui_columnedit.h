/********************************************************************************
** Form generated from reading UI file 'columnedit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLUMNEDIT_H
#define UI_COLUMNEDIT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ColumnEdit
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *textGroupBox;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *inputText;
    QVBoxLayout *verticalLayout_2;
    QPushButton *ok;
    QPushButton *close;
    QGroupBox *numGroupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *initNum;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *incNum;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *repeNum;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *addPrefix;
    QLineEdit *prefix;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *is10;
    QSpacerItem *horizontalSpacer_5;
    QRadioButton *is16;
    QCheckBox *capital;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *is8;
    QRadioButton *is2;

    void setupUi(QWidget *ColumnEdit)
    {
        if (ColumnEdit->objectName().isEmpty())
            ColumnEdit->setObjectName(QString::fromUtf8("ColumnEdit"));
        ColumnEdit->resize(337, 316);
        ColumnEdit->setMaximumSize(QSize(350, 330));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/edit/global/ndd.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ColumnEdit->setWindowIcon(icon);
        verticalLayout_5 = new QVBoxLayout(ColumnEdit);
        verticalLayout_5->setSpacing(3);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(3, -1, 3, 3);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        textGroupBox = new QGroupBox(ColumnEdit);
        textGroupBox->setObjectName(QString::fromUtf8("textGroupBox"));
        textGroupBox->setCheckable(true);
        verticalLayout_4 = new QVBoxLayout(textGroupBox);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        inputText = new QLineEdit(textGroupBox);
        inputText->setObjectName(QString::fromUtf8("inputText"));
        inputText->setMaxLength(1024);

        verticalLayout_4->addWidget(inputText);


        horizontalLayout_5->addWidget(textGroupBox);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        ok = new QPushButton(ColumnEdit);
        ok->setObjectName(QString::fromUtf8("ok"));

        verticalLayout_2->addWidget(ok);

        close = new QPushButton(ColumnEdit);
        close->setObjectName(QString::fromUtf8("close"));

        verticalLayout_2->addWidget(close);


        horizontalLayout_5->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(horizontalLayout_5);

        numGroupBox = new QGroupBox(ColumnEdit);
        numGroupBox->setObjectName(QString::fromUtf8("numGroupBox"));
        numGroupBox->setCheckable(true);
        numGroupBox->setChecked(false);
        verticalLayout = new QVBoxLayout(numGroupBox);
        verticalLayout->setSpacing(9);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(20, -1, -1, -1);
        label = new QLabel(numGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        initNum = new QLineEdit(numGroupBox);
        initNum->setObjectName(QString::fromUtf8("initNum"));
        initNum->setMaxLength(11);

        horizontalLayout->addWidget(initNum);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(20, -1, -1, -1);
        label_2 = new QLabel(numGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        incNum = new QSpinBox(numGroupBox);
        incNum->setObjectName(QString::fromUtf8("incNum"));
        incNum->setMinimumSize(QSize(50, 0));
        incNum->setMinimum(1);

        horizontalLayout_2->addWidget(incNum);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(20, -1, -1, -1);
        label_3 = new QLabel(numGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        repeNum = new QSpinBox(numGroupBox);
        repeNum->setObjectName(QString::fromUtf8("repeNum"));
        repeNum->setMinimumSize(QSize(50, 0));
        repeNum->setMinimum(1);

        horizontalLayout_3->addWidget(repeNum);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(20, -1, -1, -1);
        addPrefix = new QCheckBox(numGroupBox);
        addPrefix->setObjectName(QString::fromUtf8("addPrefix"));

        horizontalLayout_4->addWidget(addPrefix);

        prefix = new QLineEdit(numGroupBox);
        prefix->setObjectName(QString::fromUtf8("prefix"));
        prefix->setEnabled(false);

        horizontalLayout_4->addWidget(prefix);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_4);

        groupBox_3 = new QGroupBox(numGroupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        is10 = new QRadioButton(groupBox_3);
        is10->setObjectName(QString::fromUtf8("is10"));
        is10->setChecked(true);

        horizontalLayout_6->addWidget(is10);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        is16 = new QRadioButton(groupBox_3);
        is16->setObjectName(QString::fromUtf8("is16"));

        horizontalLayout_6->addWidget(is16);

        capital = new QCheckBox(groupBox_3);
        capital->setObjectName(QString::fromUtf8("capital"));
        capital->setEnabled(false);
        capital->setChecked(true);

        horizontalLayout_6->addWidget(capital);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        is8 = new QRadioButton(groupBox_3);
        is8->setObjectName(QString::fromUtf8("is8"));

        horizontalLayout_7->addWidget(is8);

        is2 = new QRadioButton(groupBox_3);
        is2->setObjectName(QString::fromUtf8("is2"));

        horizontalLayout_7->addWidget(is2);


        verticalLayout_3->addLayout(horizontalLayout_7);


        verticalLayout->addWidget(groupBox_3);


        verticalLayout_5->addWidget(numGroupBox);


        retranslateUi(ColumnEdit);
        QObject::connect(inputText, SIGNAL(returnPressed()), ColumnEdit, SLOT(slot_ok()));
        QObject::connect(ok, SIGNAL(clicked()), ColumnEdit, SLOT(slot_ok()));
        QObject::connect(textGroupBox, SIGNAL(clicked(bool)), ColumnEdit, SLOT(slot_insertTextEnable(bool)));
        QObject::connect(numGroupBox, SIGNAL(clicked(bool)), ColumnEdit, SLOT(slot_insertNumEnable(bool)));
        QObject::connect(close, SIGNAL(clicked()), ColumnEdit, SLOT(close()));

        QMetaObject::connectSlotsByName(ColumnEdit);
    } // setupUi

    void retranslateUi(QWidget *ColumnEdit)
    {
        ColumnEdit->setWindowTitle(QCoreApplication::translate("ColumnEdit", "ColumnEdit", nullptr));
        textGroupBox->setTitle(QCoreApplication::translate("ColumnEdit", "Insert Text", nullptr));
        ok->setText(QCoreApplication::translate("ColumnEdit", "Ok", nullptr));
        close->setText(QCoreApplication::translate("ColumnEdit", "Close", nullptr));
        numGroupBox->setTitle(QCoreApplication::translate("ColumnEdit", "Insert Num", nullptr));
        label->setText(QCoreApplication::translate("ColumnEdit", "Initial value:", nullptr));
        initNum->setText(QCoreApplication::translate("ColumnEdit", "1", nullptr));
        initNum->setPlaceholderText(QCoreApplication::translate("ColumnEdit", "1", nullptr));
        label_2->setText(QCoreApplication::translate("ColumnEdit", "increment:", nullptr));
        label_3->setText(QCoreApplication::translate("ColumnEdit", "Repetitions:", nullptr));
        addPrefix->setText(QCoreApplication::translate("ColumnEdit", "prefix string:", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("ColumnEdit", "Format", nullptr));
        is10->setText(QCoreApplication::translate("ColumnEdit", "Decimal ", nullptr));
        is16->setText(QCoreApplication::translate("ColumnEdit", "Hex", nullptr));
        capital->setText(QCoreApplication::translate("ColumnEdit", "Capital", nullptr));
        is8->setText(QCoreApplication::translate("ColumnEdit", "Octal ", nullptr));
        is2->setText(QCoreApplication::translate("ColumnEdit", "Binary", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ColumnEdit: public Ui_ColumnEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLUMNEDIT_H
