/********************************************************************************
** Form generated from reading UI file 'progresswin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRESSWIN_H
#define UI_PROGRESSWIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProgressWin
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *output;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *quitBt;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *ProgressWin)
    {
        if (ProgressWin->objectName().isEmpty())
            ProgressWin->setObjectName(QString::fromUtf8("ProgressWin"));
        ProgressWin->setWindowModality(Qt::WindowModal);
        ProgressWin->resize(553, 176);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/edit/global/ndd.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ProgressWin->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(ProgressWin);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        output = new QTextBrowser(ProgressWin);
        output->setObjectName(QString::fromUtf8("output"));
        output->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout->addWidget(output);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(ProgressWin);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        progressBar = new QProgressBar(ProgressWin);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        horizontalLayout->addWidget(progressBar);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        quitBt = new QPushButton(ProgressWin);
        quitBt->setObjectName(QString::fromUtf8("quitBt"));
        quitBt->setEnabled(true);

        horizontalLayout_2->addWidget(quitBt);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(ProgressWin);
        QObject::connect(quitBt, SIGNAL(clicked()), ProgressWin, SLOT(slot_quitBt()));

        QMetaObject::connectSlotsByName(ProgressWin);
    } // setupUi

    void retranslateUi(QWidget *ProgressWin)
    {
        ProgressWin->setWindowTitle(QCoreApplication::translate("ProgressWin", "work progress", nullptr));
        label->setText(QCoreApplication::translate("ProgressWin", "current progress", nullptr));
        quitBt->setText(QCoreApplication::translate("ProgressWin", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProgressWin: public Ui_ProgressWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRESSWIN_H
