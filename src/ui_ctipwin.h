/********************************************************************************
** Form generated from reading UI file 'ctipwin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTIPWIN_H
#define UI_CTIPWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CTipWin
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelInfo;

    void setupUi(QWidget *CTipWin)
    {
        if (CTipWin->objectName().isEmpty())
            CTipWin->setObjectName(QString::fromUtf8("CTipWin"));
        CTipWin->resize(295, 69);
        CTipWin->setMaximumSize(QSize(16777215, 80));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setBold(true);
        font.setWeight(75);
        CTipWin->setFont(font);
        CTipWin->setContextMenuPolicy(Qt::DefaultContextMenu);
        verticalLayout = new QVBoxLayout(CTipWin);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        labelInfo = new QLabel(CTipWin);
        labelInfo->setObjectName(QString::fromUtf8("labelInfo"));
        labelInfo->setEnabled(false);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        labelInfo->setFont(font1);

        verticalLayout->addWidget(labelInfo);


        retranslateUi(CTipWin);

        QMetaObject::connectSlotsByName(CTipWin);
    } // setupUi

    void retranslateUi(QWidget *CTipWin)
    {
        CTipWin->setWindowTitle(QCoreApplication::translate("CTipWin", "Msg Tips", nullptr));
        labelInfo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CTipWin: public Ui_CTipWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTIPWIN_H
