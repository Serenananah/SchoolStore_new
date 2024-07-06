/********************************************************************************
** Form generated from reading UI file 'message.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGE_H
#define UI_MESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Message
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Message)
    {
        if (Message->objectName().isEmpty())
            Message->setObjectName(QString::fromUtf8("Message"));
        Message->resize(404, 402);
        Message->setStyleSheet(QString::fromUtf8("image: url(:/pic_main/25.jpg);"));
        pushButton = new QPushButton(Message);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 20, 371, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(12);
        font.setBold(true);
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(Message);

        QMetaObject::connectSlotsByName(Message);
    } // setupUi

    void retranslateUi(QDialog *Message)
    {
        Message->setWindowTitle(QCoreApplication::translate("Message", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Message", "Message1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Message: public Ui_Message {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGE_H
