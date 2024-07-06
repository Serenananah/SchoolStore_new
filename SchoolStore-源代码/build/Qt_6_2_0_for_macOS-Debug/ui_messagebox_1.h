/********************************************************************************
** Form generated from reading UI file 'messagebox_1.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEBOX_1_H
#define UI_MESSAGEBOX_1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_MessageBox_1
{
public:

    void setupUi(QDialog *MessageBox_1)
    {
        if (MessageBox_1->objectName().isEmpty())
            MessageBox_1->setObjectName(QString::fromUtf8("MessageBox_1"));
        MessageBox_1->resize(320, 240);

        retranslateUi(MessageBox_1);

        QMetaObject::connectSlotsByName(MessageBox_1);
    } // setupUi

    void retranslateUi(QDialog *MessageBox_1)
    {
        MessageBox_1->setWindowTitle(QCoreApplication::translate("MessageBox_1", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MessageBox_1: public Ui_MessageBox_1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEBOX_1_H
