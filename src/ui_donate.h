/********************************************************************************
** Form generated from reading UI file 'donate.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DONATE_H
#define UI_DONATE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DonateClass
{
public:
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *msg;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *DonateClass)
    {
        if (DonateClass->objectName().isEmpty())
            DonateClass->setObjectName(QString::fromUtf8("DonateClass"));
        DonateClass->setWindowModality(Qt::NonModal);
        DonateClass->resize(410, 374);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DonateClass->sizePolicy().hasHeightForWidth());
        DonateClass->setSizePolicy(sizePolicy);
        DonateClass->setMaximumSize(QSize(416, 479));
        DonateClass->setContextMenuPolicy(Qt::DefaultContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/edit/global/ndd.ico"), QSize(), QIcon::Normal, QIcon::Off);
        DonateClass->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(DonateClass);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(DonateClass);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 0));
        label->setStyleSheet(QString::fromUtf8("image: url(:/CmAdviser/Resources/6688.jpg);"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Resources/img/6688.png")));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        msg = new QLabel(DonateClass);
        msg->setObjectName(QString::fromUtf8("msg"));
        msg->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\345\256\213\344\275\223"));
        font.setPointSize(12);
        msg->setFont(font);
        msg->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(msg, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        retranslateUi(DonateClass);

        QMetaObject::connectSlotsByName(DonateClass);
    } // setupUi

    void retranslateUi(QWidget *DonateClass)
    {
        DonateClass->setWindowTitle(QCoreApplication::translate("DonateClass", "Donate Me", nullptr));
        label->setText(QString());
        msg->setText(QCoreApplication::translate("DonateClass", "<html><head/><body><p>Donation Software Development By WeChat </p><p>Busy living, no time to improve software</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DonateClass: public Ui_DonateClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DONATE_H
