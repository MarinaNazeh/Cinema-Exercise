/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QLabel *username;
    QLabel *password;
    QLineEdit *userin;
    QLineEdit *passin;
    QPushButton *loginbutton;
    QPushButton *pushButton_2;
    QLabel *error;
    QMenuBar *menubar;
    QMenu *menuLoginWindow;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(800, 600);
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName("centralwidget");
        username = new QLabel(centralwidget);
        username->setObjectName("username");
        username->setGeometry(QRect(30, 50, 71, 16));
        password = new QLabel(centralwidget);
        password->setObjectName("password");
        password->setGeometry(QRect(30, 90, 71, 16));
        userin = new QLineEdit(centralwidget);
        userin->setObjectName("userin");
        userin->setGeometry(QRect(110, 50, 113, 21));
        passin = new QLineEdit(centralwidget);
        passin->setObjectName("passin");
        passin->setGeometry(QRect(100, 90, 113, 21));
        passin->setEchoMode(QLineEdit::Password);
        loginbutton = new QPushButton(centralwidget);
        loginbutton->setObjectName("loginbutton");
        loginbutton->setGeometry(QRect(50, 170, 100, 32));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(300, 170, 100, 32));
        error = new QLabel(centralwidget);
        error->setObjectName("error");
        error->setGeometry(QRect(120, 140, 251, 16));
        LoginWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        menuLoginWindow = new QMenu(menubar);
        menuLoginWindow->setObjectName("menuLoginWindow");
        LoginWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginWindow);
        statusbar->setObjectName("statusbar");
        LoginWindow->setStatusBar(statusbar);

        menubar->addAction(menuLoginWindow->menuAction());

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "LoginWindow", nullptr));
        username->setText(QCoreApplication::translate("LoginWindow", "Username:", nullptr));
        password->setText(QCoreApplication::translate("LoginWindow", "Password: ", nullptr));
        loginbutton->setText(QCoreApplication::translate("LoginWindow", "LogIn", nullptr));
        pushButton_2->setText(QCoreApplication::translate("LoginWindow", "Register", nullptr));
        error->setText(QCoreApplication::translate("LoginWindow", "<html><head/><body><p><span style=\" color:#ff2600;\">Error:wrong username or password</span></p></body></html>", nullptr));
        menuLoginWindow->setTitle(QCoreApplication::translate("LoginWindow", "LoginWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
