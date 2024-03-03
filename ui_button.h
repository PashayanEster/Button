/********************************************************************************
** Form generated from reading UI file 'button.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTTON_H
#define UI_BUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Button
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Button)
    {
        if (Button->objectName().isEmpty())
            Button->setObjectName("Button");
        Button->resize(800, 600);
        centralwidget = new QWidget(Button);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(80, 40, 131, 71));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(230, 40, 131, 71));
        Button->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Button);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        Button->setMenuBar(menubar);
        statusbar = new QStatusBar(Button);
        statusbar->setObjectName("statusbar");
        Button->setStatusBar(statusbar);

        retranslateUi(Button);

        QMetaObject::connectSlotsByName(Button);
    } // setupUi

    void retranslateUi(QMainWindow *Button)
    {
        Button->setWindowTitle(QCoreApplication::translate("Button", "Button", nullptr));
        pushButton->setText(QCoreApplication::translate("Button", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Button", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Button: public Ui_Button {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTON_H
