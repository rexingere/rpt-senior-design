/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label_2;
    QLabel *img_logo;
    QLabel *label_4;
    QLabel *label_5;
    QFrame *line;
    QPushButton *btn_help;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *btn_reset;
    QPushButton *btn_test;
    QPushButton *btn_therapy_mode;
    QPushButton *btn_back;
    QComboBox *dropdown_pressure_1;
    QComboBox *dropdown_hold_1;
    QComboBox *dropdown_pressure_2;
    QComboBox *dropdown_hold_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(1105, 695);
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 25, 311, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        label_2->setFont(font);
        img_logo = new QLabel(Dialog);
        img_logo->setObjectName(QString::fromUtf8("img_logo"));
        img_logo->setGeometry(QRect(780, 30, 271, 71));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 180, 331, 51));
        label_4->setFont(font);
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(440, 170, 361, 81));
        label_5->setFont(font);
        line = new QFrame(Dialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(370, 190, 20, 311));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        btn_help = new QPushButton(Dialog);
        btn_help->setObjectName(QString::fromUtf8("btn_help"));
        btn_help->setGeometry(QRect(0, 20, 93, 61));
        btn_help->setStyleSheet(QString::fromUtf8("border:none;\n"
""));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 290, 131, 31));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 410, 131, 31));
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(440, 400, 131, 31));
        label_7 = new QLabel(Dialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(440, 280, 131, 31));
        btn_reset = new QPushButton(Dialog);
        btn_reset->setObjectName(QString::fromUtf8("btn_reset"));
        btn_reset->setGeometry(QRect(210, 540, 151, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        btn_reset->setFont(font1);
        btn_reset->setStyleSheet(QString::fromUtf8("background-color: #C6C4C4;\n"
"color: white;\n"
"\n"
""));
        btn_test = new QPushButton(Dialog);
        btn_test->setObjectName(QString::fromUtf8("btn_test"));
        btn_test->setGeometry(QRect(400, 540, 151, 41));
        btn_test->setFont(font1);
        btn_test->setStyleSheet(QString::fromUtf8("background-color: #1C6D88;\n"
"color: white;\n"
"\n"
""));
        btn_therapy_mode = new QPushButton(Dialog);
        btn_therapy_mode->setObjectName(QString::fromUtf8("btn_therapy_mode"));
        btn_therapy_mode->setGeometry(QRect(890, 620, 181, 41));
        btn_therapy_mode->setFont(font1);
        btn_therapy_mode->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: white;\n"
"\n"
""));
        btn_back = new QPushButton(Dialog);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(10, 600, 101, 71));
        btn_back->setStyleSheet(QString::fromUtf8("border:none;"));
        dropdown_pressure_1 = new QComboBox(Dialog);
        dropdown_pressure_1->setObjectName(QString::fromUtf8("dropdown_pressure_1"));
        dropdown_pressure_1->setGeometry(QRect(30, 330, 73, 22));
        dropdown_hold_1 = new QComboBox(Dialog);
        dropdown_hold_1->setObjectName(QString::fromUtf8("dropdown_hold_1"));
        dropdown_hold_1->setGeometry(QRect(30, 450, 73, 22));
        dropdown_pressure_2 = new QComboBox(Dialog);
        dropdown_pressure_2->setObjectName(QString::fromUtf8("dropdown_pressure_2"));
        dropdown_pressure_2->setGeometry(QRect(440, 320, 73, 22));
        dropdown_hold_2 = new QComboBox(Dialog);
        dropdown_hold_2->setObjectName(QString::fromUtf8("dropdown_hold_2"));
        dropdown_hold_2->setGeometry(QRect(440, 440, 73, 22));
        btn_back->raise();
        label_2->raise();
        img_logo->raise();
        label_4->raise();
        label_5->raise();
        line->raise();
        btn_help->raise();
        label->raise();
        label_3->raise();
        label_6->raise();
        label_7->raise();
        btn_reset->raise();
        btn_test->raise();
        btn_therapy_mode->raise();
        dropdown_pressure_1->raise();
        dropdown_hold_1->raise();
        dropdown_pressure_2->raise();
        dropdown_hold_2->raise();

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600; color:#1c6d88;\">MANUAL MODE</span></p></body></html>", nullptr));
        img_logo->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600; color:#000000;\">ARM 1 CONTROL</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600;\">ARM 2 CONTROL</span></p></body></html>", nullptr));
        btn_help->setText(QString());
        label->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">PRESSURE</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">HOLD TIME</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">HOLD TIME</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">PRESSURE</span></p></body></html>", nullptr));
        btn_reset->setText(QCoreApplication::translate("Dialog", "RESET", nullptr));
        btn_test->setText(QCoreApplication::translate("Dialog", "TEST", nullptr));
        btn_therapy_mode->setText(QCoreApplication::translate("Dialog", "BEGIN THERAPY", nullptr));
        btn_back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
