/********************************************************************************
** Form generated from reading UI file 'functionlistview.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCTIONLISTVIEW_H
#define UI_FUNCTIONLISTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FunctionListViewClass
{
public:
    QGridLayout *gridLayout;
    QTreeView *functionTreeView;

    void setupUi(QWidget *FunctionListViewClass)
    {
        if (FunctionListViewClass->objectName().isEmpty())
            FunctionListViewClass->setObjectName(QString::fromUtf8("FunctionListViewClass"));
        FunctionListViewClass->resize(727, 577);
        gridLayout = new QGridLayout(FunctionListViewClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(1);
        gridLayout->setVerticalSpacing(3);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        functionTreeView = new QTreeView(FunctionListViewClass);
        functionTreeView->setObjectName(QString::fromUtf8("functionTreeView"));
        functionTreeView->setEnabled(true);
        functionTreeView->setTabKeyNavigation(false);
        functionTreeView->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        functionTreeView->setUniformRowHeights(true);
        functionTreeView->setAnimated(true);
        functionTreeView->setHeaderHidden(true);
        functionTreeView->setExpandsOnDoubleClick(false);

        gridLayout->addWidget(functionTreeView, 0, 0, 1, 1);


        retranslateUi(FunctionListViewClass);
        QObject::connect(functionTreeView, SIGNAL(doubleClicked(QModelIndex)), FunctionListViewClass, SLOT(slot_funcListTreeViewDoubleClicked(QModelIndex)));

        QMetaObject::connectSlotsByName(FunctionListViewClass);
    } // setupUi

    void retranslateUi(QWidget *FunctionListViewClass)
    {
        FunctionListViewClass->setWindowTitle(QCoreApplication::translate("FunctionListViewClass", "FunctionListView", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FunctionListViewClass: public Ui_FunctionListViewClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTIONLISTVIEW_H
