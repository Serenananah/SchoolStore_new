/********************************************************************************
** Form generated from reading UI file 'recharge.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECHARGE_H
#define UI_RECHARGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Recharge
{
public:
    QPushButton *pushButton_zfb;
    QPushButton *pushButton_wx;
    QGroupBox *groupBox;
    QPushButton *pushButton_zfb_all;
    QPushButton *pushButton_zfb_10;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_back;
    QLabel *label_zfb_all;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_wx_all;
    QPushButton *pushButton_wx_10;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_zfb_10;
    QLabel *label_wx;
    QLabel *label_wx_10;

    void setupUi(QDialog *Recharge)
    {
        if (Recharge->objectName().isEmpty())
            Recharge->setObjectName(QStringLiteral("Recharge"));
        Recharge->resize(440, 460);
        Recharge->setStyleSheet(QStringLiteral("border-image: url(:/pic_recharge/23.png);"));
        pushButton_zfb = new QPushButton(Recharge);
        pushButton_zfb->setObjectName(QStringLiteral("pushButton_zfb"));
        pushButton_zfb->setGeometry(QRect(100, 190, 81, 81));
        pushButton_zfb->setStyleSheet(QStringLiteral("image: url(:/pic_recharge/zfb.jpg);"));
        pushButton_wx = new QPushButton(Recharge);
        pushButton_wx->setObjectName(QStringLiteral("pushButton_wx"));
        pushButton_wx->setGeometry(QRect(240, 190, 81, 81));
        pushButton_wx->setStyleSheet(QStringLiteral("image: url(:/pic_recharge/wx.jpg);"));
        groupBox = new QGroupBox(Recharge);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(80, 130, 261, 181));
        pushButton_zfb_all = new QPushButton(groupBox);
        pushButton_zfb_all->setObjectName(QStringLiteral("pushButton_zfb_all"));
        pushButton_zfb_all->setGeometry(QRect(10, 30, 81, 81));
        pushButton_zfb_all->setStyleSheet(QStringLiteral("image: url(:/pic_recharge/zzz.jpg);"));
        pushButton_zfb_10 = new QPushButton(groupBox);
        pushButton_zfb_10->setObjectName(QStringLiteral("pushButton_zfb_10"));
        pushButton_zfb_10->setGeometry(QRect(170, 30, 81, 81));
        pushButton_zfb_10->setStyleSheet(QStringLiteral("image: url(:/pic_recharge/zzz.jpg);"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 130, 121, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 130, 101, 20));
        label_2->setFont(font);
        pushButton_back = new QPushButton(Recharge);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(350, 20, 75, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_back->setFont(font1);
        label_zfb_all = new QLabel(Recharge);
        label_zfb_all->setObjectName(QStringLiteral("label_zfb_all"));
        label_zfb_all->setGeometry(QRect(90, 80, 241, 271));
        label_zfb_all->setStyleSheet(QStringLiteral("image: url(:/pic_recharge/zzz.jpg);"));
        groupBox_2 = new QGroupBox(Recharge);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(80, 130, 261, 181));
        pushButton_wx_all = new QPushButton(groupBox_2);
        pushButton_wx_all->setObjectName(QStringLiteral("pushButton_wx_all"));
        pushButton_wx_all->setGeometry(QRect(10, 30, 81, 81));
        pushButton_wx_all->setStyleSheet(QStringLiteral("image: url(:/pic_recharge/www.jpg);"));
        pushButton_wx_10 = new QPushButton(groupBox_2);
        pushButton_wx_10->setObjectName(QStringLiteral("pushButton_wx_10"));
        pushButton_wx_10->setGeometry(QRect(170, 30, 81, 81));
        pushButton_wx_10->setStyleSheet(QStringLiteral("image: url(:/pic_recharge/www.jpg);"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 130, 121, 20));
        label_3->setFont(font);
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(160, 130, 101, 20));
        label_4->setFont(font);
        label_zfb_10 = new QLabel(Recharge);
        label_zfb_10->setObjectName(QStringLiteral("label_zfb_10"));
        label_zfb_10->setGeometry(QRect(90, 80, 241, 271));
        label_zfb_10->setStyleSheet(QStringLiteral("border-image: url(:/pic_recharge/zzz.jpg);"));
        label_wx = new QLabel(Recharge);
        label_wx->setObjectName(QStringLiteral("label_wx"));
        label_wx->setGeometry(QRect(90, 80, 241, 271));
        label_wx->setStyleSheet(QStringLiteral("border-image: url(:/pic_recharge/www.jpg);"));
        label_wx_10 = new QLabel(Recharge);
        label_wx_10->setObjectName(QStringLiteral("label_wx_10"));
        label_wx_10->setGeometry(QRect(90, 80, 241, 271));
        label_wx_10->setStyleSheet(QStringLiteral("image: url(:/pic_recharge/www.jpg);"));

        retranslateUi(Recharge);

        QMetaObject::connectSlotsByName(Recharge);
    } // setupUi

    void retranslateUi(QDialog *Recharge)
    {
        Recharge->setWindowTitle(QApplication::translate("Recharge", "Dialog", 0));
        pushButton_zfb->setText(QString());
        pushButton_wx->setText(QString());
        groupBox->setTitle(QString());
        pushButton_zfb_all->setText(QString());
        pushButton_zfb_10->setText(QString());
        label->setText(QApplication::translate("Recharge", "\346\224\257\344\273\230\345\256\235\344\273\273\346\204\217\351\207\221\351\242\235\345\205\205\345\200\274", 0));
        label_2->setText(QApplication::translate("Recharge", "\346\224\257\344\273\230\345\256\23510\345\205\203\351\200\237\345\206\262", 0));
        pushButton_back->setText(QApplication::translate("Recharge", "\350\277\224\345\233\236", 0));
        label_zfb_all->setText(QString());
        groupBox_2->setTitle(QString());
        pushButton_wx_all->setText(QString());
        pushButton_wx_10->setText(QString());
        label_3->setText(QApplication::translate("Recharge", "\345\276\256\344\277\241\344\273\273\346\204\217\351\207\221\351\242\235\345\205\205\345\200\274", 0));
        label_4->setText(QApplication::translate("Recharge", "\345\276\256\344\277\24110\345\205\203\351\200\237\345\206\262", 0));
        label_zfb_10->setText(QString());
        label_wx->setText(QString());
        label_wx_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Recharge: public Ui_Recharge {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECHARGE_H
