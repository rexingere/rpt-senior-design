/********************************************************************************
** Form generated from reading UI file 'manualmode.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANUALMODE_H
#define UI_MANUALMODE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ManualMode
{
public:
    QLabel *label;
    QPushButton *btn_therapy_mode;
    QPushButton *btn_test;
    QPushButton *btn_reset;
    QPushButton *btn_help;
    QPushButton *btn_back;

    void setupUi(QDialog *ManualMode)
    {
        if (ManualMode->objectName().isEmpty())
            ManualMode->setObjectName(QString::fromUtf8("ManualMode"));
        ManualMode->resize(1024, 800);
        ManualMode->setMinimumSize(QSize(1024, 800));
        label = new QLabel(ManualMode);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(390, 260, 401, 91));
        btn_therapy_mode = new QPushButton(ManualMode);
        btn_therapy_mode->setObjectName(QString::fromUtf8("btn_therapy_mode"));
        btn_therapy_mode->setGeometry(QRect(780, 500, 221, 81));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_therapy_mode->sizePolicy().hasHeightForWidth());
        btn_therapy_mode->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        btn_therapy_mode->setFont(font);
        btn_therapy_mode->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: white;\n"
"border-radius: 10px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(0, 0, 0), stop:1 rgb(153, 153, 153));\n"
"\n"
""));
        btn_test = new QPushButton(ManualMode);
        btn_test->setObjectName(QString::fromUtf8("btn_test"));
        btn_test->setGeometry(QRect(500, 400, 190, 80));
        sizePolicy.setHeightForWidth(btn_test->sizePolicy().hasHeightForWidth());
        btn_test->setSizePolicy(sizePolicy);
        btn_test->setFont(font);
        btn_test->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: white;\n"
"border-radius: 10px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(28, 109, 136), stop:1 rgb(100, 182, 209));\n"
"\n"
""));
        btn_reset = new QPushButton(ManualMode);
        btn_reset->setObjectName(QString::fromUtf8("btn_reset"));
        btn_reset->setGeometry(QRect(280, 400, 190, 80));
        sizePolicy.setHeightForWidth(btn_reset->sizePolicy().hasHeightForWidth());
        btn_reset->setSizePolicy(sizePolicy);
        btn_reset->setFont(font);
        btn_reset->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: white;\n"
"border-radius: 10px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(90, 91, 91), stop:1 rgb(166, 171, 172));\n"
"\n"
""));
        btn_help = new QPushButton(ManualMode);
        btn_help->setObjectName(QString::fromUtf8("btn_help"));
        btn_help->setGeometry(QRect(20, 20, 60, 60));
        btn_help->setStyleSheet(QString::fromUtf8("border:none;"));
        btn_back = new QPushButton(ManualMode);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(20, 515, 60, 60));
        btn_back->setStyleSheet(QString::fromUtf8("border:none;"));

        retranslateUi(ManualMode);

        QMetaObject::connectSlotsByName(ManualMode);
    } // setupUi

    void retranslateUi(QDialog *ManualMode)
    {
        ManualMode->setWindowTitle(QApplication::translate("ManualMode", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ManualMode", "Manual Mode", 0, QApplication::UnicodeUTF8));
        btn_therapy_mode->setText(QApplication::translate("ManualMode", "THERAPY MODE", 0, QApplication::UnicodeUTF8));
        btn_test->setText(QApplication::translate("ManualMode", "TEST", 0, QApplication::UnicodeUTF8));
        btn_reset->setText(QApplication::translate("ManualMode", "RESET", 0, QApplication::UnicodeUTF8));
        btn_help->setText(QString());
        btn_back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ManualMode: public Ui_ManualMode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANUALMODE_H
