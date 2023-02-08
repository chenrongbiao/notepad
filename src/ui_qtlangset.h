/********************************************************************************
** Form generated from reading UI file 'qtlangset.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTLANGSET_H
#define UI_QTLANGSET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtLangSetClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_10;
    QComboBox *mainThemesCbox;
    QLabel *curThemes;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *langListWidget;
    QLabel *label_5;
    QListWidget *userLangListWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QListWidget *styleListWidget;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QLabel *label_fc;
    QToolButton *toolButton;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QLabel *label_bc;
    QToolButton *toolButton1;
    QGroupBox *useGlobalColor;
    QVBoxLayout *verticalLayout_9;
    QCheckBox *useGbFc;
    QCheckBox *useGbBc;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_11;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QFontComboBox *fontComboBox;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *boldCheckBox;
    QCheckBox *italicCheckBox;
    QCheckBox *underlineCheckBox;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QSpinBox *fontSpinBox;
    QStackedWidget *stackedWidget;
    QWidget *page_normal;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QPlainTextEdit *keywordTe;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QComboBox *motherLangCb;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLineEdit *extFileType;
    QWidget *page_global;
    QGridLayout *gridLayout_2;
    QGroupBox *useGlobalFont;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *useGbFont;
    QCheckBox *useGbFontSize;
    QCheckBox *useGbFontBold;
    QCheckBox *useGbFontItalic;
    QCheckBox *useGbFontUnderline;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *reset;
    QPushButton *saveBt;
    QPushButton *cancelBt;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtLangSetClass)
    {
        if (QtLangSetClass->objectName().isEmpty())
            QtLangSetClass->setObjectName(QString::fromUtf8("QtLangSetClass"));
        QtLangSetClass->resize(1029, 660);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/edit/global/ndd.ico"), QSize(), QIcon::Normal, QIcon::Off);
        QtLangSetClass->setWindowIcon(icon);
        centralWidget = new QWidget(QtLangSetClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_13 = new QVBoxLayout(centralWidget);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_8->addWidget(label_10);

        mainThemesCbox = new QComboBox(centralWidget);
        mainThemesCbox->addItem(QString());
        mainThemesCbox->addItem(QString());
        mainThemesCbox->addItem(QString());
        mainThemesCbox->addItem(QString());
        mainThemesCbox->addItem(QString());
        mainThemesCbox->addItem(QString());
        mainThemesCbox->addItem(QString());
        mainThemesCbox->addItem(QString());
        mainThemesCbox->addItem(QString());
        mainThemesCbox->addItem(QString());
        mainThemesCbox->addItem(QString());
        mainThemesCbox->addItem(QString());
        mainThemesCbox->addItem(QString());
        mainThemesCbox->addItem(QString());
        mainThemesCbox->addItem(QString());
        mainThemesCbox->addItem(QString());
        mainThemesCbox->addItem(QString());
        mainThemesCbox->addItem(QString());
        mainThemesCbox->setObjectName(QString::fromUtf8("mainThemesCbox"));
        mainThemesCbox->setMinimumSize(QSize(200, 0));

        horizontalLayout_8->addWidget(mainThemesCbox);

        curThemes = new QLabel(centralWidget);
        curThemes->setObjectName(QString::fromUtf8("curThemes"));

        horizontalLayout_8->addWidget(curThemes);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);


        verticalLayout_13->addLayout(horizontalLayout_8);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        langListWidget = new QListWidget(centralWidget);
        langListWidget->setObjectName(QString::fromUtf8("langListWidget"));
        langListWidget->setMinimumSize(QSize(100, 0));
        langListWidget->setMaximumSize(QSize(220, 16777215));

        verticalLayout->addWidget(langListWidget);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        userLangListWidget = new QListWidget(centralWidget);
        userLangListWidget->setObjectName(QString::fromUtf8("userLangListWidget"));
        userLangListWidget->setMinimumSize(QSize(100, 0));
        userLangListWidget->setMaximumSize(QSize(220, 150));

        verticalLayout->addWidget(userLangListWidget);


        horizontalLayout_11->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        styleListWidget = new QListWidget(centralWidget);
        styleListWidget->setObjectName(QString::fromUtf8("styleListWidget"));
        styleListWidget->setMinimumSize(QSize(250, 0));
        styleListWidget->setMaximumSize(QSize(500, 16777215));

        verticalLayout_2->addWidget(styleListWidget);


        horizontalLayout_11->addLayout(verticalLayout_2);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_6 = new QVBoxLayout(groupBox_2);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_6->addWidget(label_3);

        label_fc = new QLabel(groupBox_2);
        label_fc->setObjectName(QString::fromUtf8("label_fc"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_fc->sizePolicy().hasHeightForWidth());
        label_fc->setSizePolicy(sizePolicy);
        label_fc->setMinimumSize(QSize(32, 32));

        horizontalLayout_6->addWidget(label_fc);

        toolButton = new QToolButton(groupBox_2);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        horizontalLayout_6->addWidget(toolButton);


        verticalLayout_6->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_7->addWidget(label_4);

        label_bc = new QLabel(groupBox_2);
        label_bc->setObjectName(QString::fromUtf8("label_bc"));
        sizePolicy.setHeightForWidth(label_bc->sizePolicy().hasHeightForWidth());
        label_bc->setSizePolicy(sizePolicy);
        label_bc->setMinimumSize(QSize(32, 32));

        horizontalLayout_7->addWidget(label_bc);

        toolButton1 = new QToolButton(groupBox_2);
        toolButton1->setObjectName(QString::fromUtf8("toolButton1"));

        horizontalLayout_7->addWidget(toolButton1);


        verticalLayout_6->addLayout(horizontalLayout_7);


        verticalLayout_10->addWidget(groupBox_2);

        useGlobalColor = new QGroupBox(centralWidget);
        useGlobalColor->setObjectName(QString::fromUtf8("useGlobalColor"));
        verticalLayout_9 = new QVBoxLayout(useGlobalColor);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        useGbFc = new QCheckBox(useGlobalColor);
        useGbFc->setObjectName(QString::fromUtf8("useGbFc"));

        verticalLayout_9->addWidget(useGbFc);

        useGbBc = new QCheckBox(useGlobalColor);
        useGbBc->setObjectName(QString::fromUtf8("useGbBc"));
        useGbBc->setEnabled(true);

        verticalLayout_9->addWidget(useGbBc);


        verticalLayout_10->addWidget(useGlobalColor);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer);


        horizontalLayout_9->addLayout(verticalLayout_10);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_8 = new QVBoxLayout(groupBox_3);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_2->addWidget(label_7);

        fontComboBox = new QFontComboBox(groupBox_3);
        fontComboBox->setObjectName(QString::fromUtf8("fontComboBox"));

        horizontalLayout_2->addWidget(fontComboBox);


        verticalLayout_8->addLayout(horizontalLayout_2);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        boldCheckBox = new QCheckBox(groupBox_3);
        boldCheckBox->setObjectName(QString::fromUtf8("boldCheckBox"));

        verticalLayout_3->addWidget(boldCheckBox);

        italicCheckBox = new QCheckBox(groupBox_3);
        italicCheckBox->setObjectName(QString::fromUtf8("italicCheckBox"));

        verticalLayout_3->addWidget(italicCheckBox);

        underlineCheckBox = new QCheckBox(groupBox_3);
        underlineCheckBox->setObjectName(QString::fromUtf8("underlineCheckBox"));

        verticalLayout_3->addWidget(underlineCheckBox);


        horizontalLayout_10->addLayout(verticalLayout_3);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_3->addWidget(label_8);

        fontSpinBox = new QSpinBox(groupBox_3);
        fontSpinBox->setObjectName(QString::fromUtf8("fontSpinBox"));
        fontSpinBox->setSingleStep(1);

        horizontalLayout_3->addWidget(fontSpinBox);


        verticalLayout_7->addLayout(horizontalLayout_3);


        horizontalLayout_10->addLayout(verticalLayout_7);


        verticalLayout_8->addLayout(horizontalLayout_10);


        verticalLayout_11->addWidget(groupBox_3);

        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page_normal = new QWidget();
        page_normal->setObjectName(QString::fromUtf8("page_normal"));
        gridLayout = new QGridLayout(page_normal);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, -1, 0, -1);
        groupBox = new QGroupBox(page_normal);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, -1, 0, -1);
        keywordTe = new QPlainTextEdit(groupBox);
        keywordTe->setObjectName(QString::fromUtf8("keywordTe"));
        keywordTe->setReadOnly(true);

        verticalLayout_4->addWidget(keywordTe);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);

        motherLangCb = new QComboBox(groupBox);
        motherLangCb->addItem(QString());
        motherLangCb->addItem(QString());
        motherLangCb->setObjectName(QString::fromUtf8("motherLangCb"));
        motherLangCb->setEnabled(false);

        horizontalLayout->addWidget(motherLangCb);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_5->addWidget(label_9);

        extFileType = new QLineEdit(groupBox);
        extFileType->setObjectName(QString::fromUtf8("extFileType"));
        extFileType->setReadOnly(true);

        horizontalLayout_5->addWidget(extFileType);


        verticalLayout_4->addLayout(horizontalLayout_5);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        stackedWidget->addWidget(page_normal);
        page_global = new QWidget();
        page_global->setObjectName(QString::fromUtf8("page_global"));
        gridLayout_2 = new QGridLayout(page_global);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, -1, 0, -1);
        useGlobalFont = new QGroupBox(page_global);
        useGlobalFont->setObjectName(QString::fromUtf8("useGlobalFont"));
        verticalLayout_5 = new QVBoxLayout(useGlobalFont);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        useGbFont = new QCheckBox(useGlobalFont);
        useGbFont->setObjectName(QString::fromUtf8("useGbFont"));

        verticalLayout_5->addWidget(useGbFont);

        useGbFontSize = new QCheckBox(useGlobalFont);
        useGbFontSize->setObjectName(QString::fromUtf8("useGbFontSize"));

        verticalLayout_5->addWidget(useGbFontSize);

        useGbFontBold = new QCheckBox(useGlobalFont);
        useGbFontBold->setObjectName(QString::fromUtf8("useGbFontBold"));

        verticalLayout_5->addWidget(useGbFontBold);

        useGbFontItalic = new QCheckBox(useGlobalFont);
        useGbFontItalic->setObjectName(QString::fromUtf8("useGbFontItalic"));

        verticalLayout_5->addWidget(useGbFontItalic);

        useGbFontUnderline = new QCheckBox(useGlobalFont);
        useGbFontUnderline->setObjectName(QString::fromUtf8("useGbFontUnderline"));

        verticalLayout_5->addWidget(useGbFontUnderline);


        gridLayout_2->addWidget(useGlobalFont, 0, 0, 1, 1);

        stackedWidget->addWidget(page_global);

        verticalLayout_11->addWidget(stackedWidget);


        horizontalLayout_9->addLayout(verticalLayout_11);


        verticalLayout_12->addLayout(horizontalLayout_9);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        reset = new QPushButton(centralWidget);
        reset->setObjectName(QString::fromUtf8("reset"));

        horizontalLayout_4->addWidget(reset);

        saveBt = new QPushButton(centralWidget);
        saveBt->setObjectName(QString::fromUtf8("saveBt"));

        horizontalLayout_4->addWidget(saveBt);

        cancelBt = new QPushButton(centralWidget);
        cancelBt->setObjectName(QString::fromUtf8("cancelBt"));

        horizontalLayout_4->addWidget(cancelBt);


        verticalLayout_12->addLayout(horizontalLayout_4);


        horizontalLayout_11->addLayout(verticalLayout_12);


        verticalLayout_13->addLayout(horizontalLayout_11);

        QtLangSetClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtLangSetClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1029, 23));
        QtLangSetClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtLangSetClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QtLangSetClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtLangSetClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtLangSetClass->setStatusBar(statusBar);

        retranslateUi(QtLangSetClass);
        QObject::connect(cancelBt, SIGNAL(clicked()), QtLangSetClass, SLOT(close()));
        QObject::connect(saveBt, SIGNAL(clicked()), QtLangSetClass, SLOT(slot_saveClick()));
        QObject::connect(toolButton, SIGNAL(clicked()), QtLangSetClass, SLOT(slot_changeFgColor()));
        QObject::connect(reset, SIGNAL(clicked()), QtLangSetClass, SLOT(slot_reset()));
        QObject::connect(useGbFc, SIGNAL(clicked(bool)), QtLangSetClass, SLOT(slot_useAlobalFgColor(bool)));
        QObject::connect(useGbFont, SIGNAL(clicked(bool)), QtLangSetClass, SLOT(slot_useAlobalFont(bool)));
        QObject::connect(useGbFontBold, SIGNAL(clicked(bool)), QtLangSetClass, SLOT(slot_useAlobalFontBold(bool)));
        QObject::connect(useGbFontItalic, SIGNAL(clicked(bool)), QtLangSetClass, SLOT(slot_useAlobalFontItalic(bool)));
        QObject::connect(useGbFontUnderline, SIGNAL(clicked(bool)), QtLangSetClass, SLOT(slot_useAlobalFontUnderline(bool)));
        QObject::connect(useGbFontSize, SIGNAL(clicked(bool)), QtLangSetClass, SLOT(slot_useAlobalFontSize(bool)));
        QObject::connect(useGbBc, SIGNAL(clicked(bool)), QtLangSetClass, SLOT(slot_useAlobalBkColor(bool)));
        QObject::connect(toolButton1, SIGNAL(clicked()), QtLangSetClass, SLOT(slot_changeBkColor()));
        QObject::connect(mainThemesCbox, SIGNAL(currentIndexChanged(int)), QtLangSetClass, SLOT(on_themesChange(int)));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QtLangSetClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtLangSetClass)
    {
        QtLangSetClass->setWindowTitle(QCoreApplication::translate("QtLangSetClass", "QtLangSet", nullptr));
        label_10->setText(QCoreApplication::translate("QtLangSetClass", "Select Main:", nullptr));
        mainThemesCbox->setItemText(0, QCoreApplication::translate("QtLangSetClass", "Default(stylers.xml)", nullptr));
        mainThemesCbox->setItemText(1, QCoreApplication::translate("QtLangSetClass", "Bespin", nullptr));
        mainThemesCbox->setItemText(2, QCoreApplication::translate("QtLangSetClass", "Black board", nullptr));
        mainThemesCbox->setItemText(3, QCoreApplication::translate("QtLangSetClass", "Blue Light", nullptr));
        mainThemesCbox->setItemText(4, QCoreApplication::translate("QtLangSetClass", "Choco", nullptr));
        mainThemesCbox->setItemText(5, QCoreApplication::translate("QtLangSetClass", "DansLeRuSH-Dark", nullptr));
        mainThemesCbox->setItemText(6, QCoreApplication::translate("QtLangSetClass", "Deep Black", nullptr));
        mainThemesCbox->setItemText(7, QCoreApplication::translate("QtLangSetClass", "Lavender", nullptr));
        mainThemesCbox->setItemText(8, QCoreApplication::translate("QtLangSetClass", "HotFudgeSundae", nullptr));
        mainThemesCbox->setItemText(9, QCoreApplication::translate("QtLangSetClass", "Misty Rose", nullptr));
        mainThemesCbox->setItemText(10, QCoreApplication::translate("QtLangSetClass", "Mono Industrial", nullptr));
        mainThemesCbox->setItemText(11, QCoreApplication::translate("QtLangSetClass", "Monokai", nullptr));
        mainThemesCbox->setItemText(12, QCoreApplication::translate("QtLangSetClass", "Obsidian", nullptr));
        mainThemesCbox->setItemText(13, QCoreApplication::translate("QtLangSetClass", "Plastic Code Wrap", nullptr));
        mainThemesCbox->setItemText(14, QCoreApplication::translate("QtLangSetClass", "Ruby Blue", nullptr));
        mainThemesCbox->setItemText(15, QCoreApplication::translate("QtLangSetClass", "Twilight", nullptr));
        mainThemesCbox->setItemText(16, QCoreApplication::translate("QtLangSetClass", "Vibrant Ink", nullptr));
        mainThemesCbox->setItemText(17, QCoreApplication::translate("QtLangSetClass", "Yellow Rice", nullptr));

        curThemes->setText(QCoreApplication::translate("QtLangSetClass", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("QtLangSetClass", "Language", nullptr));
        label_5->setText(QCoreApplication::translate("QtLangSetClass", "User Define Language", nullptr));
        label_2->setText(QCoreApplication::translate("QtLangSetClass", "Style", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QtLangSetClass", "Color", nullptr));
        label_3->setText(QCoreApplication::translate("QtLangSetClass", "Foreground:", nullptr));
        label_fc->setText(QCoreApplication::translate("QtLangSetClass", "TextLabel", nullptr));
        toolButton->setText(QCoreApplication::translate("QtLangSetClass", "Select", nullptr));
        label_4->setText(QCoreApplication::translate("QtLangSetClass", "background:", nullptr));
        label_bc->setText(QCoreApplication::translate("QtLangSetClass", "Same As Theme", nullptr));
        toolButton1->setText(QCoreApplication::translate("QtLangSetClass", "Select", nullptr));
        useGlobalColor->setTitle(QCoreApplication::translate("QtLangSetClass", "Use Global Color", nullptr));
        useGbFc->setText(QCoreApplication::translate("QtLangSetClass", "Use Global Foreground Color", nullptr));
        useGbBc->setText(QCoreApplication::translate("QtLangSetClass", "Use Global Background Color", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QtLangSetClass", "Font", nullptr));
        label_7->setText(QCoreApplication::translate("QtLangSetClass", "Name:", nullptr));
        boldCheckBox->setText(QCoreApplication::translate("QtLangSetClass", "Bold", nullptr));
        italicCheckBox->setText(QCoreApplication::translate("QtLangSetClass", "Italic", nullptr));
        underlineCheckBox->setText(QCoreApplication::translate("QtLangSetClass", "Underline", nullptr));
        label_8->setText(QCoreApplication::translate("QtLangSetClass", "Font Size:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QtLangSetClass", "Keyword And Mother ", nullptr));
        label_6->setText(QCoreApplication::translate("QtLangSetClass", "Mother Language:", nullptr));
        motherLangCb->setItemText(0, QCoreApplication::translate("QtLangSetClass", "None", nullptr));
        motherLangCb->setItemText(1, QCoreApplication::translate("QtLangSetClass", "Cpp", nullptr));

        label_9->setText(QCoreApplication::translate("QtLangSetClass", "Ext File Type:", nullptr));
        useGlobalFont->setTitle(QCoreApplication::translate("QtLangSetClass", "Global Style Font", nullptr));
        useGbFont->setText(QCoreApplication::translate("QtLangSetClass", "Use Global Font", nullptr));
        useGbFontSize->setText(QCoreApplication::translate("QtLangSetClass", "Use Global FontSize", nullptr));
        useGbFontBold->setText(QCoreApplication::translate("QtLangSetClass", "Use Global Bold Font", nullptr));
        useGbFontItalic->setText(QCoreApplication::translate("QtLangSetClass", "Use Global Italic Font", nullptr));
        useGbFontUnderline->setText(QCoreApplication::translate("QtLangSetClass", "Use Global Underline Font", nullptr));
        reset->setText(QCoreApplication::translate("QtLangSetClass", "reset", nullptr));
        saveBt->setText(QCoreApplication::translate("QtLangSetClass", "Save", nullptr));
        cancelBt->setText(QCoreApplication::translate("QtLangSetClass", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtLangSetClass: public Ui_QtLangSetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTLANGSET_H
