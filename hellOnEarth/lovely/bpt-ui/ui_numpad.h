/********************************************************************************
** Form generated from reading UI file 'numpad.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMPAD_H
#define UI_NUMPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Numpad
{
public:
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btn9;
    QLabel *value;
    QPushButton *btn3;
    QPushButton *btn0;
    QPushButton *clear;
    QPushButton *enter;
    QPushButton *btn7;
    QPushButton *btn1;
    QPushButton *btn4;
    QPushButton *btn8;
    QPushButton *btn2;

    void setupUi(QDialog *Numpad)
    {
        if (Numpad->objectName().isEmpty())
            Numpad->setObjectName(QString::fromUtf8("Numpad"));
        Numpad->resize(400, 300);
        btn5 = new QPushButton(Numpad);
        btn5->setObjectName(QString::fromUtf8("btn5"));
        btn5->setGeometry(QRect(140, 127, 110, 42));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn5->sizePolicy().hasHeightForWidth());
        btn5->setSizePolicy(sizePolicy);
        btn6 = new QPushButton(Numpad);
        btn6->setObjectName(QString::fromUtf8("btn6"));
        btn6->setGeometry(QRect(259, 127, 111, 42));
        sizePolicy.setHeightForWidth(btn6->sizePolicy().hasHeightForWidth());
        btn6->setSizePolicy(sizePolicy);
        btn9 = new QPushButton(Numpad);
        btn9->setObjectName(QString::fromUtf8("btn9"));
        btn9->setGeometry(QRect(259, 178, 111, 43));
        sizePolicy.setHeightForWidth(btn9->sizePolicy().hasHeightForWidth());
        btn9->setSizePolicy(sizePolicy);
        value = new QLabel(Numpad);
        value->setObjectName(QString::fromUtf8("value"));
        value->setGeometry(QRect(20, 23, 350, 43));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(value->sizePolicy().hasHeightForWidth());
        value->setSizePolicy(sizePolicy1);
        value->setStyleSheet(QString::fromUtf8("border:1px solid black;"));
        btn3 = new QPushButton(Numpad);
        btn3->setObjectName(QString::fromUtf8("btn3"));
        btn3->setGeometry(QRect(259, 75, 111, 43));
        sizePolicy.setHeightForWidth(btn3->sizePolicy().hasHeightForWidth());
        btn3->setSizePolicy(sizePolicy);
        btn0 = new QPushButton(Numpad);
        btn0->setObjectName(QString::fromUtf8("btn0"));
        btn0->setGeometry(QRect(140, 230, 110, 43));
        sizePolicy.setHeightForWidth(btn0->sizePolicy().hasHeightForWidth());
        btn0->setSizePolicy(sizePolicy);
        clear = new QPushButton(Numpad);
        clear->setObjectName(QString::fromUtf8("clear"));
        clear->setGeometry(QRect(20, 230, 111, 43));
        sizePolicy.setHeightForWidth(clear->sizePolicy().hasHeightForWidth());
        clear->setSizePolicy(sizePolicy);
        enter = new QPushButton(Numpad);
        enter->setObjectName(QString::fromUtf8("enter"));
        enter->setGeometry(QRect(259, 230, 111, 43));
        sizePolicy.setHeightForWidth(enter->sizePolicy().hasHeightForWidth());
        enter->setSizePolicy(sizePolicy);
        btn7 = new QPushButton(Numpad);
        btn7->setObjectName(QString::fromUtf8("btn7"));
        btn7->setGeometry(QRect(20, 178, 111, 43));
        sizePolicy.setHeightForWidth(btn7->sizePolicy().hasHeightForWidth());
        btn7->setSizePolicy(sizePolicy);
        btn1 = new QPushButton(Numpad);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        btn1->setGeometry(QRect(20, 75, 111, 43));
        sizePolicy.setHeightForWidth(btn1->sizePolicy().hasHeightForWidth());
        btn1->setSizePolicy(sizePolicy);
        btn4 = new QPushButton(Numpad);
        btn4->setObjectName(QString::fromUtf8("btn4"));
        btn4->setGeometry(QRect(20, 127, 111, 42));
        sizePolicy.setHeightForWidth(btn4->sizePolicy().hasHeightForWidth());
        btn4->setSizePolicy(sizePolicy);
        btn8 = new QPushButton(Numpad);
        btn8->setObjectName(QString::fromUtf8("btn8"));
        btn8->setGeometry(QRect(140, 178, 110, 43));
        sizePolicy.setHeightForWidth(btn8->sizePolicy().hasHeightForWidth());
        btn8->setSizePolicy(sizePolicy);
        btn2 = new QPushButton(Numpad);
        btn2->setObjectName(QString::fromUtf8("btn2"));
        btn2->setGeometry(QRect(140, 75, 110, 43));
        sizePolicy.setHeightForWidth(btn2->sizePolicy().hasHeightForWidth());
        btn2->setSizePolicy(sizePolicy);

        retranslateUi(Numpad);

        QMetaObject::connectSlotsByName(Numpad);
    } // setupUi

    void retranslateUi(QDialog *Numpad)
    {
        Numpad->setWindowTitle(QCoreApplication::translate("Numpad", "Dialog", nullptr));
        btn5->setText(QCoreApplication::translate("Numpad", "5", nullptr));
        btn6->setText(QCoreApplication::translate("Numpad", "6", nullptr));
        btn9->setText(QCoreApplication::translate("Numpad", "9", nullptr));
        value->setText(QString());
        btn3->setText(QCoreApplication::translate("Numpad", "3", nullptr));
        btn0->setText(QCoreApplication::translate("Numpad", "0", nullptr));
        clear->setText(QCoreApplication::translate("Numpad", "CLEAR", nullptr));
        enter->setText(QCoreApplication::translate("Numpad", "ENTER", nullptr));
        btn7->setText(QCoreApplication::translate("Numpad", "7", nullptr));
        btn1->setText(QCoreApplication::translate("Numpad", "1", nullptr));
        btn4->setText(QCoreApplication::translate("Numpad", "4", nullptr));
        btn8->setText(QCoreApplication::translate("Numpad", "8", nullptr));
        btn2->setText(QCoreApplication::translate("Numpad", "2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Numpad: public Ui_Numpad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMPAD_H
