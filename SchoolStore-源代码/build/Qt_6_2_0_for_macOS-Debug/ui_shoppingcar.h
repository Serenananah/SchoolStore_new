/********************************************************************************
** Form generated from reading UI file 'shoppingcar.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOPPINGCAR_H
#define UI_SHOPPINGCAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ShoppingCar
{
public:
    QLabel *label_name;
    QLabel *label_price;
    QLabel *label_name_2;
    QLabel *label_name_3;
    QLabel *label_name_4;
    QLabel *label_name_5;
    QLabel *label_name_6;
    QLabel *label_name_7;
    QLabel *label_name_8;
    QLabel *label_price_2;
    QLabel *label_price_3;
    QLabel *label_price_4;
    QLabel *label_price_5;
    QLabel *label_price_6;
    QLabel *label_price_7;
    QLabel *label_price_8;
    QLabel *label_sum;
    QPushButton *pushButton_ok;

    void setupUi(QDialog *ShoppingCar)
    {
        if (ShoppingCar->objectName().isEmpty())
            ShoppingCar->setObjectName(QString::fromUtf8("ShoppingCar"));
        ShoppingCar->resize(613, 438);
        ShoppingCar->setStyleSheet(QString::fromUtf8("image: url(:/pic_adminchange/back9.jpg);"));
        label_name = new QLabel(ShoppingCar);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setGeometry(QRect(20, 30, 221, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(11);
        font.setBold(true);
        label_name->setFont(font);
        label_price = new QLabel(ShoppingCar);
        label_price->setObjectName(QString::fromUtf8("label_price"));
        label_price->setGeometry(QRect(260, 30, 221, 20));
        label_price->setFont(font);
        label_name_2 = new QLabel(ShoppingCar);
        label_name_2->setObjectName(QString::fromUtf8("label_name_2"));
        label_name_2->setGeometry(QRect(20, 70, 221, 20));
        label_name_2->setFont(font);
        label_name_3 = new QLabel(ShoppingCar);
        label_name_3->setObjectName(QString::fromUtf8("label_name_3"));
        label_name_3->setGeometry(QRect(20, 110, 221, 20));
        label_name_3->setFont(font);
        label_name_4 = new QLabel(ShoppingCar);
        label_name_4->setObjectName(QString::fromUtf8("label_name_4"));
        label_name_4->setGeometry(QRect(20, 150, 221, 20));
        label_name_4->setFont(font);
        label_name_5 = new QLabel(ShoppingCar);
        label_name_5->setObjectName(QString::fromUtf8("label_name_5"));
        label_name_5->setGeometry(QRect(20, 190, 221, 20));
        label_name_5->setFont(font);
        label_name_6 = new QLabel(ShoppingCar);
        label_name_6->setObjectName(QString::fromUtf8("label_name_6"));
        label_name_6->setGeometry(QRect(20, 230, 221, 20));
        label_name_6->setFont(font);
        label_name_7 = new QLabel(ShoppingCar);
        label_name_7->setObjectName(QString::fromUtf8("label_name_7"));
        label_name_7->setGeometry(QRect(20, 270, 221, 20));
        label_name_7->setFont(font);
        label_name_8 = new QLabel(ShoppingCar);
        label_name_8->setObjectName(QString::fromUtf8("label_name_8"));
        label_name_8->setGeometry(QRect(20, 310, 221, 20));
        label_name_8->setFont(font);
        label_price_2 = new QLabel(ShoppingCar);
        label_price_2->setObjectName(QString::fromUtf8("label_price_2"));
        label_price_2->setGeometry(QRect(260, 70, 221, 20));
        label_price_2->setFont(font);
        label_price_3 = new QLabel(ShoppingCar);
        label_price_3->setObjectName(QString::fromUtf8("label_price_3"));
        label_price_3->setGeometry(QRect(260, 110, 221, 20));
        label_price_3->setFont(font);
        label_price_4 = new QLabel(ShoppingCar);
        label_price_4->setObjectName(QString::fromUtf8("label_price_4"));
        label_price_4->setGeometry(QRect(260, 150, 221, 20));
        label_price_4->setFont(font);
        label_price_5 = new QLabel(ShoppingCar);
        label_price_5->setObjectName(QString::fromUtf8("label_price_5"));
        label_price_5->setGeometry(QRect(260, 190, 221, 20));
        label_price_5->setFont(font);
        label_price_6 = new QLabel(ShoppingCar);
        label_price_6->setObjectName(QString::fromUtf8("label_price_6"));
        label_price_6->setGeometry(QRect(260, 230, 221, 20));
        label_price_6->setFont(font);
        label_price_7 = new QLabel(ShoppingCar);
        label_price_7->setObjectName(QString::fromUtf8("label_price_7"));
        label_price_7->setGeometry(QRect(260, 270, 221, 20));
        label_price_7->setFont(font);
        label_price_8 = new QLabel(ShoppingCar);
        label_price_8->setObjectName(QString::fromUtf8("label_price_8"));
        label_price_8->setGeometry(QRect(260, 310, 221, 20));
        label_price_8->setFont(font);
        label_sum = new QLabel(ShoppingCar);
        label_sum->setObjectName(QString::fromUtf8("label_sum"));
        label_sum->setGeometry(QRect(340, 360, 211, 21));
        label_sum->setFont(font);
        pushButton_ok = new QPushButton(ShoppingCar);
        pushButton_ok->setObjectName(QString::fromUtf8("pushButton_ok"));
        pushButton_ok->setGeometry(QRect(484, 392, 81, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(12);
        font1.setBold(true);
        pushButton_ok->setFont(font1);

        retranslateUi(ShoppingCar);

        QMetaObject::connectSlotsByName(ShoppingCar);
    } // setupUi

    void retranslateUi(QDialog *ShoppingCar)
    {
        ShoppingCar->setWindowTitle(QCoreApplication::translate("ShoppingCar", "Dialog", nullptr));
        label_name->setText(QCoreApplication::translate("ShoppingCar", "\346\227\240", nullptr));
        label_price->setText(QCoreApplication::translate("ShoppingCar", "0", nullptr));
        label_name_2->setText(QCoreApplication::translate("ShoppingCar", "\346\227\240", nullptr));
        label_name_3->setText(QCoreApplication::translate("ShoppingCar", "\346\227\240", nullptr));
        label_name_4->setText(QCoreApplication::translate("ShoppingCar", "\346\227\240", nullptr));
        label_name_5->setText(QCoreApplication::translate("ShoppingCar", "\346\227\240", nullptr));
        label_name_6->setText(QCoreApplication::translate("ShoppingCar", "\346\227\240", nullptr));
        label_name_7->setText(QCoreApplication::translate("ShoppingCar", "\346\227\240", nullptr));
        label_name_8->setText(QCoreApplication::translate("ShoppingCar", "\346\227\240", nullptr));
        label_price_2->setText(QCoreApplication::translate("ShoppingCar", "0", nullptr));
        label_price_3->setText(QCoreApplication::translate("ShoppingCar", "0", nullptr));
        label_price_4->setText(QCoreApplication::translate("ShoppingCar", "0", nullptr));
        label_price_5->setText(QCoreApplication::translate("ShoppingCar", "0", nullptr));
        label_price_6->setText(QCoreApplication::translate("ShoppingCar", "0", nullptr));
        label_price_7->setText(QCoreApplication::translate("ShoppingCar", "0", nullptr));
        label_price_8->setText(QCoreApplication::translate("ShoppingCar", "0", nullptr));
        label_sum->setText(QCoreApplication::translate("ShoppingCar", "TextLabel", nullptr));
        pushButton_ok->setText(QCoreApplication::translate("ShoppingCar", "\347\273\223\347\256\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShoppingCar: public Ui_ShoppingCar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPPINGCAR_H
