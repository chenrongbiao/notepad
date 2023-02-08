/********************************************************************************
** Form generated from reading UI file 'findresultwin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDRESULTWIN_H
#define UI_FINDRESULTWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>
#include "mytreeview.h"

QT_BEGIN_NAMESPACE

class Ui_FindResultWin
{
public:
    QGridLayout *gridLayout;
    MyTreeView *resultTreeView;

    void setupUi(QWidget *FindResultWin)
    {
        if (FindResultWin->objectName().isEmpty())
            FindResultWin->setObjectName(QString::fromUtf8("FindResultWin"));
        FindResultWin->resize(895, 476);
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(10);
        FindResultWin->setFont(font);
        FindResultWin->setAutoFillBackground(false);
        gridLayout = new QGridLayout(FindResultWin);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        resultTreeView = new MyTreeView(FindResultWin);
        resultTreeView->setObjectName(QString::fromUtf8("resultTreeView"));
        resultTreeView->setFont(font);
        resultTreeView->setFrameShape(QFrame::Panel);
        resultTreeView->setLineWidth(1);
        resultTreeView->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        resultTreeView->setEditTriggers(QAbstractItemView::DoubleClicked);
        resultTreeView->setAnimated(true);
        resultTreeView->header()->setVisible(true);

        gridLayout->addWidget(resultTreeView, 0, 0, 1, 1);


        retranslateUi(FindResultWin);

        QMetaObject::connectSlotsByName(FindResultWin);
    } // setupUi

    void retranslateUi(QWidget *FindResultWin)
    {
        FindResultWin->setWindowTitle(QCoreApplication::translate("FindResultWin", "FindResultWin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindResultWin: public Ui_FindResultWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDRESULTWIN_H
