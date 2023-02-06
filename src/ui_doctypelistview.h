/********************************************************************************
** Form generated from reading UI file 'doctypelistview.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTYPELISTVIEW_H
#define UI_DOCTYPELISTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DocTypeListView
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QListWidget *extListWidget;
    QListWidget *typListWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QToolButton *subToolButton;
    QToolButton *addToolButton;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_3;
    QListWidget *customListWidget;

    void setupUi(QWidget *DocTypeListView)
    {
        if (DocTypeListView->objectName().isEmpty())
            DocTypeListView->setObjectName(QString::fromUtf8("DocTypeListView"));
        DocTypeListView->resize(564, 437);
        verticalLayout_2 = new QVBoxLayout(DocTypeListView);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        groupBox = new QGroupBox(DocTypeListView);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        extListWidget = new QListWidget(groupBox);
        extListWidget->setObjectName(QString::fromUtf8("extListWidget"));

        horizontalLayout->addWidget(extListWidget);

        typListWidget = new QListWidget(groupBox);
        typListWidget->setObjectName(QString::fromUtf8("typListWidget"));

        horizontalLayout->addWidget(typListWidget);


        horizontalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_4->addWidget(groupBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        subToolButton = new QToolButton(DocTypeListView);
        subToolButton->setObjectName(QString::fromUtf8("subToolButton"));

        verticalLayout->addWidget(subToolButton);

        addToolButton = new QToolButton(DocTypeListView);
        addToolButton->setObjectName(QString::fromUtf8("addToolButton"));

        verticalLayout->addWidget(addToolButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout_4->addLayout(verticalLayout);

        groupBox_2 = new QGroupBox(DocTypeListView);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_2);
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(2, 2, 2, 2);
        customListWidget = new QListWidget(groupBox_2);
        customListWidget->setObjectName(QString::fromUtf8("customListWidget"));

        horizontalLayout_3->addWidget(customListWidget);


        horizontalLayout_4->addWidget(groupBox_2);

        horizontalLayout_4->setStretch(0, 2);
        horizontalLayout_4->setStretch(2, 1);

        verticalLayout_2->addLayout(horizontalLayout_4);


        retranslateUi(DocTypeListView);
        QObject::connect(subToolButton, SIGNAL(clicked()), DocTypeListView, SLOT(slot_sub()));
        QObject::connect(addToolButton, SIGNAL(clicked()), DocTypeListView, SLOT(slot_add()));

        QMetaObject::connectSlotsByName(DocTypeListView);
    } // setupUi

    void retranslateUi(QWidget *DocTypeListView)
    {
        DocTypeListView->setWindowTitle(QCoreApplication::translate("DocTypeListView", "DocTypeListView", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DocTypeListView", "Support file ", nullptr));
        subToolButton->setText(QCoreApplication::translate("DocTypeListView", "->", nullptr));
        addToolButton->setText(QCoreApplication::translate("DocTypeListView", "<-", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("DocTypeListView", "Custom extension", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DocTypeListView: public Ui_DocTypeListView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTYPELISTVIEW_H
