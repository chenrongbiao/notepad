/********************************************************************************
** Form generated from reading UI file 'optionsview.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSVIEW_H
#define UI_OPTIONSVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OptionsView
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QListWidget *optionListWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *okBt;
    QStackedWidget *stackedWidget;

    void setupUi(QWidget *OptionsView)
    {
        if (OptionsView->objectName().isEmpty())
            OptionsView->setObjectName(QString::fromUtf8("OptionsView"));
        OptionsView->resize(761, 483);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/img/main.png"), QSize(), QIcon::Normal, QIcon::Off);
        OptionsView->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(OptionsView);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(OptionsView);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        optionListWidget = new QListWidget(groupBox);
        optionListWidget->setObjectName(QString::fromUtf8("optionListWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(optionListWidget->sizePolicy().hasHeightForWidth());
        optionListWidget->setSizePolicy(sizePolicy);
        optionListWidget->setMaximumSize(QSize(160, 16777215));

        verticalLayout->addWidget(optionListWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        okBt = new QPushButton(groupBox);
        okBt->setObjectName(QString::fromUtf8("okBt"));

        horizontalLayout_2->addWidget(okBt);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout->addWidget(groupBox);

        stackedWidget = new QStackedWidget(OptionsView);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(OptionsView);
        QObject::connect(okBt, SIGNAL(clicked()), OptionsView, SLOT(slot_ok()));

        stackedWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(OptionsView);
    } // setupUi

    void retranslateUi(QWidget *OptionsView)
    {
        OptionsView->setWindowTitle(QCoreApplication::translate("OptionsView", "OptionsView", nullptr));
        groupBox->setTitle(QCoreApplication::translate("OptionsView", "Options", nullptr));
        okBt->setText(QCoreApplication::translate("OptionsView", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OptionsView: public Ui_OptionsView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSVIEW_H
