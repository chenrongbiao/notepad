/********************************************************************************
** Form generated from reading UI file 'findcmpwin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDCMPWIN_H
#define UI_FINDCMPWIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FindCmpWin
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QTabWidget *findinfilesTab;
    QWidget *tab_find;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *findComboBox;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *findBackwardBox;
    QCheckBox *findMatchWholeBox;
    QCheckBox *findMatchCaseBox;
    QCheckBox *findWrapBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *findModeRegularBt;
    QRadioButton *findModeNormalBt;
    QVBoxLayout *verticalLayout_4;
    QPushButton *findTextNext;
    QPushButton *findCloseBt;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QRadioButton *leftSearch;
    QRadioButton *rightSearch;
    QSpacerItem *verticalSpacer;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FindCmpWin)
    {
        if (FindCmpWin->objectName().isEmpty())
            FindCmpWin->setObjectName(QString::fromUtf8("FindCmpWin"));
        FindCmpWin->resize(507, 279);
        FindCmpWin->setMaximumSize(QSize(610, 360));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/img/main.png"), QSize(), QIcon::Normal, QIcon::Off);
        FindCmpWin->setWindowIcon(icon);
        centralwidget = new QWidget(FindCmpWin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setSpacing(1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(4, 0, 2, 0);
        findinfilesTab = new QTabWidget(centralwidget);
        findinfilesTab->setObjectName(QString::fromUtf8("findinfilesTab"));
        tab_find = new QWidget();
        tab_find->setObjectName(QString::fromUtf8("tab_find"));
        horizontalLayout_3 = new QHBoxLayout(tab_find);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(tab_find);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        findComboBox = new QComboBox(tab_find);
        findComboBox->setObjectName(QString::fromUtf8("findComboBox"));
        findComboBox->setMinimumSize(QSize(250, 0));
        findComboBox->setEditable(true);
        findComboBox->setMaxCount(512);

        horizontalLayout->addWidget(findComboBox);


        verticalLayout_3->addLayout(horizontalLayout);

        groupBox_2 = new QGroupBox(tab_find);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        findBackwardBox = new QCheckBox(groupBox_2);
        findBackwardBox->setObjectName(QString::fromUtf8("findBackwardBox"));

        verticalLayout_2->addWidget(findBackwardBox);

        findMatchWholeBox = new QCheckBox(groupBox_2);
        findMatchWholeBox->setObjectName(QString::fromUtf8("findMatchWholeBox"));

        verticalLayout_2->addWidget(findMatchWholeBox);

        findMatchCaseBox = new QCheckBox(groupBox_2);
        findMatchCaseBox->setObjectName(QString::fromUtf8("findMatchCaseBox"));

        verticalLayout_2->addWidget(findMatchCaseBox);

        findWrapBox = new QCheckBox(groupBox_2);
        findWrapBox->setObjectName(QString::fromUtf8("findWrapBox"));
        findWrapBox->setChecked(true);

        verticalLayout_2->addWidget(findWrapBox);


        verticalLayout_3->addWidget(groupBox_2);

        groupBox = new QGroupBox(tab_find);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        findModeRegularBt = new QRadioButton(groupBox);
        findModeRegularBt->setObjectName(QString::fromUtf8("findModeRegularBt"));

        horizontalLayout_2->addWidget(findModeRegularBt);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        findModeNormalBt = new QRadioButton(groupBox);
        findModeNormalBt->setObjectName(QString::fromUtf8("findModeNormalBt"));
        findModeNormalBt->setChecked(true);

        gridLayout->addWidget(findModeNormalBt, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        findTextNext = new QPushButton(tab_find);
        findTextNext->setObjectName(QString::fromUtf8("findTextNext"));

        verticalLayout_4->addWidget(findTextNext);

        findCloseBt = new QPushButton(tab_find);
        findCloseBt->setObjectName(QString::fromUtf8("findCloseBt"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(findCloseBt->sizePolicy().hasHeightForWidth());
        findCloseBt->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(findCloseBt);

        groupBox_3 = new QGroupBox(tab_find);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        leftSearch = new QRadioButton(groupBox_3);
        leftSearch->setObjectName(QString::fromUtf8("leftSearch"));
        leftSearch->setChecked(true);

        verticalLayout->addWidget(leftSearch);

        rightSearch = new QRadioButton(groupBox_3);
        rightSearch->setObjectName(QString::fromUtf8("rightSearch"));

        verticalLayout->addWidget(rightSearch);


        verticalLayout_4->addWidget(groupBox_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout_4);

        findinfilesTab->addTab(tab_find, QString());

        gridLayout_2->addWidget(findinfilesTab, 0, 0, 1, 1);

        FindCmpWin->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(FindCmpWin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        FindCmpWin->setStatusBar(statusbar);

        retranslateUi(FindCmpWin);
        QObject::connect(findTextNext, SIGNAL(clicked()), FindCmpWin, SLOT(slot_findNext()));
        QObject::connect(findCloseBt, SIGNAL(clicked()), FindCmpWin, SLOT(close()));

        findinfilesTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FindCmpWin);
    } // setupUi

    void retranslateUi(QMainWindow *FindCmpWin)
    {
        FindCmpWin->setWindowTitle(QCoreApplication::translate("FindCmpWin", "Find text window", nullptr));
        label->setText(QCoreApplication::translate("FindCmpWin", "Find what :", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("FindCmpWin", "Options", nullptr));
        findBackwardBox->setText(QCoreApplication::translate("FindCmpWin", "Backward direction", nullptr));
        findMatchWholeBox->setText(QCoreApplication::translate("FindCmpWin", "Match whole word only", nullptr));
        findMatchCaseBox->setText(QCoreApplication::translate("FindCmpWin", "Match case", nullptr));
        findWrapBox->setText(QCoreApplication::translate("FindCmpWin", "Wrap around", nullptr));
        groupBox->setTitle(QCoreApplication::translate("FindCmpWin", "Search Mode", nullptr));
        findModeRegularBt->setText(QCoreApplication::translate("FindCmpWin", "Regular expression", nullptr));
        findModeNormalBt->setText(QCoreApplication::translate("FindCmpWin", "Normal", nullptr));
        findTextNext->setText(QCoreApplication::translate("FindCmpWin", "Find Next", nullptr));
        findCloseBt->setText(QCoreApplication::translate("FindCmpWin", "Close", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("FindCmpWin", "Diretion", nullptr));
        leftSearch->setText(QCoreApplication::translate("FindCmpWin", "Search In Left", nullptr));
        rightSearch->setText(QCoreApplication::translate("FindCmpWin", "Search In Right", nullptr));
        findinfilesTab->setTabText(findinfilesTab->indexOf(tab_find), QCoreApplication::translate("FindCmpWin", "find", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindCmpWin: public Ui_FindCmpWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDCMPWIN_H
