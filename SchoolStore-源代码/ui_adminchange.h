/********************************************************************************
** Form generated from reading UI file 'adminchange.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINCHANGE_H
#define UI_ADMINCHANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AdminChange
{
public:
    QLineEdit *lineEdit_id;
    QPushButton *pushButton_find;
    QLabel *label_find;
    QLabel *label;
    QLabel *label_name;
    QLabel *label_price;
    QLabel *label_dsc;
    QLabel *label_sum;
    QPushButton *pushButton_change;
    QLabel *label_change;
    QPushButton *pushButton_ok;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_price;
    QLineEdit *lineEdit_dsc;
    QLineEdit *lineEdit_sum;

    void setupUi(QDialog *AdminChange)
    {
        if (AdminChange->objectName().isEmpty())
            AdminChange->setObjectName(QStringLiteral("AdminChange"));
        AdminChange->resize(644, 460);
        AdminChange->setStyleSheet(QStringLiteral("image: url(:/pic_adminchange/back9.jpg);"));
        lineEdit_id = new QLineEdit(AdminChange);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(125, 65, 241, 21));
        lineEdit_id->setStyleSheet(QStringLiteral(""));
        pushButton_find = new QPushButton(AdminChange);
        pushButton_find->setObjectName(QStringLiteral("pushButton_find"));
        pushButton_find->setGeometry(QRect(530, 50, 75, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        pushButton_find->setFont(font);
        label_find = new QLabel(AdminChange);
        label_find->setObjectName(QStringLiteral("label_find"));
        label_find->setGeometry(QRect(470, 51, 51, 41));
        label_find->setStyleSheet(QStringLiteral("image: url(:/pic_adminchange/icons8-search-50.png);"));
        label = new QLabel(AdminChange);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 65, 61, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label_name = new QLabel(AdminChange);
        label_name->setObjectName(QStringLiteral("label_name"));
        label_name->setGeometry(QRect(60, 140, 381, 20));
        label_name->setStyleSheet(QStringLiteral(""));
        label_price = new QLabel(AdminChange);
        label_price->setObjectName(QStringLiteral("label_price"));
        label_price->setGeometry(QRect(60, 180, 381, 20));
        label_price->setStyleSheet(QStringLiteral(""));
        label_dsc = new QLabel(AdminChange);
        label_dsc->setObjectName(QStringLiteral("label_dsc"));
        label_dsc->setGeometry(QRect(60, 220, 381, 20));
        label_dsc->setStyleSheet(QStringLiteral(""));
        label_sum = new QLabel(AdminChange);
        label_sum->setObjectName(QStringLiteral("label_sum"));
        label_sum->setGeometry(QRect(60, 260, 381, 20));
        label_sum->setStyleSheet(QStringLiteral(""));
        pushButton_change = new QPushButton(AdminChange);
        pushButton_change->setObjectName(QStringLiteral("pushButton_change"));
        pushButton_change->setGeometry(QRect(530, 190, 88, 41));
        pushButton_change->setFont(font1);
        label_change = new QLabel(AdminChange);
        label_change->setObjectName(QStringLiteral("label_change"));
        label_change->setGeometry(QRect(450, 180, 71, 61));
        label_change->setStyleSheet(QStringLiteral("image: url(:/pic_adminchange/icons8-edit-property-80.png);"));
        pushButton_ok = new QPushButton(AdminChange);
        pushButton_ok->setObjectName(QStringLiteral("pushButton_ok"));
        pushButton_ok->setGeometry(QRect(530, 260, 88, 41));
        pushButton_ok->setFont(font1);
        lineEdit_name = new QLineEdit(AdminChange);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(50, 140, 321, 20));
        lineEdit_price = new QLineEdit(AdminChange);
        lineEdit_price->setObjectName(QStringLiteral("lineEdit_price"));
        lineEdit_price->setGeometry(QRect(50, 180, 321, 20));
        lineEdit_dsc = new QLineEdit(AdminChange);
        lineEdit_dsc->setObjectName(QStringLiteral("lineEdit_dsc"));
        lineEdit_dsc->setGeometry(QRect(50, 220, 321, 20));
        lineEdit_sum = new QLineEdit(AdminChange);
        lineEdit_sum->setObjectName(QStringLiteral("lineEdit_sum"));
        lineEdit_sum->setGeometry(QRect(50, 260, 321, 20));

        retranslateUi(AdminChange);

        QMetaObject::connectSlotsByName(AdminChange);
    } // setupUi

    void retranslateUi(QDialog *AdminChange)
    {
        AdminChange->setWindowTitle(QApplication::translate("AdminChange", "Dialog", 0));
        pushButton_find->setText(QApplication::translate("AdminChange", "\346\237\245\350\257\242", 0));
        label_find->setText(QString());
        label->setText(QApplication::translate("AdminChange", "\345\225\206\345\223\201ID", 0));
        label_name->setText(QApplication::translate("AdminChange", "TextLabel", 0));
        label_price->setText(QApplication::translate("AdminChange", "TextLabel", 0));
        label_dsc->setText(QApplication::translate("AdminChange", "TextLabel", 0));
        label_sum->setText(QApplication::translate("AdminChange", "TextLabel", 0));
        pushButton_change->setText(QApplication::translate("AdminChange", "\344\277\256\346\224\271", 0));
        label_change->setText(QString());
        pushButton_ok->setText(QApplication::translate("AdminChange", "\347\241\256\345\256\232", 0));
    } // retranslateUi

};

namespace Ui {
    class AdminChange: public Ui_AdminChange {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINCHANGE_H
