/********************************************************************************
** Form generated from reading UI file 'therapy.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THERAPY_H
#define UI_THERAPY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Therapy
{
public:
    QLabel *label_6;
    QComboBox *dropdown_pulses;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLabel *img_logo;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_8;
    QLineEdit *lineEdit_4;
    QPushButton *btn_help;
    QLineEdit *lineEdit_2;
    QPushButton *btn_back;
    QFrame *line;
    QLabel *label;
    QPushButton *btn_start_therapy;
    QLabel *label_3;
    QLabel *img_dots;
    QPushButton *btn_stop;
    QLabel *label_9;
    QFrame *line_2;
    QLabel *label_10;
    QLabel *label_7;
    QComboBox *dropdown_cycle_time;
    QLabel *label_2;

    void setupUi(QDialog *Therapy)
    {
        if (Therapy->objectName().isEmpty())
            Therapy->setObjectName(QString::fromUtf8("Therapy"));
        Therapy->resize(1105, 695);
        label_6 = new QLabel(Therapy);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(400, 410, 131, 31));
        dropdown_pulses = new QComboBox(Therapy);
        dropdown_pulses->setObjectName(QString::fromUtf8("dropdown_pulses"));
        dropdown_pulses->setGeometry(QRect(760, 450, 73, 22));
        lineEdit = new QLineEdit(Therapy);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(30, 320, 113, 22));
        lineEdit_3 = new QLineEdit(Therapy);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setEnabled(false);
        lineEdit_3->setGeometry(QRect(400, 450, 113, 22));
        img_logo = new QLabel(Therapy);
        img_logo->setObjectName(QString::fromUtf8("img_logo"));
        img_logo->setGeometry(QRect(780, 30, 281, 71));
        label_5 = new QLabel(Therapy);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(400, 160, 361, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        label_5->setFont(font);
        label_4 = new QLabel(Therapy);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 170, 331, 51));
        label_4->setFont(font);
        label_8 = new QLabel(Therapy);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(760, 410, 201, 31));
        lineEdit_4 = new QLineEdit(Therapy);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setEnabled(false);
        lineEdit_4->setGeometry(QRect(400, 320, 113, 22));
        btn_help = new QPushButton(Therapy);
        btn_help->setObjectName(QString::fromUtf8("btn_help"));
        btn_help->setGeometry(QRect(0, 20, 93, 61));
        btn_help->setStyleSheet(QString::fromUtf8("border:none;\n"
""));
        lineEdit_2 = new QLineEdit(Therapy);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setEnabled(false);
        lineEdit_2->setGeometry(QRect(30, 440, 113, 22));
        btn_back = new QPushButton(Therapy);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(10, 600, 71, 51));
        btn_back->setStyleSheet(QString::fromUtf8("border:none;"));
        line = new QFrame(Therapy);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(350, 180, 20, 311));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(Therapy);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 280, 131, 31));
        btn_start_therapy = new QPushButton(Therapy);
        btn_start_therapy->setObjectName(QString::fromUtf8("btn_start_therapy"));
        btn_start_therapy->setGeometry(QRect(870, 550, 181, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        btn_start_therapy->setFont(font1);
        btn_start_therapy->setStyleSheet(QString::fromUtf8("background-color: #1c6d88;\n"
"color: white;\n"
"\n"
""));
        label_3 = new QLabel(Therapy);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 400, 131, 31));
        img_dots = new QLabel(Therapy);
        img_dots->setObjectName(QString::fromUtf8("img_dots"));
        img_dots->setGeometry(QRect(890, 610, 251, 31));
        img_dots->setPixmap(QPixmap(QString::fromUtf8("../../../trial1/images/imgDots.png")));
        btn_stop = new QPushButton(Therapy);
        btn_stop->setObjectName(QString::fromUtf8("btn_stop"));
        btn_stop->setGeometry(QRect(30, 550, 181, 41));
        btn_stop->setFont(font1);
        btn_stop->setStyleSheet(QString::fromUtf8("background-color: #ff1616;\n"
"color: white;\n"
"\n"
""));
        label_9 = new QLabel(Therapy);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(760, 280, 131, 31));
        line_2 = new QFrame(Therapy);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(720, 180, 20, 311));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_10 = new QLabel(Therapy);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(760, 160, 361, 81));
        label_10->setFont(font);
        label_7 = new QLabel(Therapy);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(400, 280, 131, 31));
        dropdown_cycle_time = new QComboBox(Therapy);
        dropdown_cycle_time->setObjectName(QString::fromUtf8("dropdown_cycle_time"));
        dropdown_cycle_time->setGeometry(QRect(760, 320, 73, 22));
        label_2 = new QLabel(Therapy);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 25, 311, 51));
        label_2->setFont(font);

        retranslateUi(Therapy);

        QMetaObject::connectSlotsByName(Therapy);
    } // setupUi

    void retranslateUi(QDialog *Therapy)
    {
        Therapy->setWindowTitle(QCoreApplication::translate("Therapy", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("Therapy", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">HOLD TIME</span></p></body></html>", nullptr));
        img_logo->setText(QCoreApplication::translate("Therapy", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("Therapy", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600;\">ARM 2 CONTROL</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Therapy", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600; color:#000000;\">ARM 1 CONTROL</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("Therapy", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">PULSES PER CYCLE</span></p></body></html>", nullptr));
        btn_help->setText(QString());
        btn_back->setText(QString());
        label->setText(QCoreApplication::translate("Therapy", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">PRESSURE</span></p></body></html>", nullptr));
        btn_start_therapy->setText(QCoreApplication::translate("Therapy", "BEGIN THERAPY", nullptr));
        label_3->setText(QCoreApplication::translate("Therapy", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">HOLD TIME</span></p></body></html>", nullptr));
        img_dots->setText(QString());
        btn_stop->setText(QCoreApplication::translate("Therapy", "STOP", nullptr));
        label_9->setText(QCoreApplication::translate("Therapy", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">CYCLE TIME</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("Therapy", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600;\">CYCLE CONTROL</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("Therapy", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">PRESSURE</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Therapy", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600; color:#1c6d88;\">THERAPY MODE</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Therapy: public Ui_Therapy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THERAPY_H
