/********************************************************************************
** Form generated from reading UI file 'findwin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDWIN_H
#define UI_FINDWIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FindWin
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_14;
    QTabWidget *findinfilesTab;
    QWidget *tab_find;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *findComboBox;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *findBackwardBox;
    QCheckBox *findMatchWholeBox;
    QCheckBox *findMatchCaseBox;
    QCheckBox *findWrapBox;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *findModeRegularBt;
    QRadioButton *findModeNormalBt;
    QRadioButton *findModeExtendBt;
    QSpacerItem *verticalSpacer_13;
    QVBoxLayout *verticalLayout;
    QPushButton *findTextNext;
    QPushButton *findTextPrev;
    QPushButton *countBt;
    QPushButton *findAllinCourrent;
    QPushButton *findAllinAllOpen;
    QPushButton *findClearBt;
    QPushButton *findCloseBt;
    QSpacerItem *verticalSpacer;
    QWidget *tab_replace;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QComboBox *replaceTextBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QLineEdit *replaceWithBox;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *replaceBackwardBox;
    QCheckBox *replaceMatchWholeBox;
    QCheckBox *replaceMatchCaseBox;
    QCheckBox *replaceWrapBox;
    QSpacerItem *verticalSpacer_5;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QRadioButton *replaceModeNormalBox;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *replaceModeRegularBt;
    QRadioButton *replaceModeExtendBox;
    QSpacerItem *verticalSpacer_14;
    QVBoxLayout *verticalLayout_8;
    QPushButton *replaceFindNextBox;
    QPushButton *replaceBt;
    QPushButton *replaceAllBt;
    QPushButton *replaceAllinAllOpenBt;
    QPushButton *replaceCloseBt;
    QSpacerItem *verticalSpacer_6;
    QWidget *tab_dirfind;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_17;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QLineEdit *destFindDir;
    QToolButton *selectDir;
    QLabel *label_5;
    QComboBox *dirFindWhat;
    QGridLayout *gridLayout_5;
    QLineEdit *fileType;
    QCheckBox *dealFileType;
    QLabel *label_6;
    QCheckBox *skipDir;
    QLineEdit *skipDirNames;
    QLineEdit *dirReplaceWhat;
    QSpacerItem *verticalSpacer_11;
    QVBoxLayout *verticalLayout_13;
    QCheckBox *dirFindMatchWholeBox;
    QCheckBox *dirFindMatchCaseBox;
    QSpacerItem *verticalSpacer_12;
    QHBoxLayout *horizontalLayout_18;
    QVBoxLayout *verticalLayout_16;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_6;
    QRadioButton *dirFindModeNormalBox;
    QHBoxLayout *horizontalLayout_13;
    QRadioButton *dirFindModeRegularBt;
    QRadioButton *dirFindModeExtendBox;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_14;
    QCheckBox *skipChildDirs;
    QCheckBox *skipHideFile;
    QCheckBox *skipBinary;
    QHBoxLayout *horizontalLayout_12;
    QCheckBox *skipFileMaxSize;
    QSpinBox *maxFileSizeSpinBox;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_15;
    QPushButton *dirFindAll;
    QPushButton *dirReplaceAll;
    QPushButton *clearBt;
    QPushButton *dirClose;
    QSpacerItem *verticalSpacer_10;
    QWidget *tab_mark;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QComboBox *markTextBox;
    QSpacerItem *verticalSpacer_7;
    QVBoxLayout *verticalLayout_10;
    QCheckBox *markMatchWholeBox;
    QCheckBox *markMatchCaseBox;
    QSpacerItem *verticalSpacer_8;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_9;
    QRadioButton *markModeRegularBt;
    QRadioButton *markModeNormalBox;
    QRadioButton *markModeExtendBox;
    QSpacerItem *verticalSpacer_15;
    QVBoxLayout *verticalLayout_12;
    QPushButton *markAllBox;
    QPushButton *markClearBox;
    QPushButton *markClearAllBox;
    QPushButton *markCloseBt;
    QSpacerItem *verticalSpacer_9;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FindWin)
    {
        if (FindWin->objectName().isEmpty())
            FindWin->setObjectName(QString::fromUtf8("FindWin"));
        FindWin->resize(689, 384);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/edit/global/ndd.ico"), QSize(), QIcon::Normal, QIcon::Off);
        FindWin->setWindowIcon(icon);
        centralwidget = new QWidget(FindWin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_14 = new QHBoxLayout(centralwidget);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(3, 3, 2, 2);
        findinfilesTab = new QTabWidget(centralwidget);
        findinfilesTab->setObjectName(QString::fromUtf8("findinfilesTab"));
        findinfilesTab->setMinimumSize(QSize(300, 32));
        tab_find = new QWidget();
        tab_find->setObjectName(QString::fromUtf8("tab_find"));
        horizontalLayout_3 = new QHBoxLayout(tab_find);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 2);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(tab_find);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        findComboBox = new QComboBox(tab_find);
        findComboBox->setObjectName(QString::fromUtf8("findComboBox"));
        findComboBox->setMinimumSize(QSize(300, 0));
        findComboBox->setMaximumSize(QSize(350, 16777215));
        findComboBox->setEditable(true);
        findComboBox->setMaxCount(512);

        horizontalLayout->addWidget(findComboBox);


        verticalLayout_4->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        findBackwardBox = new QCheckBox(tab_find);
        findBackwardBox->setObjectName(QString::fromUtf8("findBackwardBox"));

        verticalLayout_2->addWidget(findBackwardBox);

        findMatchWholeBox = new QCheckBox(tab_find);
        findMatchWholeBox->setObjectName(QString::fromUtf8("findMatchWholeBox"));

        verticalLayout_2->addWidget(findMatchWholeBox);

        findMatchCaseBox = new QCheckBox(tab_find);
        findMatchCaseBox->setObjectName(QString::fromUtf8("findMatchCaseBox"));

        verticalLayout_2->addWidget(findMatchCaseBox);

        findWrapBox = new QCheckBox(tab_find);
        findWrapBox->setObjectName(QString::fromUtf8("findWrapBox"));
        findWrapBox->setChecked(true);

        verticalLayout_2->addWidget(findWrapBox);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        groupBox = new QGroupBox(tab_find);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        findModeRegularBt = new QRadioButton(groupBox);
        findModeRegularBt->setObjectName(QString::fromUtf8("findModeRegularBt"));

        horizontalLayout_2->addWidget(findModeRegularBt);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        findModeNormalBt = new QRadioButton(groupBox);
        findModeNormalBt->setObjectName(QString::fromUtf8("findModeNormalBt"));
        findModeNormalBt->setChecked(true);

        gridLayout->addWidget(findModeNormalBt, 0, 0, 1, 1);

        findModeExtendBt = new QRadioButton(groupBox);
        findModeExtendBt->setObjectName(QString::fromUtf8("findModeExtendBt"));

        gridLayout->addWidget(findModeExtendBt, 1, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_13);


        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        findTextNext = new QPushButton(tab_find);
        findTextNext->setObjectName(QString::fromUtf8("findTextNext"));
        findTextNext->setMinimumSize(QSize(200, 28));

        verticalLayout->addWidget(findTextNext);

        findTextPrev = new QPushButton(tab_find);
        findTextPrev->setObjectName(QString::fromUtf8("findTextPrev"));
        findTextPrev->setMinimumSize(QSize(200, 28));

        verticalLayout->addWidget(findTextPrev);

        countBt = new QPushButton(tab_find);
        countBt->setObjectName(QString::fromUtf8("countBt"));
        countBt->setMinimumSize(QSize(200, 0));

        verticalLayout->addWidget(countBt);

        findAllinCourrent = new QPushButton(tab_find);
        findAllinCourrent->setObjectName(QString::fromUtf8("findAllinCourrent"));
        findAllinCourrent->setMinimumSize(QSize(200, 34));

        verticalLayout->addWidget(findAllinCourrent);

        findAllinAllOpen = new QPushButton(tab_find);
        findAllinAllOpen->setObjectName(QString::fromUtf8("findAllinAllOpen"));
        findAllinAllOpen->setMinimumSize(QSize(200, 34));

        verticalLayout->addWidget(findAllinAllOpen);

        findClearBt = new QPushButton(tab_find);
        findClearBt->setObjectName(QString::fromUtf8("findClearBt"));
        findClearBt->setMinimumSize(QSize(200, 0));

        verticalLayout->addWidget(findClearBt);

        findCloseBt = new QPushButton(tab_find);
        findCloseBt->setObjectName(QString::fromUtf8("findCloseBt"));
        findCloseBt->setMinimumSize(QSize(200, 0));

        verticalLayout->addWidget(findCloseBt);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout);

        findinfilesTab->addTab(tab_find, QString());
        tab_replace = new QWidget();
        tab_replace->setObjectName(QString::fromUtf8("tab_replace"));
        horizontalLayout_8 = new QHBoxLayout(tab_replace);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, -1, -1, 2);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_3 = new QLabel(tab_replace);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(label_3);

        replaceTextBox = new QComboBox(tab_replace);
        replaceTextBox->setObjectName(QString::fromUtf8("replaceTextBox"));
        replaceTextBox->setMinimumSize(QSize(300, 0));
        replaceTextBox->setMaximumSize(QSize(350, 16777215));
        replaceTextBox->setEditable(true);
        replaceTextBox->setMaxCount(512);

        horizontalLayout_6->addWidget(replaceTextBox);


        verticalLayout_9->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_4 = new QLabel(tab_replace);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(label_4);

        replaceWithBox = new QLineEdit(tab_replace);
        replaceWithBox->setObjectName(QString::fromUtf8("replaceWithBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(replaceWithBox->sizePolicy().hasHeightForWidth());
        replaceWithBox->setSizePolicy(sizePolicy1);
        replaceWithBox->setMinimumSize(QSize(300, 0));
        replaceWithBox->setMaximumSize(QSize(350, 16777215));

        horizontalLayout_7->addWidget(replaceWithBox);


        verticalLayout_9->addLayout(horizontalLayout_7);


        verticalLayout_5->addLayout(verticalLayout_9);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        replaceBackwardBox = new QCheckBox(tab_replace);
        replaceBackwardBox->setObjectName(QString::fromUtf8("replaceBackwardBox"));

        verticalLayout_7->addWidget(replaceBackwardBox);

        replaceMatchWholeBox = new QCheckBox(tab_replace);
        replaceMatchWholeBox->setObjectName(QString::fromUtf8("replaceMatchWholeBox"));

        verticalLayout_7->addWidget(replaceMatchWholeBox);

        replaceMatchCaseBox = new QCheckBox(tab_replace);
        replaceMatchCaseBox->setObjectName(QString::fromUtf8("replaceMatchCaseBox"));

        verticalLayout_7->addWidget(replaceMatchCaseBox);

        replaceWrapBox = new QCheckBox(tab_replace);
        replaceWrapBox->setObjectName(QString::fromUtf8("replaceWrapBox"));
        replaceWrapBox->setChecked(true);

        verticalLayout_7->addWidget(replaceWrapBox);


        verticalLayout_6->addLayout(verticalLayout_7);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_5);

        groupBox_2 = new QGroupBox(tab_replace);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        replaceModeNormalBox = new QRadioButton(groupBox_2);
        replaceModeNormalBox->setObjectName(QString::fromUtf8("replaceModeNormalBox"));
        replaceModeNormalBox->setChecked(true);

        gridLayout_3->addWidget(replaceModeNormalBox, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        replaceModeRegularBt = new QRadioButton(groupBox_2);
        replaceModeRegularBt->setObjectName(QString::fromUtf8("replaceModeRegularBt"));

        horizontalLayout_5->addWidget(replaceModeRegularBt);


        gridLayout_3->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        replaceModeExtendBox = new QRadioButton(groupBox_2);
        replaceModeExtendBox->setObjectName(QString::fromUtf8("replaceModeExtendBox"));

        gridLayout_3->addWidget(replaceModeExtendBox, 1, 0, 1, 1);


        verticalLayout_6->addWidget(groupBox_2);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_14);


        verticalLayout_5->addLayout(verticalLayout_6);


        horizontalLayout_8->addLayout(verticalLayout_5);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        replaceFindNextBox = new QPushButton(tab_replace);
        replaceFindNextBox->setObjectName(QString::fromUtf8("replaceFindNextBox"));
        sizePolicy1.setHeightForWidth(replaceFindNextBox->sizePolicy().hasHeightForWidth());
        replaceFindNextBox->setSizePolicy(sizePolicy1);
        replaceFindNextBox->setMinimumSize(QSize(200, 28));

        verticalLayout_8->addWidget(replaceFindNextBox);

        replaceBt = new QPushButton(tab_replace);
        replaceBt->setObjectName(QString::fromUtf8("replaceBt"));
        sizePolicy1.setHeightForWidth(replaceBt->sizePolicy().hasHeightForWidth());
        replaceBt->setSizePolicy(sizePolicy1);
        replaceBt->setMinimumSize(QSize(200, 28));

        verticalLayout_8->addWidget(replaceBt);

        replaceAllBt = new QPushButton(tab_replace);
        replaceAllBt->setObjectName(QString::fromUtf8("replaceAllBt"));
        sizePolicy1.setHeightForWidth(replaceAllBt->sizePolicy().hasHeightForWidth());
        replaceAllBt->setSizePolicy(sizePolicy1);
        replaceAllBt->setMinimumSize(QSize(200, 28));

        verticalLayout_8->addWidget(replaceAllBt);

        replaceAllinAllOpenBt = new QPushButton(tab_replace);
        replaceAllinAllOpenBt->setObjectName(QString::fromUtf8("replaceAllinAllOpenBt"));
        sizePolicy1.setHeightForWidth(replaceAllinAllOpenBt->sizePolicy().hasHeightForWidth());
        replaceAllinAllOpenBt->setSizePolicy(sizePolicy1);
        replaceAllinAllOpenBt->setMinimumSize(QSize(200, 34));

        verticalLayout_8->addWidget(replaceAllinAllOpenBt);

        replaceCloseBt = new QPushButton(tab_replace);
        replaceCloseBt->setObjectName(QString::fromUtf8("replaceCloseBt"));
        sizePolicy1.setHeightForWidth(replaceCloseBt->sizePolicy().hasHeightForWidth());
        replaceCloseBt->setSizePolicy(sizePolicy1);
        replaceCloseBt->setMinimumSize(QSize(200, 0));

        verticalLayout_8->addWidget(replaceCloseBt);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_6);


        horizontalLayout_8->addLayout(verticalLayout_8);

        findinfilesTab->addTab(tab_replace, QString());
        tab_dirfind = new QWidget();
        tab_dirfind->setObjectName(QString::fromUtf8("tab_dirfind"));
        horizontalLayout_10 = new QHBoxLayout(tab_dirfind);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, -1, -1, 2);
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_8 = new QLabel(tab_dirfind);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        destFindDir = new QLineEdit(tab_dirfind);
        destFindDir->setObjectName(QString::fromUtf8("destFindDir"));
        sizePolicy1.setHeightForWidth(destFindDir->sizePolicy().hasHeightForWidth());
        destFindDir->setSizePolicy(sizePolicy1);
        destFindDir->setMinimumSize(QSize(250, 0));
        destFindDir->setMaximumSize(QSize(350, 16777215));

        gridLayout_2->addWidget(destFindDir, 0, 1, 1, 1);

        selectDir = new QToolButton(tab_dirfind);
        selectDir->setObjectName(QString::fromUtf8("selectDir"));
        selectDir->setMinimumSize(QSize(0, 20));

        gridLayout_2->addWidget(selectDir, 0, 2, 1, 1);

        label_5 = new QLabel(tab_dirfind);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        dirFindWhat = new QComboBox(tab_dirfind);
        dirFindWhat->setObjectName(QString::fromUtf8("dirFindWhat"));
        dirFindWhat->setMinimumSize(QSize(250, 0));
        dirFindWhat->setMaximumSize(QSize(350, 16777215));
        dirFindWhat->setEditable(true);
        dirFindWhat->setMaxCount(512);

        gridLayout_2->addWidget(dirFindWhat, 1, 1, 1, 1);


        verticalLayout_17->addLayout(gridLayout_2);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        fileType = new QLineEdit(tab_dirfind);
        fileType->setObjectName(QString::fromUtf8("fileType"));
        fileType->setEnabled(false);
        sizePolicy1.setHeightForWidth(fileType->sizePolicy().hasHeightForWidth());
        fileType->setSizePolicy(sizePolicy1);
        fileType->setMinimumSize(QSize(300, 0));
        fileType->setMaximumSize(QSize(350, 16777215));

        gridLayout_5->addWidget(fileType, 1, 1, 1, 1);

        dealFileType = new QCheckBox(tab_dirfind);
        dealFileType->setObjectName(QString::fromUtf8("dealFileType"));
        sizePolicy2.setHeightForWidth(dealFileType->sizePolicy().hasHeightForWidth());
        dealFileType->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(dealFileType, 1, 0, 1, 1);

        label_6 = new QLabel(tab_dirfind);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(label_6, 0, 0, 1, 1);

        skipDir = new QCheckBox(tab_dirfind);
        skipDir->setObjectName(QString::fromUtf8("skipDir"));
        sizePolicy2.setHeightForWidth(skipDir->sizePolicy().hasHeightForWidth());
        skipDir->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(skipDir, 2, 0, 1, 1);

        skipDirNames = new QLineEdit(tab_dirfind);
        skipDirNames->setObjectName(QString::fromUtf8("skipDirNames"));
        skipDirNames->setEnabled(false);
        sizePolicy1.setHeightForWidth(skipDirNames->sizePolicy().hasHeightForWidth());
        skipDirNames->setSizePolicy(sizePolicy1);
        skipDirNames->setMinimumSize(QSize(300, 0));
        skipDirNames->setMaximumSize(QSize(350, 16777215));

        gridLayout_5->addWidget(skipDirNames, 2, 1, 1, 1);

        dirReplaceWhat = new QLineEdit(tab_dirfind);
        dirReplaceWhat->setObjectName(QString::fromUtf8("dirReplaceWhat"));
        sizePolicy1.setHeightForWidth(dirReplaceWhat->sizePolicy().hasHeightForWidth());
        dirReplaceWhat->setSizePolicy(sizePolicy1);
        dirReplaceWhat->setMinimumSize(QSize(300, 0));
        dirReplaceWhat->setMaximumSize(QSize(350, 16777215));

        gridLayout_5->addWidget(dirReplaceWhat, 0, 1, 1, 1);


        verticalLayout_17->addLayout(gridLayout_5);

        verticalSpacer_11 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_17->addItem(verticalSpacer_11);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        dirFindMatchWholeBox = new QCheckBox(tab_dirfind);
        dirFindMatchWholeBox->setObjectName(QString::fromUtf8("dirFindMatchWholeBox"));
        dirFindMatchWholeBox->setCheckable(true);
        dirFindMatchWholeBox->setChecked(false);

        verticalLayout_13->addWidget(dirFindMatchWholeBox);

        dirFindMatchCaseBox = new QCheckBox(tab_dirfind);
        dirFindMatchCaseBox->setObjectName(QString::fromUtf8("dirFindMatchCaseBox"));

        verticalLayout_13->addWidget(dirFindMatchCaseBox);


        verticalLayout_17->addLayout(verticalLayout_13);

        verticalSpacer_12 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_17->addItem(verticalSpacer_12);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        groupBox_4 = new QGroupBox(tab_dirfind);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_6 = new QGridLayout(groupBox_4);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        dirFindModeNormalBox = new QRadioButton(groupBox_4);
        dirFindModeNormalBox->setObjectName(QString::fromUtf8("dirFindModeNormalBox"));
        dirFindModeNormalBox->setChecked(true);

        gridLayout_6->addWidget(dirFindModeNormalBox, 0, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        dirFindModeRegularBt = new QRadioButton(groupBox_4);
        dirFindModeRegularBt->setObjectName(QString::fromUtf8("dirFindModeRegularBt"));

        horizontalLayout_13->addWidget(dirFindModeRegularBt);


        gridLayout_6->addLayout(horizontalLayout_13, 2, 0, 1, 1);

        dirFindModeExtendBox = new QRadioButton(groupBox_4);
        dirFindModeExtendBox->setObjectName(QString::fromUtf8("dirFindModeExtendBox"));

        gridLayout_6->addWidget(dirFindModeExtendBox, 1, 0, 1, 1);


        verticalLayout_16->addWidget(groupBox_4);


        horizontalLayout_18->addLayout(verticalLayout_16);

        groupBox_5 = new QGroupBox(tab_dirfind);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_14 = new QVBoxLayout(groupBox_5);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        skipChildDirs = new QCheckBox(groupBox_5);
        skipChildDirs->setObjectName(QString::fromUtf8("skipChildDirs"));

        verticalLayout_14->addWidget(skipChildDirs);

        skipHideFile = new QCheckBox(groupBox_5);
        skipHideFile->setObjectName(QString::fromUtf8("skipHideFile"));
        skipHideFile->setChecked(true);

        verticalLayout_14->addWidget(skipHideFile);

        skipBinary = new QCheckBox(groupBox_5);
        skipBinary->setObjectName(QString::fromUtf8("skipBinary"));
        skipBinary->setEnabled(false);
        skipBinary->setChecked(true);

        verticalLayout_14->addWidget(skipBinary);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        skipFileMaxSize = new QCheckBox(groupBox_5);
        skipFileMaxSize->setObjectName(QString::fromUtf8("skipFileMaxSize"));
        skipFileMaxSize->setChecked(true);

        horizontalLayout_12->addWidget(skipFileMaxSize);

        maxFileSizeSpinBox = new QSpinBox(groupBox_5);
        maxFileSizeSpinBox->setObjectName(QString::fromUtf8("maxFileSizeSpinBox"));
        maxFileSizeSpinBox->setMinimum(1);
        maxFileSizeSpinBox->setMaximum(30);
        maxFileSizeSpinBox->setValue(20);

        horizontalLayout_12->addWidget(maxFileSizeSpinBox);

        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_12->addWidget(label_9);


        verticalLayout_14->addLayout(horizontalLayout_12);


        horizontalLayout_18->addWidget(groupBox_5);


        verticalLayout_17->addLayout(horizontalLayout_18);


        horizontalLayout_10->addLayout(verticalLayout_17);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        dirFindAll = new QPushButton(tab_dirfind);
        dirFindAll->setObjectName(QString::fromUtf8("dirFindAll"));
        sizePolicy1.setHeightForWidth(dirFindAll->sizePolicy().hasHeightForWidth());
        dirFindAll->setSizePolicy(sizePolicy1);
        dirFindAll->setMinimumSize(QSize(200, 28));

        verticalLayout_15->addWidget(dirFindAll);

        dirReplaceAll = new QPushButton(tab_dirfind);
        dirReplaceAll->setObjectName(QString::fromUtf8("dirReplaceAll"));
        sizePolicy2.setHeightForWidth(dirReplaceAll->sizePolicy().hasHeightForWidth());
        dirReplaceAll->setSizePolicy(sizePolicy2);
        dirReplaceAll->setMinimumSize(QSize(200, 28));

        verticalLayout_15->addWidget(dirReplaceAll);

        clearBt = new QPushButton(tab_dirfind);
        clearBt->setObjectName(QString::fromUtf8("clearBt"));
        sizePolicy2.setHeightForWidth(clearBt->sizePolicy().hasHeightForWidth());
        clearBt->setSizePolicy(sizePolicy2);
        clearBt->setMinimumSize(QSize(200, 28));

        verticalLayout_15->addWidget(clearBt);

        dirClose = new QPushButton(tab_dirfind);
        dirClose->setObjectName(QString::fromUtf8("dirClose"));
        sizePolicy2.setHeightForWidth(dirClose->sizePolicy().hasHeightForWidth());
        dirClose->setSizePolicy(sizePolicy2);
        dirClose->setMinimumSize(QSize(200, 28));

        verticalLayout_15->addWidget(dirClose);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_15->addItem(verticalSpacer_10);


        horizontalLayout_10->addLayout(verticalLayout_15);

        findinfilesTab->addTab(tab_dirfind, QString());
        tab_mark = new QWidget();
        tab_mark->setObjectName(QString::fromUtf8("tab_mark"));
        horizontalLayout_11 = new QHBoxLayout(tab_mark);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(-1, -1, -1, 2);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(tab_mark);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(label_2);

        markTextBox = new QComboBox(tab_mark);
        markTextBox->setObjectName(QString::fromUtf8("markTextBox"));
        markTextBox->setMinimumSize(QSize(300, 0));
        markTextBox->setMaximumSize(QSize(350, 16777215));
        markTextBox->setEditable(true);
        markTextBox->setMaxCount(512);

        horizontalLayout_4->addWidget(markTextBox);


        verticalLayout_11->addLayout(horizontalLayout_4);

        verticalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_7);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        markMatchWholeBox = new QCheckBox(tab_mark);
        markMatchWholeBox->setObjectName(QString::fromUtf8("markMatchWholeBox"));

        verticalLayout_10->addWidget(markMatchWholeBox);

        markMatchCaseBox = new QCheckBox(tab_mark);
        markMatchCaseBox->setObjectName(QString::fromUtf8("markMatchCaseBox"));

        verticalLayout_10->addWidget(markMatchCaseBox);


        verticalLayout_11->addLayout(verticalLayout_10);

        verticalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_8);

        groupBox_3 = new QGroupBox(tab_mark);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        markModeRegularBt = new QRadioButton(groupBox_3);
        markModeRegularBt->setObjectName(QString::fromUtf8("markModeRegularBt"));

        horizontalLayout_9->addWidget(markModeRegularBt);


        gridLayout_4->addLayout(horizontalLayout_9, 2, 0, 1, 1);

        markModeNormalBox = new QRadioButton(groupBox_3);
        markModeNormalBox->setObjectName(QString::fromUtf8("markModeNormalBox"));
        markModeNormalBox->setChecked(true);

        gridLayout_4->addWidget(markModeNormalBox, 0, 0, 1, 1);

        markModeExtendBox = new QRadioButton(groupBox_3);
        markModeExtendBox->setObjectName(QString::fromUtf8("markModeExtendBox"));

        gridLayout_4->addWidget(markModeExtendBox, 1, 0, 1, 1);


        verticalLayout_11->addWidget(groupBox_3);

        verticalSpacer_15 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_15);


        horizontalLayout_11->addLayout(verticalLayout_11);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        markAllBox = new QPushButton(tab_mark);
        markAllBox->setObjectName(QString::fromUtf8("markAllBox"));
        sizePolicy1.setHeightForWidth(markAllBox->sizePolicy().hasHeightForWidth());
        markAllBox->setSizePolicy(sizePolicy1);
        markAllBox->setMinimumSize(QSize(200, 28));

        verticalLayout_12->addWidget(markAllBox);

        markClearBox = new QPushButton(tab_mark);
        markClearBox->setObjectName(QString::fromUtf8("markClearBox"));
        sizePolicy1.setHeightForWidth(markClearBox->sizePolicy().hasHeightForWidth());
        markClearBox->setSizePolicy(sizePolicy1);
        markClearBox->setMinimumSize(QSize(200, 28));

        verticalLayout_12->addWidget(markClearBox);

        markClearAllBox = new QPushButton(tab_mark);
        markClearAllBox->setObjectName(QString::fromUtf8("markClearAllBox"));
        sizePolicy1.setHeightForWidth(markClearAllBox->sizePolicy().hasHeightForWidth());
        markClearAllBox->setSizePolicy(sizePolicy1);
        markClearAllBox->setMinimumSize(QSize(200, 28));

        verticalLayout_12->addWidget(markClearAllBox);

        markCloseBt = new QPushButton(tab_mark);
        markCloseBt->setObjectName(QString::fromUtf8("markCloseBt"));
        sizePolicy1.setHeightForWidth(markCloseBt->sizePolicy().hasHeightForWidth());
        markCloseBt->setSizePolicy(sizePolicy1);
        markCloseBt->setMinimumSize(QSize(200, 28));

        verticalLayout_12->addWidget(markCloseBt);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_9);


        horizontalLayout_11->addLayout(verticalLayout_12);

        findinfilesTab->addTab(tab_mark, QString());

        horizontalLayout_14->addWidget(findinfilesTab);

        FindWin->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(FindWin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        FindWin->setStatusBar(statusbar);
        QWidget::setTabOrder(findComboBox, findTextNext);
        QWidget::setTabOrder(findTextNext, findAllinCourrent);
        QWidget::setTabOrder(findAllinCourrent, findAllinAllOpen);
        QWidget::setTabOrder(findAllinAllOpen, findCloseBt);
        QWidget::setTabOrder(findCloseBt, findBackwardBox);
        QWidget::setTabOrder(findBackwardBox, findMatchWholeBox);
        QWidget::setTabOrder(findMatchWholeBox, findMatchCaseBox);
        QWidget::setTabOrder(findMatchCaseBox, findWrapBox);
        QWidget::setTabOrder(findWrapBox, findModeNormalBt);
        QWidget::setTabOrder(findModeNormalBt, findModeRegularBt);
        QWidget::setTabOrder(findModeRegularBt, replaceTextBox);
        QWidget::setTabOrder(replaceTextBox, replaceBackwardBox);
        QWidget::setTabOrder(replaceBackwardBox, replaceMatchWholeBox);
        QWidget::setTabOrder(replaceMatchWholeBox, replaceMatchCaseBox);
        QWidget::setTabOrder(replaceMatchCaseBox, replaceWrapBox);
        QWidget::setTabOrder(replaceWrapBox, replaceModeRegularBt);
        QWidget::setTabOrder(replaceModeRegularBt, replaceModeNormalBox);
        QWidget::setTabOrder(replaceModeNormalBox, replaceFindNextBox);
        QWidget::setTabOrder(replaceFindNextBox, replaceBt);
        QWidget::setTabOrder(replaceBt, replaceAllBt);
        QWidget::setTabOrder(replaceAllBt, replaceAllinAllOpenBt);
        QWidget::setTabOrder(replaceAllinAllOpenBt, replaceCloseBt);
        QWidget::setTabOrder(replaceCloseBt, destFindDir);
        QWidget::setTabOrder(destFindDir, selectDir);
        QWidget::setTabOrder(selectDir, dirFindWhat);
        QWidget::setTabOrder(dirFindWhat, dealFileType);
        QWidget::setTabOrder(dealFileType, fileType);
        QWidget::setTabOrder(fileType, dirFindMatchWholeBox);
        QWidget::setTabOrder(dirFindMatchWholeBox, dirFindMatchCaseBox);
        QWidget::setTabOrder(dirFindMatchCaseBox, dirFindModeRegularBt);
        QWidget::setTabOrder(dirFindModeRegularBt, dirFindModeNormalBox);
        QWidget::setTabOrder(dirFindModeNormalBox, skipChildDirs);
        QWidget::setTabOrder(skipChildDirs, skipHideFile);
        QWidget::setTabOrder(skipHideFile, skipBinary);
        QWidget::setTabOrder(skipBinary, skipFileMaxSize);
        QWidget::setTabOrder(skipFileMaxSize, maxFileSizeSpinBox);
        QWidget::setTabOrder(maxFileSizeSpinBox, dirFindAll);
        QWidget::setTabOrder(dirFindAll, dirReplaceAll);
        QWidget::setTabOrder(dirReplaceAll, dirClose);
        QWidget::setTabOrder(dirClose, markTextBox);
        QWidget::setTabOrder(markTextBox, markMatchWholeBox);
        QWidget::setTabOrder(markMatchWholeBox, markMatchCaseBox);
        QWidget::setTabOrder(markMatchCaseBox, markModeRegularBt);
        QWidget::setTabOrder(markModeRegularBt, markModeNormalBox);
        QWidget::setTabOrder(markModeNormalBox, markAllBox);
        QWidget::setTabOrder(markAllBox, markClearBox);
        QWidget::setTabOrder(markClearBox, markCloseBt);

        retranslateUi(FindWin);
        QObject::connect(findTextNext, SIGNAL(clicked()), FindWin, SLOT(slot_findNext()));
        QObject::connect(findCloseBt, SIGNAL(clicked()), FindWin, SLOT(close()));
        QObject::connect(findAllinAllOpen, SIGNAL(clicked()), FindWin, SLOT(slot_findAllInOpenDoc()));
        QObject::connect(findAllinCourrent, SIGNAL(clicked()), FindWin, SLOT(slot_findAllInCurDoc()));
        QObject::connect(replaceFindNextBox, SIGNAL(clicked()), FindWin, SLOT(slot_replaceFindNext()));
        QObject::connect(replaceCloseBt, SIGNAL(clicked()), FindWin, SLOT(close()));
        QObject::connect(replaceBt, SIGNAL(clicked()), FindWin, SLOT(slot_replace()));
        QObject::connect(replaceAllBt, SIGNAL(clicked()), FindWin, SLOT(slot_replaceAll()));
        QObject::connect(replaceAllinAllOpenBt, SIGNAL(clicked()), FindWin, SLOT(slot_replaceAllInOpenDoc()));
        QObject::connect(markAllBox, SIGNAL(clicked()), FindWin, SLOT(slot_markAll()));
        QObject::connect(markClearBox, SIGNAL(clicked()), FindWin, SLOT(slot_clearMark()));
        QObject::connect(markCloseBt, SIGNAL(clicked()), FindWin, SLOT(close()));
        QObject::connect(dirClose, SIGNAL(clicked()), FindWin, SLOT(close()));
        QObject::connect(selectDir, SIGNAL(clicked()), FindWin, SLOT(slot_dirSelectDest()));
        QObject::connect(dirFindAll, SIGNAL(clicked()), FindWin, SLOT(slot_dirFindAll()));
        QObject::connect(dirReplaceAll, SIGNAL(clicked()), FindWin, SLOT(slot_dirReplaceAll()));
        QObject::connect(countBt, SIGNAL(clicked()), FindWin, SLOT(slot_findCount()));
        QObject::connect(findTextPrev, SIGNAL(clicked()), FindWin, SLOT(slot_findPrev()));
        QObject::connect(markClearAllBox, SIGNAL(clicked()), FindWin, SLOT(slot_clearAllMark()));

        findinfilesTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FindWin);
    } // setupUi

    void retranslateUi(QMainWindow *FindWin)
    {
        FindWin->setWindowTitle(QCoreApplication::translate("FindWin", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("FindWin", "Find what :", nullptr));
        findBackwardBox->setText(QCoreApplication::translate("FindWin", "Backward direction", nullptr));
        findMatchWholeBox->setText(QCoreApplication::translate("FindWin", "Match whole word only", nullptr));
        findMatchCaseBox->setText(QCoreApplication::translate("FindWin", "Match case", nullptr));
        findWrapBox->setText(QCoreApplication::translate("FindWin", "Wrap around", nullptr));
        groupBox->setTitle(QCoreApplication::translate("FindWin", "Search Mode", nullptr));
        findModeRegularBt->setText(QCoreApplication::translate("FindWin", "Regular expression", nullptr));
        findModeNormalBt->setText(QCoreApplication::translate("FindWin", "Normal", nullptr));
        findModeExtendBt->setText(QCoreApplication::translate("FindWin", "Extend(\\n,\\r,\\t,\\0,\\x...)", nullptr));
        findTextNext->setText(QCoreApplication::translate("FindWin", "Find Next(F3)", nullptr));
#if QT_CONFIG(shortcut)
        findTextNext->setShortcut(QCoreApplication::translate("FindWin", "F3", nullptr));
#endif // QT_CONFIG(shortcut)
        findTextPrev->setText(QCoreApplication::translate("FindWin", "Find Prev(F4)", nullptr));
#if QT_CONFIG(shortcut)
        findTextPrev->setShortcut(QCoreApplication::translate("FindWin", "F4", nullptr));
#endif // QT_CONFIG(shortcut)
        countBt->setText(QCoreApplication::translate("FindWin", "Counter(T)", nullptr));
#if QT_CONFIG(shortcut)
        countBt->setShortcut(QCoreApplication::translate("FindWin", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        findAllinCourrent->setText(QCoreApplication::translate("FindWin", "Find All in Current \n"
" Document", nullptr));
        findAllinAllOpen->setText(QCoreApplication::translate("FindWin", "Find All in All Opened \n"
" Documents", nullptr));
        findClearBt->setText(QCoreApplication::translate("FindWin", "Clear Result", nullptr));
        findCloseBt->setText(QCoreApplication::translate("FindWin", "Close", nullptr));
        findinfilesTab->setTabText(findinfilesTab->indexOf(tab_find), QCoreApplication::translate("FindWin", "find", nullptr));
        label_3->setText(QCoreApplication::translate("FindWin", "Find what :", nullptr));
        label_4->setText(QCoreApplication::translate("FindWin", "Replace with :", nullptr));
        replaceBackwardBox->setText(QCoreApplication::translate("FindWin", "Backward direction", nullptr));
        replaceMatchWholeBox->setText(QCoreApplication::translate("FindWin", "Match whole word only", nullptr));
        replaceMatchCaseBox->setText(QCoreApplication::translate("FindWin", "Match case", nullptr));
        replaceWrapBox->setText(QCoreApplication::translate("FindWin", "Wrap around", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("FindWin", "Search Mode", nullptr));
        replaceModeNormalBox->setText(QCoreApplication::translate("FindWin", "Normal", nullptr));
        replaceModeRegularBt->setText(QCoreApplication::translate("FindWin", "Regular expression", nullptr));
        replaceModeExtendBox->setText(QCoreApplication::translate("FindWin", "Extend(\\n,\\r,\\t,\\0,\\x...)", nullptr));
        replaceFindNextBox->setText(QCoreApplication::translate("FindWin", "Find Next", nullptr));
        replaceBt->setText(QCoreApplication::translate("FindWin", "Replace", nullptr));
        replaceAllBt->setText(QCoreApplication::translate("FindWin", "Replace All", nullptr));
        replaceAllinAllOpenBt->setText(QCoreApplication::translate("FindWin", "Replace All in All Opened \n"
" Documents", nullptr));
        replaceCloseBt->setText(QCoreApplication::translate("FindWin", "Close", nullptr));
        findinfilesTab->setTabText(findinfilesTab->indexOf(tab_replace), QCoreApplication::translate("FindWin", "Replace", nullptr));
        label_8->setText(QCoreApplication::translate("FindWin", "Dest Dir :", nullptr));
        selectDir->setText(QCoreApplication::translate("FindWin", "Select", nullptr));
        label_5->setText(QCoreApplication::translate("FindWin", "Find what :", nullptr));
        fileType->setPlaceholderText(QCoreApplication::translate("FindWin", "*.c:*.cpp:*.h", nullptr));
        dealFileType->setText(QCoreApplication::translate("FindWin", "File Type :", nullptr));
        label_6->setText(QCoreApplication::translate("FindWin", "Replace with :", nullptr));
        skipDir->setText(QCoreApplication::translate("FindWin", "Skip Dir Name :", nullptr));
        skipDirNames->setPlaceholderText(QCoreApplication::translate("FindWin", "debug:Debug:.vs:.git:.svn", nullptr));
        dirFindMatchWholeBox->setText(QCoreApplication::translate("FindWin", "Match whole word only", nullptr));
        dirFindMatchCaseBox->setText(QCoreApplication::translate("FindWin", "Match case", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("FindWin", "Search Mode", nullptr));
        dirFindModeNormalBox->setText(QCoreApplication::translate("FindWin", "Normal", nullptr));
        dirFindModeRegularBt->setText(QCoreApplication::translate("FindWin", "Regular expression", nullptr));
        dirFindModeExtendBox->setText(QCoreApplication::translate("FindWin", "Extend(\\n,\\r,\\t,\\0,\\x...)", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("FindWin", "Options", nullptr));
        skipChildDirs->setText(QCoreApplication::translate("FindWin", "Skip child dirs", nullptr));
        skipHideFile->setText(QCoreApplication::translate("FindWin", "Skip hide file", nullptr));
        skipBinary->setText(QCoreApplication::translate("FindWin", "Skip binary file", nullptr));
        skipFileMaxSize->setText(QCoreApplication::translate("FindWin", "Skip Big file exceed", nullptr));
        label_9->setText(QCoreApplication::translate("FindWin", "MB", nullptr));
        dirFindAll->setText(QCoreApplication::translate("FindWin", "Find All", nullptr));
        dirReplaceAll->setText(QCoreApplication::translate("FindWin", "Replace In File", nullptr));
        clearBt->setText(QCoreApplication::translate("FindWin", "Clear Result", nullptr));
        dirClose->setText(QCoreApplication::translate("FindWin", "Close", nullptr));
        findinfilesTab->setTabText(findinfilesTab->indexOf(tab_dirfind), QCoreApplication::translate("FindWin", "Dir Find", nullptr));
        label_2->setText(QCoreApplication::translate("FindWin", "Mark What", nullptr));
        markMatchWholeBox->setText(QCoreApplication::translate("FindWin", "Match whole word only", nullptr));
        markMatchCaseBox->setText(QCoreApplication::translate("FindWin", "Match case", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("FindWin", "Search Mode", nullptr));
        markModeRegularBt->setText(QCoreApplication::translate("FindWin", "Regular expression", nullptr));
        markModeNormalBox->setText(QCoreApplication::translate("FindWin", "Normal", nullptr));
        markModeExtendBox->setText(QCoreApplication::translate("FindWin", "Extend(\\n,\\r,\\t,\\0,\\x...)", nullptr));
        markAllBox->setText(QCoreApplication::translate("FindWin", "Mark All", nullptr));
        markClearBox->setText(QCoreApplication::translate("FindWin", "Clear Mark", nullptr));
        markClearAllBox->setText(QCoreApplication::translate("FindWin", "Clear All", nullptr));
        markCloseBt->setText(QCoreApplication::translate("FindWin", "Close", nullptr));
        findinfilesTab->setTabText(findinfilesTab->indexOf(tab_mark), QCoreApplication::translate("FindWin", "Mark", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindWin: public Ui_FindWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDWIN_H
