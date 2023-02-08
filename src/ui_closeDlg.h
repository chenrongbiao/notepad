/********************************************************************************
** Form generated from reading UI file 'closeDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOSEDLG_H
#define UI_CLOSEDLG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_closeDlg
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QCheckBox *leftBox;
    QCheckBox *rightBox;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *saveBt;
    QPushButton *discardBt;
    QPushButton *cancelBt;

    void setupUi(QWidget *closeDlg)
    {
        if (closeDlg->objectName().isEmpty())
            closeDlg->setObjectName(QString::fromUtf8("closeDlg"));
        closeDlg->resize(475, 164);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(closeDlg->sizePolicy().hasHeightForWidth());
        closeDlg->setSizePolicy(sizePolicy);
        closeDlg->setMaximumSize(QSize(475, 164));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/img/main.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeDlg->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(closeDlg);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(50, 15, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(closeDlg);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        leftBox = new QCheckBox(closeDlg);
        leftBox->setObjectName(QString::fromUtf8("leftBox"));
        leftBox->setChecked(true);

        verticalLayout->addWidget(leftBox);

        rightBox = new QCheckBox(closeDlg);
        rightBox->setObjectName(QString::fromUtf8("rightBox"));
        rightBox->setChecked(true);

        verticalLayout->addWidget(rightBox);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(17, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        saveBt = new QPushButton(closeDlg);
        saveBt->setObjectName(QString::fromUtf8("saveBt"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(saveBt->sizePolicy().hasHeightForWidth());
        saveBt->setSizePolicy(sizePolicy1);
        saveBt->setMinimumSize(QSize(100, 30));

        horizontalLayout->addWidget(saveBt);

        discardBt = new QPushButton(closeDlg);
        discardBt->setObjectName(QString::fromUtf8("discardBt"));
        sizePolicy1.setHeightForWidth(discardBt->sizePolicy().hasHeightForWidth());
        discardBt->setSizePolicy(sizePolicy1);
        discardBt->setMinimumSize(QSize(100, 30));

        horizontalLayout->addWidget(discardBt);

        cancelBt = new QPushButton(closeDlg);
        cancelBt->setObjectName(QString::fromUtf8("cancelBt"));
        sizePolicy.setHeightForWidth(cancelBt->sizePolicy().hasHeightForWidth());
        cancelBt->setSizePolicy(sizePolicy);
        cancelBt->setMinimumSize(QSize(100, 30));

        horizontalLayout->addWidget(cancelBt);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(closeDlg);
        QObject::connect(saveBt, SIGNAL(clicked()), closeDlg, SLOT(save()));
        QObject::connect(discardBt, SIGNAL(clicked()), closeDlg, SLOT(discard()));
        QObject::connect(cancelBt, SIGNAL(clicked()), closeDlg, SLOT(cancel()));

        QMetaObject::connectSlotsByName(closeDlg);
    } // setupUi

    void retranslateUi(QWidget *closeDlg)
    {
        closeDlg->setWindowTitle(QCoreApplication::translate("closeDlg", "closeDlg", nullptr));
        label->setText(QCoreApplication::translate("closeDlg", "Do you want to save your changes?", nullptr));
        leftBox->setText(QCoreApplication::translate("closeDlg", "save left document ?", nullptr));
        rightBox->setText(QCoreApplication::translate("closeDlg", "save right document ?", nullptr));
        saveBt->setText(QCoreApplication::translate("closeDlg", "save selected", nullptr));
        discardBt->setText(QCoreApplication::translate("closeDlg", "discard", nullptr));
        cancelBt->setText(QCoreApplication::translate("closeDlg", "cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class closeDlg: public Ui_closeDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOSEDLG_H
