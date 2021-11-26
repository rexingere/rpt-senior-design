/********************************************************************************
** Form generated from reading UI file 'numpad.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMPAD_H
#define UI_NUMPAD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Numpad
{
public:
    QGridLayout *gridLayout;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btn7;
    QPushButton *btn8;
    QPushButton *btn9;
    QPushButton *clear;
    QPushButton *btn0;
    QPushButton *enter;
    QLabel *value;

    void setupUi(QDialog *Numpad)
    {
        if (Numpad->objectName().isEmpty())
            Numpad->setObjectName(QString::fromUtf8("Numpad"));
        Numpad->resize(400, 300);
        gridLayout = new QGridLayout(Numpad);
        gridLayout->setSpacing(9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(25, 25, 25, 25);
        btn1 = new QPushButton(Numpad);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn1->sizePolicy().hasHeightForWidth());
        btn1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn1, 1, 0, 1, 1);

        btn2 = new QPushButton(Numpad);
        btn2->setObjectName(QString::fromUtf8("btn2"));
        sizePolicy.setHeightForWidth(btn2->sizePolicy().hasHeightForWidth());
        btn2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn2, 1, 1, 1, 1);

        btn3 = new QPushButton(Numpad);
        btn3->setObjectName(QString::fromUtf8("btn3"));
        sizePolicy.setHeightForWidth(btn3->sizePolicy().hasHeightForWidth());
        btn3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn3, 1, 2, 1, 1);

        btn4 = new QPushButton(Numpad);
        btn4->setObjectName(QString::fromUtf8("btn4"));
        sizePolicy.setHeightForWidth(btn4->sizePolicy().hasHeightForWidth());
        btn4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn4, 2, 0, 1, 1);

        btn5 = new QPushButton(Numpad);
        btn5->setObjectName(QString::fromUtf8("btn5"));
        sizePolicy.setHeightForWidth(btn5->sizePolicy().hasHeightForWidth());
        btn5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn5, 2, 1, 1, 1);

        btn6 = new QPushButton(Numpad);
        btn6->setObjectName(QString::fromUtf8("btn6"));
        sizePolicy.setHeightForWidth(btn6->sizePolicy().hasHeightForWidth());
        btn6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn6, 2, 2, 1, 1);

        btn7 = new QPushButton(Numpad);
        btn7->setObjectName(QString::fromUtf8("btn7"));
        sizePolicy.setHeightForWidth(btn7->sizePolicy().hasHeightForWidth());
        btn7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn7, 3, 0, 1, 1);

        btn8 = new QPushButton(Numpad);
        btn8->setObjectName(QString::fromUtf8("btn8"));
        sizePolicy.setHeightForWidth(btn8->sizePolicy().hasHeightForWidth());
        btn8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn8, 3, 1, 1, 1);

        btn9 = new QPushButton(Numpad);
        btn9->setObjectName(QString::fromUtf8("btn9"));
        sizePolicy.setHeightForWidth(btn9->sizePolicy().hasHeightForWidth());
        btn9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn9, 3, 2, 1, 1);

        clear = new QPushButton(Numpad);
        clear->setObjectName(QString::fromUtf8("clear"));
        sizePolicy.setHeightForWidth(clear->sizePolicy().hasHeightForWidth());
        clear->setSizePolicy(sizePolicy);

        gridLayout->addWidget(clear, 4, 0, 1, 1);

        btn0 = new QPushButton(Numpad);
        btn0->setObjectName(QString::fromUtf8("btn0"));
        sizePolicy.setHeightForWidth(btn0->sizePolicy().hasHeightForWidth());
        btn0->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn0, 4, 1, 1, 1);

        enter = new QPushButton(Numpad);
        enter->setObjectName(QString::fromUtf8("enter"));
        sizePolicy.setHeightForWidth(enter->sizePolicy().hasHeightForWidth());
        enter->setSizePolicy(sizePolicy);

        gridLayout->addWidget(enter, 4, 2, 1, 1);

        value = new QLabel(Numpad);
        value->setObjectName(QString::fromUtf8("value"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(value->sizePolicy().hasHeightForWidth());
        value->setSizePolicy(sizePolicy1);
        value->setStyleSheet(QString::fromUtf8("border:1px solid black;"));

        gridLayout->addWidget(value, 0, 0, 1, 3);


        retranslateUi(Numpad);

        QMetaObject::connectSlotsByName(Numpad);
    } // setupUi

    void retranslateUi(QDialog *Numpad)
    {
        Numpad->setWindowTitle(QApplication::translate("Numpad", "Dialog", 0, QApplication::UnicodeUTF8));
        btn1->setText(QApplication::translate("Numpad", "1", 0, QApplication::UnicodeUTF8));
        btn2->setText(QApplication::translate("Numpad", "2", 0, QApplication::UnicodeUTF8));
        btn3->setText(QApplication::translate("Numpad", "3", 0, QApplication::UnicodeUTF8));
        btn4->setText(QApplication::translate("Numpad", "4", 0, QApplication::UnicodeUTF8));
        btn5->setText(QApplication::translate("Numpad", "5", 0, QApplication::UnicodeUTF8));
        btn6->setText(QApplication::translate("Numpad", "6", 0, QApplication::UnicodeUTF8));
        btn7->setText(QApplication::translate("Numpad", "7", 0, QApplication::UnicodeUTF8));
        btn8->setText(QApplication::translate("Numpad", "8", 0, QApplication::UnicodeUTF8));
        btn9->setText(QApplication::translate("Numpad", "9", 0, QApplication::UnicodeUTF8));
        clear->setText(QApplication::translate("Numpad", "CLEAR", 0, QApplication::UnicodeUTF8));
        btn0->setText(QApplication::translate("Numpad", "0", 0, QApplication::UnicodeUTF8));
        enter->setText(QApplication::translate("Numpad", "ENTER", 0, QApplication::UnicodeUTF8));
        value->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Numpad: public Ui_Numpad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMPAD_H
