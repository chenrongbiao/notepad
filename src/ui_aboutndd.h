/********************************************************************************
** Form generated from reading UI file 'aboutndd.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTNDD_H
#define UI_ABOUTNDD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutNddClass
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QPlainTextEdit *nddMsgText;
    QHBoxLayout *horizontalLayout;

    void setupUi(QWidget *AboutNddClass)
    {
        if (AboutNddClass->objectName().isEmpty())
            AboutNddClass->setObjectName(QString::fromUtf8("AboutNddClass"));
        AboutNddClass->resize(400, 114);
        AboutNddClass->setMaximumSize(QSize(400, 180));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/edit/global/ndd.ico"), QSize(), QIcon::Normal, QIcon::Off);
        AboutNddClass->setWindowIcon(icon);
        gridLayout = new QGridLayout(AboutNddClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(2, -1, 2, 2);
        label = new QLabel(AboutNddClass);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        nddMsgText = new QPlainTextEdit(AboutNddClass);
        nddMsgText->setObjectName(QString::fromUtf8("nddMsgText"));
        nddMsgText->setReadOnly(true);

        gridLayout->addWidget(nddMsgText, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(AboutNddClass);

        QMetaObject::connectSlotsByName(AboutNddClass);
    } // setupUi

    void retranslateUi(QWidget *AboutNddClass)
    {
        AboutNddClass->setWindowTitle(QCoreApplication::translate("AboutNddClass", "AboutNdd", nullptr));
        label->setText(QCoreApplication::translate("AboutNddClass", "<html><head/><body><p><a href=\"https://gitee.com/cxasm/notepad--\"><span style=\" font-size:10pt; text-decoration: underline; color:#0000ff;\">Click to get the latest version of notepad-- or source code</span></a></p></body></html>", nullptr));
        nddMsgText->setPlainText(QCoreApplication::translate("AboutNddClass", "opensoure web\357\274\232https://gitee.com/cxasm/notepad--", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutNddClass: public Ui_AboutNddClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTNDD_H
