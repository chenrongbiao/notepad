/********************************************************************************
** Form generated from reading UI file 'gotolinewin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOTOLINEWIN_H
#define UI_GOTOLINEWIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GoToLineWin
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditNum;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *GoToLineWin)
    {
        if (GoToLineWin->objectName().isEmpty())
            GoToLineWin->setObjectName(QString::fromUtf8("GoToLineWin"));
        GoToLineWin->resize(253, 104);
        GoToLineWin->setMaximumSize(QSize(260, 140));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/edit/global/notebook.png"), QSize(), QIcon::Normal, QIcon::Off);
        GoToLineWin->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(GoToLineWin);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 0, 3, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(GoToLineWin);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEditNum = new QLineEdit(GoToLineWin);
        lineEditNum->setObjectName(QString::fromUtf8("lineEditNum"));
        lineEditNum->setMaxLength(10);

        horizontalLayout->addWidget(lineEditNum);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radioButton = new QRadioButton(GoToLineWin);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setChecked(true);

        horizontalLayout_2->addWidget(radioButton);

        radioButton_2 = new QRadioButton(GoToLineWin);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout_2->addWidget(radioButton_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton = new QPushButton(GoToLineWin);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(GoToLineWin);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(GoToLineWin);
        QObject::connect(pushButton_2, SIGNAL(clicked()), GoToLineWin, SLOT(close()));
        QObject::connect(pushButton, SIGNAL(clicked()), GoToLineWin, SLOT(slot_ok()));
        QObject::connect(lineEditNum, SIGNAL(editingFinished()), GoToLineWin, SLOT(slot_ok()));

        QMetaObject::connectSlotsByName(GoToLineWin);
    } // setupUi

    void retranslateUi(QWidget *GoToLineWin)
    {
        GoToLineWin->setWindowTitle(QCoreApplication::translate("GoToLineWin", "GoToLineWin", nullptr));
        label->setText(QCoreApplication::translate("GoToLineWin", "Line Num", nullptr));
        radioButton->setText(QCoreApplication::translate("GoToLineWin", "Left", nullptr));
        radioButton_2->setText(QCoreApplication::translate("GoToLineWin", "Right", nullptr));
        pushButton->setText(QCoreApplication::translate("GoToLineWin", "Ok", nullptr));
        pushButton_2->setText(QCoreApplication::translate("GoToLineWin", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GoToLineWin: public Ui_GoToLineWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOTOLINEWIN_H
