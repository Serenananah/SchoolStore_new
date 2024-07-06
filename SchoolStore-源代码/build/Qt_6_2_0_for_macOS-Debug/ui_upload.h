/********************************************************************************
** Form generated from reading UI file 'upload.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPLOAD_H
#define UI_UPLOAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_UpLoad
{
public:
    QProgressBar *clientProgressBar;
    QLabel *clientStatusLabel;
    QPushButton *openButton;
    QPushButton *sendButton;
    QPushButton *pushButton;

    void setupUi(QDialog *UpLoad)
    {
        if (UpLoad->objectName().isEmpty())
            UpLoad->setObjectName(QString::fromUtf8("UpLoad"));
        UpLoad->resize(595, 374);
        UpLoad->setStyleSheet(QString::fromUtf8("image: url(:/pick_upload/background.jpg);"));
        clientProgressBar = new QProgressBar(UpLoad);
        clientProgressBar->setObjectName(QString::fromUtf8("clientProgressBar"));
        clientProgressBar->setGeometry(QRect(120, 150, 411, 23));
        clientProgressBar->setValue(0);
        clientStatusLabel = new QLabel(UpLoad);
        clientStatusLabel->setObjectName(QString::fromUtf8("clientStatusLabel"));
        clientStatusLabel->setGeometry(QRect(140, 200, 221, 16));
        openButton = new QPushButton(UpLoad);
        openButton->setObjectName(QString::fromUtf8("openButton"));
        openButton->setGeometry(QRect(160, 280, 75, 23));
        sendButton = new QPushButton(UpLoad);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setGeometry(QRect(350, 280, 75, 23));
        pushButton = new QPushButton(UpLoad);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 50, 561, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(9);
        font.setBold(false);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(UpLoad);

        QMetaObject::connectSlotsByName(UpLoad);
    } // setupUi

    void retranslateUi(QDialog *UpLoad)
    {
        UpLoad->setWindowTitle(QCoreApplication::translate("UpLoad", "Dialog", nullptr));
        clientStatusLabel->setText(QCoreApplication::translate("UpLoad", "\347\212\266\346\200\201\357\274\232\347\255\211\345\276\205\346\211\223\345\274\200\346\226\207\344\273\266\357\274\201", nullptr));
        openButton->setText(QCoreApplication::translate("UpLoad", "\346\211\223\345\274\200", nullptr));
        sendButton->setText(QCoreApplication::translate("UpLoad", "\345\217\221\351\200\201", nullptr));
        pushButton->setText(QCoreApplication::translate("UpLoad", "\345\246\202\351\234\200\345\274\200\345\272\227\357\274\214\344\270\212\344\274\240\347\211\251\345\223\201\345\220\215\347\247\260\357\274\214\345\233\276\347\211\207\357\274\214\344\273\267\346\240\274\350\276\223\345\205\245\345\234\250txt\346\226\207\346\241\243\346\211\223\345\214\205\345\220\216\345\217\221\351\200\201\343\200\202\345\267\245\344\275\234\344\272\272\345\221\230\345\260\206\345\234\250\345\220\216\345\217\260\345\256\241\346\240\270\345\220\216\344\270\272\346\202\250\346\234\215\345\212\241", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpLoad: public Ui_UpLoad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPLOAD_H
