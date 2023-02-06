/********************************************************************************
** Form generated from reading UI file 'encodeconvert.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENCODECONVERT_H
#define UI_ENCODECONVERT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EncodeConvert
{
public:
    QVBoxLayout *verticalLayout_3;
    QTreeWidget *treeWidget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *codeToComboBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *extComboBox;
    QToolButton *toolButton;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *selectFileBt;
    QPushButton *startBt;
    QPushButton *closeBt;
    QSpacerItem *horizontalSpacer_2;
    QTextBrowser *logTextBrowser;

    void setupUi(QWidget *EncodeConvert)
    {
        if (EncodeConvert->objectName().isEmpty())
            EncodeConvert->setObjectName(QString::fromUtf8("EncodeConvert"));
        EncodeConvert->resize(969, 614);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/img/main.png"), QSize(), QIcon::Normal, QIcon::Off);
        EncodeConvert->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(EncodeConvert);
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(2, 2, 2, 2);
        treeWidget = new QTreeWidget(EncodeConvert);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        verticalLayout_3->addWidget(treeWidget);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 20);
        groupBox_2 = new QGroupBox(EncodeConvert);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        codeToComboBox = new QComboBox(groupBox_2);
        codeToComboBox->addItem(QString());
        codeToComboBox->addItem(QString());
        codeToComboBox->addItem(QString());
        codeToComboBox->addItem(QString());
        codeToComboBox->addItem(QString());
        codeToComboBox->setObjectName(QString::fromUtf8("codeToComboBox"));
        codeToComboBox->setMinimumSize(QSize(200, 0));

        horizontalLayout_2->addWidget(codeToComboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        extComboBox = new QComboBox(groupBox_2);
        extComboBox->addItem(QString());
        extComboBox->setObjectName(QString::fromUtf8("extComboBox"));
        extComboBox->setMinimumSize(QSize(150, 0));

        horizontalLayout->addWidget(extComboBox);

        toolButton = new QToolButton(groupBox_2);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        horizontalLayout->addWidget(toolButton);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(groupBox_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        selectFileBt = new QPushButton(EncodeConvert);
        selectFileBt->setObjectName(QString::fromUtf8("selectFileBt"));

        horizontalLayout_3->addWidget(selectFileBt);

        startBt = new QPushButton(EncodeConvert);
        startBt->setObjectName(QString::fromUtf8("startBt"));
        startBt->setAutoDefault(false);

        horizontalLayout_3->addWidget(startBt);

        closeBt = new QPushButton(EncodeConvert);
        closeBt->setObjectName(QString::fromUtf8("closeBt"));

        horizontalLayout_3->addWidget(closeBt);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalLayout_2->setStretch(0, 2);
        verticalLayout_2->setStretch(1, 1);

        horizontalLayout_4->addLayout(verticalLayout_2);

        logTextBrowser = new QTextBrowser(EncodeConvert);
        logTextBrowser->setObjectName(QString::fromUtf8("logTextBrowser"));

        horizontalLayout_4->addWidget(logTextBrowser);

        horizontalLayout_4->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalLayout_3->setStretch(0, 1);

        retranslateUi(EncodeConvert);
        QObject::connect(selectFileBt, SIGNAL(clicked()), EncodeConvert, SLOT(slot_selectFile()));
        QObject::connect(startBt, SIGNAL(clicked()), EncodeConvert, SLOT(slot_startConvert()));
        QObject::connect(closeBt, SIGNAL(clicked()), EncodeConvert, SLOT(close()));
        QObject::connect(toolButton, SIGNAL(clicked()), EncodeConvert, SLOT(slot_userDefineExt()));

        QMetaObject::connectSlotsByName(EncodeConvert);
    } // setupUi

    void retranslateUi(QWidget *EncodeConvert)
    {
        EncodeConvert->setWindowTitle(QCoreApplication::translate("EncodeConvert", "EncodeConvert", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("EncodeConvert", "convert result", nullptr));
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("EncodeConvert", "convert code", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("EncodeConvert", "file code", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("EncodeConvert", "file size", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("EncodeConvert", "filePath", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("EncodeConvert", "convert options", nullptr));
        label->setText(QCoreApplication::translate("EncodeConvert", "convert to code", nullptr));
        codeToComboBox->setItemText(0, QCoreApplication::translate("EncodeConvert", "UTF8", nullptr));
        codeToComboBox->setItemText(1, QCoreApplication::translate("EncodeConvert", "UTF8 BOM", nullptr));
        codeToComboBox->setItemText(2, QCoreApplication::translate("EncodeConvert", "UTF16-LE", nullptr));
        codeToComboBox->setItemText(3, QCoreApplication::translate("EncodeConvert", "UTF16-BE", nullptr));
        codeToComboBox->setItemText(4, QCoreApplication::translate("EncodeConvert", "GBK", nullptr));

        label_2->setText(QCoreApplication::translate("EncodeConvert", "deal file ext", nullptr));
        extComboBox->setItemText(0, QCoreApplication::translate("EncodeConvert", "all support file ext", nullptr));

#if QT_CONFIG(tooltip)
        toolButton->setToolTip(QCoreApplication::translate("EncodeConvert", "user defined", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton->setText(QCoreApplication::translate("EncodeConvert", "defined", nullptr));
        selectFileBt->setText(QCoreApplication::translate("EncodeConvert", "select dir", nullptr));
        startBt->setText(QCoreApplication::translate("EncodeConvert", "start", nullptr));
        closeBt->setText(QCoreApplication::translate("EncodeConvert", "close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EncodeConvert: public Ui_EncodeConvert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENCODECONVERT_H
