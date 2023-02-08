/********************************************************************************
** Form generated from reading UI file 'filelistview.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILELISTVIEW_H
#define UI_FILELISTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileListViewClass
{
public:
    QGridLayout *gridLayout;
    QListWidget *filelistWidget;

    void setupUi(QWidget *FileListViewClass)
    {
        if (FileListViewClass->objectName().isEmpty())
            FileListViewClass->setObjectName(QString::fromUtf8("FileListViewClass"));
        FileListViewClass->resize(550, 693);
        gridLayout = new QGridLayout(FileListViewClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(1);
        gridLayout->setVerticalSpacing(3);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        filelistWidget = new QListWidget(FileListViewClass);
        filelistWidget->setObjectName(QString::fromUtf8("filelistWidget"));

        gridLayout->addWidget(filelistWidget, 0, 0, 1, 1);


        retranslateUi(FileListViewClass);

        QMetaObject::connectSlotsByName(FileListViewClass);
    } // setupUi

    void retranslateUi(QWidget *FileListViewClass)
    {
        FileListViewClass->setWindowTitle(QCoreApplication::translate("FileListViewClass", "FileListView", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileListViewClass: public Ui_FileListViewClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILELISTVIEW_H
