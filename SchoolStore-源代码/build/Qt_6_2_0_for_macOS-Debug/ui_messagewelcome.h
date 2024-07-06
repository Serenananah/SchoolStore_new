/********************************************************************************
** Form generated from reading UI file 'messagewelcome.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEWELCOME_H
#define UI_MESSAGEWELCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_MessageWelcome
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *MessageWelcome)
    {
        if (MessageWelcome->objectName().isEmpty())
            MessageWelcome->setObjectName(QString::fromUtf8("MessageWelcome"));
        MessageWelcome->resize(301, 297);
        MessageWelcome->setStyleSheet(QString::fromUtf8("image: url(:/pic_main/weather.png);"));
        buttonBox = new QDialogButtonBox(MessageWelcome);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(-10, 270, 301, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(MessageWelcome);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 20, 91, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        textBrowser = new QTextBrowser(MessageWelcome);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(30, 70, 256, 192));
        textBrowser->setReadOnly(true);

        retranslateUi(MessageWelcome);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, MessageWelcome, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, MessageWelcome, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(MessageWelcome);
    } // setupUi

    void retranslateUi(QDialog *MessageWelcome)
    {
        MessageWelcome->setWindowTitle(QCoreApplication::translate("MessageWelcome", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("MessageWelcome", "Welcome", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MessageWelcome", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#ff0000;\">\346\254\242\350\277\216\344\275\277\347\224\250\345\215\216\345\215\227\347\220\206\345\267\245\345\244\247\345\255\246</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#ff0000;\">\346\240\241\345\233\255\344\270\252\344\272\272\345\260\217\345\225\206\351\223\272\347\263\273\347\273\237</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MessageWelcome: public Ui_MessageWelcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEWELCOME_H
