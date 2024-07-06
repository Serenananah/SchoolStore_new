/********************************************************************************
** Form generated from reading UI file 'message.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGE_H
#define UI_MESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Message
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Message)
    {
        if (Message->objectName().isEmpty())
            Message->setObjectName(QStringLiteral("Message"));
        Message->resize(404, 402);
        Message->setStyleSheet(QStringLiteral("image: url(:/pic_main/25.jpg);"));
        pushButton = new QPushButton(Message);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 20, 371, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(Message);

        QMetaObject::connectSlotsByName(Message);
    } // setupUi

    void retranslateUi(QDialog *Message)
    {
        Message->setWindowTitle(QApplication::translate("Message", "Dialog", 0));
        pushButton->setText(QApplication::translate("Message", "Message1", 0));
    } // retranslateUi

};

namespace Ui {
    class Message: public Ui_Message {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGE_H
