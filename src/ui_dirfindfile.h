/********************************************************************************
** Form generated from reading UI file 'dirfindfile.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIRFINDFILE_H
#define UI_DIRFINDFILE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DirFindFile
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *fileNameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *findLeftRadioButton;
    QRadioButton *findRightRadioButton;
    QCheckBox *caseSensitiveCheckBox;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushPrevButton;
    QPushButton *pushNextButton;
    QPushButton *pushCloseButton;

    void setupUi(QWidget *DirFindFile)
    {
        if (DirFindFile->objectName().isEmpty())
            DirFindFile->setObjectName(QString::fromUtf8("DirFindFile"));
        DirFindFile->resize(389, 165);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DirFindFile->sizePolicy().hasHeightForWidth());
        DirFindFile->setSizePolicy(sizePolicy);
        DirFindFile->setMaximumSize(QSize(400, 200));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/img/main.png"), QSize(), QIcon::Normal, QIcon::Off);
        DirFindFile->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(DirFindFile);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(DirFindFile);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        fileNameLineEdit = new QLineEdit(groupBox);
        fileNameLineEdit->setObjectName(QString::fromUtf8("fileNameLineEdit"));

        horizontalLayout->addWidget(fileNameLineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        findLeftRadioButton = new QRadioButton(groupBox);
        findLeftRadioButton->setObjectName(QString::fromUtf8("findLeftRadioButton"));
        findLeftRadioButton->setChecked(true);

        horizontalLayout_2->addWidget(findLeftRadioButton);

        findRightRadioButton = new QRadioButton(groupBox);
        findRightRadioButton->setObjectName(QString::fromUtf8("findRightRadioButton"));

        horizontalLayout_2->addWidget(findRightRadioButton);

        caseSensitiveCheckBox = new QCheckBox(groupBox);
        caseSensitiveCheckBox->setObjectName(QString::fromUtf8("caseSensitiveCheckBox"));
        caseSensitiveCheckBox->setChecked(true);

        horizontalLayout_2->addWidget(caseSensitiveCheckBox);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushPrevButton = new QPushButton(DirFindFile);
        pushPrevButton->setObjectName(QString::fromUtf8("pushPrevButton"));

        horizontalLayout_3->addWidget(pushPrevButton);

        pushNextButton = new QPushButton(DirFindFile);
        pushNextButton->setObjectName(QString::fromUtf8("pushNextButton"));

        horizontalLayout_3->addWidget(pushNextButton);

        pushCloseButton = new QPushButton(DirFindFile);
        pushCloseButton->setObjectName(QString::fromUtf8("pushCloseButton"));

        horizontalLayout_3->addWidget(pushCloseButton);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(DirFindFile);
        QObject::connect(pushPrevButton, SIGNAL(clicked()), DirFindFile, SLOT(slot_findPrev()));
        QObject::connect(pushNextButton, SIGNAL(clicked()), DirFindFile, SLOT(slot_findNext()));
        QObject::connect(pushCloseButton, SIGNAL(clicked()), DirFindFile, SLOT(hide()));

        QMetaObject::connectSlotsByName(DirFindFile);
    } // setupUi

    void retranslateUi(QWidget *DirFindFile)
    {
        DirFindFile->setWindowTitle(QCoreApplication::translate("DirFindFile", "DirFindFile", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DirFindFile", "Find Options", nullptr));
        label->setText(QCoreApplication::translate("DirFindFile", "Find File Name", nullptr));
        findLeftRadioButton->setText(QCoreApplication::translate("DirFindFile", "find in left", nullptr));
        findRightRadioButton->setText(QCoreApplication::translate("DirFindFile", "find in right", nullptr));
        caseSensitiveCheckBox->setText(QCoreApplication::translate("DirFindFile", "case sensitive", nullptr));
        pushPrevButton->setText(QCoreApplication::translate("DirFindFile", "Find Prev", nullptr));
        pushNextButton->setText(QCoreApplication::translate("DirFindFile", "Find Next", nullptr));
        pushCloseButton->setText(QCoreApplication::translate("DirFindFile", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DirFindFile: public Ui_DirFindFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIRFINDFILE_H
