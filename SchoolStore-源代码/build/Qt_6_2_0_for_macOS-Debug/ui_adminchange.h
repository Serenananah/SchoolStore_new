/********************************************************************************
** Form generated from reading UI file 'adminchange.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINCHANGE_H
#define UI_ADMINCHANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
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
            AdminChange->setObjectName(QString::fromUtf8("AdminChange"));
        AdminChange->resize(644, 460);
        AdminChange->setStyleSheet(QString::fromUtf8("image: url(:/pic_adminchange/back9.jpg);"));
        lineEdit_id = new QLineEdit(AdminChange);
        lineEdit_id->setObjectName(QString::fromUtf8("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(125, 65, 241, 21));
        lineEdit_id->setStyleSheet(QString::fromUtf8(""));
        pushButton_find = new QPushButton(AdminChange);
        pushButton_find->setObjectName(QString::fromUtf8("pushButton_find"));
        pushButton_find->setGeometry(QRect(530, 50, 75, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(11);
        font.setBold(true);
        pushButton_find->setFont(font);
        label_find = new QLabel(AdminChange);
        label_find->setObjectName(QString::fromUtf8("label_find"));
        label_find->setGeometry(QRect(470, 51, 51, 41));
        label_find->setStyleSheet(QString::fromUtf8("image: url(:/pic_adminchange/icons8-search-50.png);"));
        label = new QLabel(AdminChange);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 65, 61, 20));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(10);
        font1.setBold(true);
        label->setFont(font1);
        label_name = new QLabel(AdminChange);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setGeometry(QRect(60, 140, 381, 20));
        label_name->setStyleSheet(QString::fromUtf8(""));
        label_price = new QLabel(AdminChange);
        label_price->setObjectName(QString::fromUtf8("label_price"));
        label_price->setGeometry(QRect(60, 180, 381, 20));
        label_price->setStyleSheet(QString::fromUtf8(""));
        label_dsc = new QLabel(AdminChange);
        label_dsc->setObjectName(QString::fromUtf8("label_dsc"));
        label_dsc->setGeometry(QRect(60, 220, 381, 20));
        label_dsc->setStyleSheet(QString::fromUtf8(""));
        label_sum = new QLabel(AdminChange);
        label_sum->setObjectName(QString::fromUtf8("label_sum"));
        label_sum->setGeometry(QRect(60, 260, 381, 20));
        label_sum->setStyleSheet(QString::fromUtf8(""));
        pushButton_change = new QPushButton(AdminChange);
        pushButton_change->setObjectName(QString::fromUtf8("pushButton_change"));
        pushButton_change->setGeometry(QRect(530, 190, 88, 41));
        pushButton_change->setFont(font1);
        label_change = new QLabel(AdminChange);
        label_change->setObjectName(QString::fromUtf8("label_change"));
        label_change->setGeometry(QRect(450, 180, 71, 61));
        label_change->setStyleSheet(QString::fromUtf8("image: url(:/pic_adminchange/icons8-edit-property-80.png);"));
        pushButton_ok = new QPushButton(AdminChange);
        pushButton_ok->setObjectName(QString::fromUtf8("pushButton_ok"));
        pushButton_ok->setGeometry(QRect(530, 260, 88, 41));
        pushButton_ok->setFont(font1);
        lineEdit_name = new QLineEdit(AdminChange);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(50, 140, 321, 20));
        lineEdit_price = new QLineEdit(AdminChange);
        lineEdit_price->setObjectName(QString::fromUtf8("lineEdit_price"));
        lineEdit_price->setGeometry(QRect(50, 180, 321, 20));
        lineEdit_dsc = new QLineEdit(AdminChange);
        lineEdit_dsc->setObjectName(QString::fromUtf8("lineEdit_dsc"));
        lineEdit_dsc->setGeometry(QRect(50, 220, 321, 20));
        lineEdit_sum = new QLineEdit(AdminChange);
        lineEdit_sum->setObjectName(QString::fromUtf8("lineEdit_sum"));
        lineEdit_sum->setGeometry(QRect(50, 260, 321, 20));

        retranslateUi(AdminChange);

        QMetaObject::connectSlotsByName(AdminChange);
    } // setupUi

    void retranslateUi(QDialog *AdminChange)
    {
        AdminChange->setWindowTitle(QCoreApplication::translate("AdminChange", "Dialog", nullptr));
        pushButton_find->setText(QCoreApplication::translate("AdminChange", "\346\237\245\350\257\242", nullptr));
        label_find->setText(QString());
        label->setText(QCoreApplication::translate("AdminChange", "\345\225\206\345\223\201ID", nullptr));
        label_name->setText(QCoreApplication::translate("AdminChange", "TextLabel", nullptr));
        label_price->setText(QCoreApplication::translate("AdminChange", "TextLabel", nullptr));
        label_dsc->setText(QCoreApplication::translate("AdminChange", "TextLabel", nullptr));
        label_sum->setText(QCoreApplication::translate("AdminChange", "TextLabel", nullptr));
        pushButton_change->setText(QCoreApplication::translate("AdminChange", "\344\277\256\346\224\271", nullptr));
        label_change->setText(QString());
        pushButton_ok->setText(QCoreApplication::translate("AdminChange", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminChange: public Ui_AdminChange {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINCHANGE_H
