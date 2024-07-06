/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLineEdit *usrLineEdit_2;
    QLineEdit *pwdLineEdit_2;
    QLineEdit *telLineEdit_3;
    QPushButton *loginBtn_2;
    QLineEdit *usrLineEdit;
    QPushButton *backBtn;
    QPushButton *exitBtn;
    QLineEdit *pwdLineEdit;
    QPushButton *pushButton_register;
    QLabel *label_2;
    QPushButton *loginBtn;
    QLabel *label;
    QPushButton *registerBtn;
    QLabel *label_3;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(502, 409);
        Login->setStyleSheet(QString::fromUtf8("background-image: url(:/pic_login/1.jpg);"));
        usrLineEdit_2 = new QLineEdit(Login);
        usrLineEdit_2->setObjectName(QString::fromUtf8("usrLineEdit_2"));
        usrLineEdit_2->setGeometry(QRect(170, 70, 201, 31));
        usrLineEdit_2->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/sll.png);"));
        pwdLineEdit_2 = new QLineEdit(Login);
        pwdLineEdit_2->setObjectName(QString::fromUtf8("pwdLineEdit_2"));
        pwdLineEdit_2->setGeometry(QRect(170, 150, 201, 31));
        pwdLineEdit_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        pwdLineEdit_2->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/sll.png);"));
        pwdLineEdit_2->setEchoMode(QLineEdit::Password);
        telLineEdit_3 = new QLineEdit(Login);
        telLineEdit_3->setObjectName(QString::fromUtf8("telLineEdit_3"));
        telLineEdit_3->setGeometry(QRect(170, 230, 201, 31));
        telLineEdit_3->setContextMenuPolicy(Qt::DefaultContextMenu);
        telLineEdit_3->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/sll.png);"));
        telLineEdit_3->setEchoMode(QLineEdit::Normal);
        loginBtn_2 = new QPushButton(Login);
        loginBtn_2->setObjectName(QString::fromUtf8("loginBtn_2"));
        loginBtn_2->setGeometry(QRect(340, 300, 151, 28));
        usrLineEdit = new QLineEdit(Login);
        usrLineEdit->setObjectName(QString::fromUtf8("usrLineEdit"));
        usrLineEdit->setGeometry(QRect(170, 70, 201, 31));
        usrLineEdit->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/sll.png);"));
        backBtn = new QPushButton(Login);
        backBtn->setObjectName(QString::fromUtf8("backBtn"));
        backBtn->setGeometry(QRect(380, 150, 101, 31));
        exitBtn = new QPushButton(Login);
        exitBtn->setObjectName(QString::fromUtf8("exitBtn"));
        exitBtn->setGeometry(QRect(190, 300, 141, 28));
        pwdLineEdit = new QLineEdit(Login);
        pwdLineEdit->setObjectName(QString::fromUtf8("pwdLineEdit"));
        pwdLineEdit->setGeometry(QRect(170, 150, 201, 31));
        pwdLineEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        pwdLineEdit->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/sll.png);"));
        pwdLineEdit->setEchoMode(QLineEdit::Password);
        pushButton_register = new QPushButton(Login);
        pushButton_register->setObjectName(QString::fromUtf8("pushButton_register"));
        pushButton_register->setGeometry(QRect(380, 70, 61, 31));
        label_2 = new QLabel(Login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 140, 51, 51));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/pic_login/password_2.png);"));
        loginBtn = new QPushButton(Login);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));
        loginBtn->setGeometry(QRect(40, 300, 141, 28));
        label = new QLabel(Login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 60, 51, 51));
        label->setStyleSheet(QString::fromUtf8("image: url(:/pic_login/user_2.png);"));
        registerBtn = new QPushButton(Login);
        registerBtn->setObjectName(QString::fromUtf8("registerBtn"));
        registerBtn->setGeometry(QRect(380, 70, 101, 31));
        label_3 = new QLabel(Login);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 220, 51, 51));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/pic_login/phone_pic.png);"));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        usrLineEdit_2->setPlaceholderText(QCoreApplication::translate("Login", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        pwdLineEdit_2->setPlaceholderText(QCoreApplication::translate("Login", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        telLineEdit_3->setPlaceholderText(QCoreApplication::translate("Login", "\350\257\267\350\276\223\345\205\245\346\211\213\346\234\272\345\217\267\347\240\201", nullptr));
        loginBtn_2->setText(QCoreApplication::translate("Login", "\346\270\270\345\256\242\347\231\273\345\275\225", nullptr));
        usrLineEdit->setPlaceholderText(QCoreApplication::translate("Login", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        backBtn->setText(QCoreApplication::translate("Login", "\350\277\224\345\233\236", nullptr));
        exitBtn->setText(QCoreApplication::translate("Login", "\351\200\200\345\207\272", nullptr));
        pwdLineEdit->setPlaceholderText(QCoreApplication::translate("Login", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        pushButton_register->setText(QCoreApplication::translate("Login", "\346\263\250\345\206\214", nullptr));
        label_2->setText(QString());
        loginBtn->setText(QCoreApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        label->setText(QString());
        registerBtn->setText(QCoreApplication::translate("Login", "\346\263\250\345\206\214", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
