/********************************************************************************
** Form generated from reading UI file 'user_information.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_INFORMATION_H
#define UI_USER_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_User_information
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *m_user;
    QLabel *m_password;
    QLineEdit *set_password;
    QLabel *m_auth;
    QLabel *m_money;
    QLabel *m_sex;
    QLineEdit *set_email;
    QLabel *m_tel;
    QLineEdit *set_tel;
    QLabel *m_explaim;
    QLineEdit *set_explain;
    QLabel *label_9;
    QPushButton *confirm_Button;
    QPushButton *supply_Button;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *User_information)
    {
        if (User_information->objectName().isEmpty())
            User_information->setObjectName(QString::fromUtf8("User_information"));
        User_information->resize(495, 580);
        User_information->setStyleSheet(QString::fromUtf8("border-image: url(:/pic_main/25.jpg);"));
        layoutWidget = new QWidget(User_information);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 90, 451, 451));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        m_user = new QLabel(layoutWidget);
        m_user->setObjectName(QString::fromUtf8("m_user"));
        m_user->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";\n"
""));

        verticalLayout->addWidget(m_user);

        m_password = new QLabel(layoutWidget);
        m_password->setObjectName(QString::fromUtf8("m_password"));
        m_password->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));

        verticalLayout->addWidget(m_password);

        set_password = new QLineEdit(layoutWidget);
        set_password->setObjectName(QString::fromUtf8("set_password"));

        verticalLayout->addWidget(set_password);

        m_auth = new QLabel(layoutWidget);
        m_auth->setObjectName(QString::fromUtf8("m_auth"));
        m_auth->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));

        verticalLayout->addWidget(m_auth);

        m_money = new QLabel(layoutWidget);
        m_money->setObjectName(QString::fromUtf8("m_money"));
        m_money->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));

        verticalLayout->addWidget(m_money);

        m_sex = new QLabel(layoutWidget);
        m_sex->setObjectName(QString::fromUtf8("m_sex"));
        m_sex->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));

        verticalLayout->addWidget(m_sex);

        set_email = new QLineEdit(layoutWidget);
        set_email->setObjectName(QString::fromUtf8("set_email"));

        verticalLayout->addWidget(set_email);

        m_tel = new QLabel(layoutWidget);
        m_tel->setObjectName(QString::fromUtf8("m_tel"));
        m_tel->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));

        verticalLayout->addWidget(m_tel);

        set_tel = new QLineEdit(layoutWidget);
        set_tel->setObjectName(QString::fromUtf8("set_tel"));

        verticalLayout->addWidget(set_tel);

        m_explaim = new QLabel(layoutWidget);
        m_explaim->setObjectName(QString::fromUtf8("m_explaim"));
        m_explaim->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));

        verticalLayout->addWidget(m_explaim);

        set_explain = new QLineEdit(layoutWidget);
        set_explain->setObjectName(QString::fromUtf8("set_explain"));

        verticalLayout->addWidget(set_explain);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout->addWidget(label_9);

        confirm_Button = new QPushButton(User_information);
        confirm_Button->setObjectName(QString::fromUtf8("confirm_Button"));
        confirm_Button->setGeometry(QRect(390, 550, 93, 28));
        supply_Button = new QPushButton(User_information);
        supply_Button->setObjectName(QString::fromUtf8("supply_Button"));
        supply_Button->setGeometry(QRect(280, 550, 93, 28));
        label = new QLabel(User_information);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 301, 31));
        label->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(User_information);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 50, 261, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 14pt \"\346\245\267\344\275\223\";"));

        retranslateUi(User_information);

        QMetaObject::connectSlotsByName(User_information);
    } // setupUi

    void retranslateUi(QDialog *User_information)
    {
        User_information->setWindowTitle(QCoreApplication::translate("User_information", "Dialog", nullptr));
        m_user->setText(QCoreApplication::translate("User_information", "<html><head/><body><p><span style=\" font-size:12pt;\">TextLabel</span></p></body></html>", nullptr));
        m_password->setText(QCoreApplication::translate("User_information", "TextLabel", nullptr));
        m_auth->setText(QCoreApplication::translate("User_information", "TextLabel", nullptr));
        m_money->setText(QCoreApplication::translate("User_information", "TextLabel", nullptr));
        m_sex->setText(QCoreApplication::translate("User_information", "TextLabel", nullptr));
        m_tel->setText(QCoreApplication::translate("User_information", "TextLabel", nullptr));
        m_explaim->setText(QCoreApplication::translate("User_information", "TextLabel", nullptr));
        label_9->setText(QString());
        confirm_Button->setText(QCoreApplication::translate("User_information", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        supply_Button->setText(QCoreApplication::translate("User_information", "\345\256\214\345\226\204\350\265\204\346\226\231", nullptr));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class User_information: public Ui_User_information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_INFORMATION_H
