/********************************************************************************
** Form generated from reading UI file 'user_information.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_INFORMATION_H
#define UI_USER_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
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
            User_information->setObjectName(QStringLiteral("User_information"));
        User_information->resize(495, 580);
        User_information->setStyleSheet(QStringLiteral("border-image: url(:/pic_main/25.jpg);"));
        layoutWidget = new QWidget(User_information);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 90, 451, 451));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        m_user = new QLabel(layoutWidget);
        m_user->setObjectName(QStringLiteral("m_user"));
        m_user->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";\n"
""));

        verticalLayout->addWidget(m_user);

        m_password = new QLabel(layoutWidget);
        m_password->setObjectName(QStringLiteral("m_password"));
        m_password->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));

        verticalLayout->addWidget(m_password);

        set_password = new QLineEdit(layoutWidget);
        set_password->setObjectName(QStringLiteral("set_password"));

        verticalLayout->addWidget(set_password);

        m_auth = new QLabel(layoutWidget);
        m_auth->setObjectName(QStringLiteral("m_auth"));
        m_auth->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));

        verticalLayout->addWidget(m_auth);

        m_money = new QLabel(layoutWidget);
        m_money->setObjectName(QStringLiteral("m_money"));
        m_money->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));

        verticalLayout->addWidget(m_money);

        m_sex = new QLabel(layoutWidget);
        m_sex->setObjectName(QStringLiteral("m_sex"));
        m_sex->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));

        verticalLayout->addWidget(m_sex);

        set_email = new QLineEdit(layoutWidget);
        set_email->setObjectName(QStringLiteral("set_email"));

        verticalLayout->addWidget(set_email);

        m_tel = new QLabel(layoutWidget);
        m_tel->setObjectName(QStringLiteral("m_tel"));
        m_tel->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));

        verticalLayout->addWidget(m_tel);

        set_tel = new QLineEdit(layoutWidget);
        set_tel->setObjectName(QStringLiteral("set_tel"));

        verticalLayout->addWidget(set_tel);

        m_explaim = new QLabel(layoutWidget);
        m_explaim->setObjectName(QStringLiteral("m_explaim"));
        m_explaim->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));

        verticalLayout->addWidget(m_explaim);

        set_explain = new QLineEdit(layoutWidget);
        set_explain->setObjectName(QStringLiteral("set_explain"));

        verticalLayout->addWidget(set_explain);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout->addWidget(label_9);

        confirm_Button = new QPushButton(User_information);
        confirm_Button->setObjectName(QStringLiteral("confirm_Button"));
        confirm_Button->setGeometry(QRect(390, 550, 93, 28));
        supply_Button = new QPushButton(User_information);
        supply_Button->setObjectName(QStringLiteral("supply_Button"));
        supply_Button->setGeometry(QRect(280, 550, 93, 28));
        label = new QLabel(User_information);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 301, 31));
        label->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(User_information);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 50, 261, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 14pt \"\346\245\267\344\275\223\";"));

        retranslateUi(User_information);

        QMetaObject::connectSlotsByName(User_information);
    } // setupUi

    void retranslateUi(QDialog *User_information)
    {
        User_information->setWindowTitle(QApplication::translate("User_information", "Dialog", 0));
        m_user->setText(QApplication::translate("User_information", "<html><head/><body><p><span style=\" font-size:12pt;\">TextLabel</span></p></body></html>", 0));
        m_password->setText(QApplication::translate("User_information", "TextLabel", 0));
        m_auth->setText(QApplication::translate("User_information", "TextLabel", 0));
        m_money->setText(QApplication::translate("User_information", "TextLabel", 0));
        m_sex->setText(QApplication::translate("User_information", "TextLabel", 0));
        m_tel->setText(QApplication::translate("User_information", "TextLabel", 0));
        m_explaim->setText(QApplication::translate("User_information", "TextLabel", 0));
        label_9->setText(QString());
        confirm_Button->setText(QApplication::translate("User_information", "\347\241\256\350\256\244\344\277\256\346\224\271", 0));
        supply_Button->setText(QApplication::translate("User_information", "\345\256\214\345\226\204\350\265\204\346\226\231", 0));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class User_information: public Ui_User_information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_INFORMATION_H
