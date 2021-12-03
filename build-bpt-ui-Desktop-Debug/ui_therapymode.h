/********************************************************************************
** Form generated from reading UI file 'therapymode.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THERAPYMODE_H
#define UI_THERAPYMODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TherapyMode
{
public:
    QPushButton *btn_stop;
    QPushButton *btn_therapy;
    QPushButton *btn_help;
    QPushButton *btn_back;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_7;
    QFrame *line;
    QLabel *label_6;
    QFrame *line_2;
    QComboBox *cycles_combo;
    QLabel *label_9;
    QComboBox *pulses_combo;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *pressure1;
    QLabel *hold1;
    QLabel *pressure2;
    QLabel *hold2;

    void setupUi(QDialog *TherapyMode)
    {
        if (TherapyMode->objectName().isEmpty())
            TherapyMode->setObjectName(QString::fromUtf8("TherapyMode"));
        TherapyMode->resize(1024, 650);
        TherapyMode->setMinimumSize(QSize(1024, 600));
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
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(255, 0, 40), stop:1 rgb(255, 17, 0));\n"
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
        label_2 = new QLabel(TherapyMode);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 0, 401, 91));
        QFont font1;
        font1.setFamily(QString::fromUtf8("DejaVu Sans"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_5 = new QLabel(TherapyMode);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 220, 121, 21));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3 = new QLabel(TherapyMode);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(410, 160, 181, 31));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_4 = new QLabel(TherapyMode);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 160, 181, 31));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_8 = new QLabel(TherapyMode);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(410, 330, 131, 31));
        label_8->setFont(font1);
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_7 = new QLabel(TherapyMode);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 330, 141, 21));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        line = new QFrame(TherapyMode);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(310, 160, 16, 231));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label_6 = new QLabel(TherapyMode);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(410, 220, 111, 31));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        line_2 = new QFrame(TherapyMode);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(670, 160, 16, 231));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        cycles_combo = new QComboBox(TherapyMode);
        cycles_combo->setObjectName(QString::fromUtf8("cycles_combo"));
        cycles_combo->setGeometry(QRect(710, 370, 121, 51));
        label_9 = new QLabel(TherapyMode);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(710, 330, 401, 31));
        label_9->setFont(font1);
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        pulses_combo = new QComboBox(TherapyMode);
        pulses_combo->setObjectName(QString::fromUtf8("pulses_combo"));
        pulses_combo->setGeometry(QRect(710, 260, 121, 51));
        label_10 = new QLabel(TherapyMode);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(710, 220, 401, 31));
        label_10->setFont(font1);
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_11 = new QLabel(TherapyMode);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(710, 160, 401, 31));
        label_11->setFont(font1);
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        pressure1 = new QLabel(TherapyMode);
        pressure1->setObjectName(QString::fromUtf8("pressure1"));
        pressure1->setGeometry(QRect(40, 260, 101, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("DejaVu Sans"));
        font2.setPointSize(20);
        font2.setBold(false);
        font2.setWeight(50);
        pressure1->setFont(font2);
        pressure1->setStyleSheet(QString::fromUtf8("border:1px solid black;"));
        hold1 = new QLabel(TherapyMode);
        hold1->setObjectName(QString::fromUtf8("hold1"));
        hold1->setGeometry(QRect(40, 370, 101, 51));
        hold1->setFont(font2);
        hold1->setStyleSheet(QString::fromUtf8("border:1px solid black;"));
        pressure2 = new QLabel(TherapyMode);
        pressure2->setObjectName(QString::fromUtf8("pressure2"));
        pressure2->setGeometry(QRect(410, 260, 101, 51));
        pressure2->setFont(font2);
        pressure2->setStyleSheet(QString::fromUtf8("border:1px solid black;"));
        hold2 = new QLabel(TherapyMode);
        hold2->setObjectName(QString::fromUtf8("hold2"));
        hold2->setGeometry(QRect(410, 370, 101, 51));
        hold2->setFont(font2);
        hold2->setStyleSheet(QString::fromUtf8("border:1px solid black;"));

        retranslateUi(TherapyMode);

        QMetaObject::connectSlotsByName(TherapyMode);
    } // setupUi

    void retranslateUi(QDialog *TherapyMode)
    {
        TherapyMode->setWindowTitle(QCoreApplication::translate("TherapyMode", "Dialog", nullptr));
        btn_stop->setText(QCoreApplication::translate("TherapyMode", "STOP", nullptr));
        btn_therapy->setText(QCoreApplication::translate("TherapyMode", "BEGIN THERAPY", nullptr));
        btn_help->setText(QString());
        btn_back->setText(QString());
        label_2->setText(QCoreApplication::translate("TherapyMode", "<html><head/><body><p><span style=\" font-size:16pt; color:#1c6d88;\">Therapy Mode</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("TherapyMode", "<html><head/><body><p><span style=\" color:#000000;\">Pressure</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("TherapyMode", "<html><head/><body><p><span style=\" font-size:16pt; color:#000000;\">Arm 2 Control</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("TherapyMode", "<html><head/><body><p><span style=\" font-size:16pt; color:#000000;\">Arm 1 Control</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("TherapyMode", "<html><head/><body><p><span style=\" color:#000000;\">Hold Time</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("TherapyMode", "<html><head/><body><p><span style=\" color:#000000;\">Hold Time</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("TherapyMode", "<html><head/><body><p><span style=\" color:#000000;\">Pressure</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("TherapyMode", "<html><head/><body><p><span style=\" color:#000000;\">Number of Cycles</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("TherapyMode", "<html><head/><body><p><span style=\" color:#000000;\">Pulses per Cycle</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("TherapyMode", "<html><head/><body><p><span style=\" font-size:16pt; color:#000000;\">Cycle Control</span></p></body></html>", nullptr));
        pressure1->setText(QCoreApplication::translate("TherapyMode", "TextLabel", nullptr));
        hold1->setText(QCoreApplication::translate("TherapyMode", "TextLabel", nullptr));
        pressure2->setText(QCoreApplication::translate("TherapyMode", "TextLabel", nullptr));
        hold2->setText(QCoreApplication::translate("TherapyMode", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TherapyMode: public Ui_TherapyMode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THERAPYMODE_H
