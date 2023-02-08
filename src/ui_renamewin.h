/********************************************************************************
** Form generated from reading UI file 'renamewin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENAMEWIN_H
#define UI_RENAMEWIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReNameWin
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditDir;
    QToolButton *toolButtonBrowse;
    QTabWidget *optionsTab;
    QWidget *addDelName;
    QGridLayout *gridLayout;
    QRadioButton *radioButtonAddPrefix;
    QLineEdit *lineEditAddPrefix;
    QRadioButton *radioButtonDelPrefix;
    QLineEdit *lineEditDelPrefix;
    QRadioButton *radioButtonAddSuffix;
    QLineEdit *lineEditAddSuffix;
    QRadioButton *radioButtonDelSuffix;
    QLineEdit *lineEditDelSuffix;
    QRadioButton *radioButtonLower;
    QRadioButton *radioButtonUpper;
    QWidget *changeExt;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QLineEdit *lineEditDestExt;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_3;
    QComboBox *comboBoxExt;
    QToolButton *definedFilterExt;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QCheckBox *checkBoxDealChildDir;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *startBt;
    QPushButton *closeBt;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *ReNameWin)
    {
        if (ReNameWin->objectName().isEmpty())
            ReNameWin->setObjectName(QString::fromUtf8("ReNameWin"));
        ReNameWin->resize(462, 256);
        ReNameWin->setMaximumSize(QSize(470, 260));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/edit/global/notebook.png"), QSize(), QIcon::Normal, QIcon::Off);
        ReNameWin->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(ReNameWin);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(ReNameWin);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEditDir = new QLineEdit(ReNameWin);
        lineEditDir->setObjectName(QString::fromUtf8("lineEditDir"));

        horizontalLayout->addWidget(lineEditDir);

        toolButtonBrowse = new QToolButton(ReNameWin);
        toolButtonBrowse->setObjectName(QString::fromUtf8("toolButtonBrowse"));

        horizontalLayout->addWidget(toolButtonBrowse);


        verticalLayout_2->addLayout(horizontalLayout);

        optionsTab = new QTabWidget(ReNameWin);
        optionsTab->setObjectName(QString::fromUtf8("optionsTab"));
        addDelName = new QWidget();
        addDelName->setObjectName(QString::fromUtf8("addDelName"));
        gridLayout = new QGridLayout(addDelName);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        radioButtonAddPrefix = new QRadioButton(addDelName);
        radioButtonAddPrefix->setObjectName(QString::fromUtf8("radioButtonAddPrefix"));

        gridLayout->addWidget(radioButtonAddPrefix, 0, 0, 1, 1);

        lineEditAddPrefix = new QLineEdit(addDelName);
        lineEditAddPrefix->setObjectName(QString::fromUtf8("lineEditAddPrefix"));
        lineEditAddPrefix->setEnabled(false);

        gridLayout->addWidget(lineEditAddPrefix, 0, 1, 1, 1);

        radioButtonDelPrefix = new QRadioButton(addDelName);
        radioButtonDelPrefix->setObjectName(QString::fromUtf8("radioButtonDelPrefix"));

        gridLayout->addWidget(radioButtonDelPrefix, 0, 2, 1, 1);

        lineEditDelPrefix = new QLineEdit(addDelName);
        lineEditDelPrefix->setObjectName(QString::fromUtf8("lineEditDelPrefix"));
        lineEditDelPrefix->setEnabled(false);

        gridLayout->addWidget(lineEditDelPrefix, 0, 3, 1, 1);

        radioButtonAddSuffix = new QRadioButton(addDelName);
        radioButtonAddSuffix->setObjectName(QString::fromUtf8("radioButtonAddSuffix"));

        gridLayout->addWidget(radioButtonAddSuffix, 1, 0, 1, 1);

        lineEditAddSuffix = new QLineEdit(addDelName);
        lineEditAddSuffix->setObjectName(QString::fromUtf8("lineEditAddSuffix"));
        lineEditAddSuffix->setEnabled(false);

        gridLayout->addWidget(lineEditAddSuffix, 1, 1, 1, 1);

        radioButtonDelSuffix = new QRadioButton(addDelName);
        radioButtonDelSuffix->setObjectName(QString::fromUtf8("radioButtonDelSuffix"));

        gridLayout->addWidget(radioButtonDelSuffix, 1, 2, 1, 1);

        lineEditDelSuffix = new QLineEdit(addDelName);
        lineEditDelSuffix->setObjectName(QString::fromUtf8("lineEditDelSuffix"));
        lineEditDelSuffix->setEnabled(false);

        gridLayout->addWidget(lineEditDelSuffix, 1, 3, 1, 1);

        radioButtonLower = new QRadioButton(addDelName);
        radioButtonLower->setObjectName(QString::fromUtf8("radioButtonLower"));

        gridLayout->addWidget(radioButtonLower, 2, 0, 1, 1);

        radioButtonUpper = new QRadioButton(addDelName);
        radioButtonUpper->setObjectName(QString::fromUtf8("radioButtonUpper"));

        gridLayout->addWidget(radioButtonUpper, 2, 1, 1, 2);

        optionsTab->addTab(addDelName, QString());
        changeExt = new QWidget();
        changeExt->setObjectName(QString::fromUtf8("changeExt"));
        verticalLayout_3 = new QVBoxLayout(changeExt);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_2 = new QLabel(changeExt);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_7->addWidget(label_2);

        lineEditDestExt = new QLineEdit(changeExt);
        lineEditDestExt->setObjectName(QString::fromUtf8("lineEditDestExt"));

        horizontalLayout_7->addWidget(lineEditDestExt);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_3 = new QLabel(changeExt);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_9->addWidget(label_3);

        comboBoxExt = new QComboBox(changeExt);
        comboBoxExt->addItem(QString());
        comboBoxExt->setObjectName(QString::fromUtf8("comboBoxExt"));
        comboBoxExt->setMinimumSize(QSize(150, 0));

        horizontalLayout_9->addWidget(comboBoxExt);

        definedFilterExt = new QToolButton(changeExt);
        definedFilterExt->setObjectName(QString::fromUtf8("definedFilterExt"));

        horizontalLayout_9->addWidget(definedFilterExt);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_9);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        optionsTab->addTab(changeExt, QString());

        verticalLayout_2->addWidget(optionsTab);

        checkBoxDealChildDir = new QCheckBox(ReNameWin);
        checkBoxDealChildDir->setObjectName(QString::fromUtf8("checkBoxDealChildDir"));

        verticalLayout_2->addWidget(checkBoxDealChildDir);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        startBt = new QPushButton(ReNameWin);
        startBt->setObjectName(QString::fromUtf8("startBt"));

        horizontalLayout_6->addWidget(startBt);

        closeBt = new QPushButton(ReNameWin);
        closeBt->setObjectName(QString::fromUtf8("closeBt"));

        horizontalLayout_6->addWidget(closeBt);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_6);


        retranslateUi(ReNameWin);
        QObject::connect(closeBt, SIGNAL(clicked()), ReNameWin, SLOT(close()));
        QObject::connect(toolButtonBrowse, SIGNAL(clicked()), ReNameWin, SLOT(slot_selectDir()));
        QObject::connect(startBt, SIGNAL(clicked()), ReNameWin, SLOT(slot_startRename()));
        QObject::connect(definedFilterExt, SIGNAL(clicked()), ReNameWin, SLOT(slot_userDefineExt()));

        optionsTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ReNameWin);
    } // setupUi

    void retranslateUi(QWidget *ReNameWin)
    {
        ReNameWin->setWindowTitle(QCoreApplication::translate("ReNameWin", "ReNameBatchWin", nullptr));
        label->setText(QCoreApplication::translate("ReNameWin", "Select Dir", nullptr));
        toolButtonBrowse->setText(QCoreApplication::translate("ReNameWin", "Browse", nullptr));
        radioButtonAddPrefix->setText(QCoreApplication::translate("ReNameWin", "Add Prefix", nullptr));
        radioButtonDelPrefix->setText(QCoreApplication::translate("ReNameWin", "Del Prefix", nullptr));
        radioButtonAddSuffix->setText(QCoreApplication::translate("ReNameWin", "Add Suffix", nullptr));
        radioButtonDelSuffix->setText(QCoreApplication::translate("ReNameWin", "Del Suffix", nullptr));
        radioButtonLower->setText(QCoreApplication::translate("ReNameWin", "Lower FileName", nullptr));
        radioButtonUpper->setText(QCoreApplication::translate("ReNameWin", "Upper FileName", nullptr));
        optionsTab->setTabText(optionsTab->indexOf(addDelName), QCoreApplication::translate("ReNameWin", "AddDelNameString", nullptr));
        label_2->setText(QCoreApplication::translate("ReNameWin", "Modify Ext To", nullptr));
        label_3->setText(QCoreApplication::translate("ReNameWin", "Deal Ext Type", nullptr));
        comboBoxExt->setItemText(0, QCoreApplication::translate("ReNameWin", "All File Ext Type", nullptr));

        definedFilterExt->setText(QCoreApplication::translate("ReNameWin", "defined", nullptr));
        optionsTab->setTabText(optionsTab->indexOf(changeExt), QCoreApplication::translate("ReNameWin", "ChangeExt", nullptr));
        checkBoxDealChildDir->setText(QCoreApplication::translate("ReNameWin", "Deal Child Dir", nullptr));
        startBt->setText(QCoreApplication::translate("ReNameWin", "Start", nullptr));
        closeBt->setText(QCoreApplication::translate("ReNameWin", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReNameWin: public Ui_ReNameWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENAMEWIN_H
