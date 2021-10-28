/********************************************************************************
** Form generated from reading UI file 'therapymode.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THERAPYMODE_H
#define UI_THERAPYMODE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TherapyMode
{
public:
    QLabel *label;
    QPushButton *btn_stop;
    QPushButton *btn_therapy;
    QPushButton *btn_help;
    QPushButton *btn_back;

    void setupUi(QDialog *TherapyMode)
    {
        if (TherapyMode->objectName().isEmpty())
            TherapyMode->setObjectName(QString::fromUtf8("TherapyMode"));
        TherapyMode->resize(1024, 668);
        TherapyMode->setMinimumSize(QSize(1024, 668));
        label = new QLabel(TherapyMode);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(410, 310, 311, 81));
        btn_stop = new QPushButton(TherapyMode);
        btn_stop->setObjectName(QString::fromUtf8("btn_stop"));
        btn_stop->setGeometry(QRect(110, 495, 221, 81));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_stop->sizePolicy().hasHeightForWidth());
        btn_stop->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        btn_stop->setFont(font);
        btn_stop->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: white;\n"
"border-radius: 10px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(202, 0, 42), stop:1 rgb(255, 17, 0));\n"
"\n"
""));
        btn_therapy = new QPushButton(TherapyMode);
        btn_therapy->setObjectName(QString::fromUtf8("btn_therapy"));
        btn_therapy->setGeometry(QRect(770, 495, 221, 81));
        sizePolicy.setHeightForWidth(btn_therapy->sizePolicy().hasHeightForWidth());
        btn_therapy->setSizePolicy(sizePolicy);
        btn_therapy->setFont(font);
        btn_therapy->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: white;\n"
"border-radius: 10px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(28, 109, 136), stop:1 rgb(100, 182, 209));\n"
"\n"
""));
        btn_help = new QPushButton(TherapyMode);
        btn_help->setObjectName(QString::fromUtf8("btn_help"));
        btn_help->setGeometry(QRect(20, 20, 60, 60));
        btn_help->setStyleSheet(QString::fromUtf8("border:none;"));
        btn_back = new QPushButton(TherapyMode);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(20, 515, 60, 60));
        btn_back->setStyleSheet(QString::fromUtf8("border:none;"));

        retranslateUi(TherapyMode);

        QMetaObject::connectSlotsByName(TherapyMode);
    } // setupUi

    void retranslateUi(QDialog *TherapyMode)
    {
        TherapyMode->setWindowTitle(QApplication::translate("TherapyMode", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TherapyMode", "Therapy Mode", 0, QApplication::UnicodeUTF8));
        btn_stop->setText(QApplication::translate("TherapyMode", "STOP", 0, QApplication::UnicodeUTF8));
        btn_therapy->setText(QApplication::translate("TherapyMode", "BEGIN THERAPY", 0, QApplication::UnicodeUTF8));
        btn_help->setText(QString());
        btn_back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TherapyMode: public Ui_TherapyMode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THERAPYMODE_H
