/********************************************************************************
** Form generated from reading UI file 'manualmode.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANUALMODE_H
#define UI_MANUALMODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ManualMode
{
public:
    QComboBox *hold2_combo;
    QPushButton *btn_test;
    QLabel *label;
    QComboBox *pressure2_combo;
    QPushButton *numpad_2;
    QComboBox *hold1_combo;
    QPushButton *btn_therapy_mode;
    QLabel *label_8;
    QPushButton *btn_help;
    QLabel *label_5;
    QPushButton *btn_back;
    QLabel *label_7;
    QPushButton *btn_reset;
    QComboBox *pressure1_combo;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_3;
    QPushButton *numpad_1;
    QFrame *line;
    QPushButton *numpad_3;
    QPushButton *numpad_4;

    void setupUi(QDialog *ManualMode)
    {
        if (ManualMode->objectName().isEmpty())
            ManualMode->setObjectName(QString::fromUtf8("ManualMode"));
        ManualMode->resize(1024, 600);
        hold2_combo = new QComboBox(ManualMode);
        hold2_combo->setObjectName(QString::fromUtf8("hold2_combo"));
        hold2_combo->setGeometry(QRect(580, 320, 121, 51));
        btn_test = new QPushButton(ManualMode);
        btn_test->setObjectName(QString::fromUtf8("btn_test"));
        btn_test->setGeometry(QRect(500, 410, 190, 80));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_test->sizePolicy().hasHeightForWidth());
        btn_test->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        btn_test->setFont(font);
        btn_test->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: white;\n"
"border-radius: 10px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(28, 109, 136), stop:1 rgb(100, 182, 209));\n"
"\n"
""));
        label = new QLabel(ManualMode);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 10, 401, 91));
        QFont font1;
        font1.setFamily(QString::fromUtf8("DejaVu Sans"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        pressure2_combo = new QComboBox(ManualMode);
        pressure2_combo->setObjectName(QString::fromUtf8("pressure2_combo"));
        pressure2_combo->setGeometry(QRect(580, 210, 121, 51));
        numpad_2 = new QPushButton(ManualMode);
        numpad_2->setObjectName(QString::fromUtf8("numpad_2"));
        numpad_2->setGeometry(QRect(710, 210, 61, 51));
        numpad_2->setStyleSheet(QString::fromUtf8("border:none;"));
        hold1_combo = new QComboBox(ManualMode);
        hold1_combo->setObjectName(QString::fromUtf8("hold1_combo"));
        hold1_combo->setGeometry(QRect(210, 320, 121, 51));
        btn_therapy_mode = new QPushButton(ManualMode);
        btn_therapy_mode->setObjectName(QString::fromUtf8("btn_therapy_mode"));
        btn_therapy_mode->setGeometry(QRect(780, 510, 221, 81));
        sizePolicy.setHeightForWidth(btn_therapy_mode->sizePolicy().hasHeightForWidth());
        btn_therapy_mode->setSizePolicy(sizePolicy);
        btn_therapy_mode->setFont(font);
        btn_therapy_mode->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: white;\n"
"border-radius: 10px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(0, 0, 0), stop:1 rgb(153, 153, 153));\n"
"\n"
""));
        label_8 = new QLabel(ManualMode);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(580, 280, 131, 31));
        label_8->setFont(font1);
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        btn_help = new QPushButton(ManualMode);
        btn_help->setObjectName(QString::fromUtf8("btn_help"));
        btn_help->setGeometry(QRect(20, 30, 60, 60));
        btn_help->setStyleSheet(QString::fromUtf8("border:none;"));
        label_5 = new QLabel(ManualMode);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(210, 160, 401, 31));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        btn_back = new QPushButton(ManualMode);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(20, 520, 60, 60));
        btn_back->setStyleSheet(QString::fromUtf8("border:none;"));
        label_7 = new QLabel(ManualMode);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(210, 280, 141, 31));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        btn_reset = new QPushButton(ManualMode);
        btn_reset->setObjectName(QString::fromUtf8("btn_reset"));
        btn_reset->setGeometry(QRect(280, 410, 190, 80));
        sizePolicy.setHeightForWidth(btn_reset->sizePolicy().hasHeightForWidth());
        btn_reset->setSizePolicy(sizePolicy);
        btn_reset->setFont(font);
        btn_reset->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: white;\n"
"border-radius: 10px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(90, 91, 91), stop:1 rgb(166, 171, 172));\n"
"\n"
""));
        pressure1_combo = new QComboBox(ManualMode);
        pressure1_combo->setObjectName(QString::fromUtf8("pressure1_combo"));
        pressure1_combo->setGeometry(QRect(210, 210, 121, 51));
        label_4 = new QLabel(ManualMode);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(210, 100, 171, 41));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_6 = new QLabel(ManualMode);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(580, 160, 141, 31));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3 = new QLabel(ManualMode);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(580, 100, 191, 31));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        numpad_1 = new QPushButton(ManualMode);
        numpad_1->setObjectName(QString::fromUtf8("numpad_1"));
        numpad_1->setGeometry(QRect(340, 210, 61, 51));
        numpad_1->setStyleSheet(QString::fromUtf8("border:none;"));
        line = new QFrame(ManualMode);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(480, 110, 16, 231));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        numpad_3 = new QPushButton(ManualMode);
        numpad_3->setObjectName(QString::fromUtf8("numpad_3"));
        numpad_3->setGeometry(QRect(340, 320, 61, 51));
        numpad_3->setStyleSheet(QString::fromUtf8("border:none;"));
        numpad_4 = new QPushButton(ManualMode);
        numpad_4->setObjectName(QString::fromUtf8("numpad_4"));
        numpad_4->setGeometry(QRect(710, 320, 61, 51));
        numpad_4->setStyleSheet(QString::fromUtf8("border:none;"));

        retranslateUi(ManualMode);

        QMetaObject::connectSlotsByName(ManualMode);
    } // setupUi

    void retranslateUi(QDialog *ManualMode)
    {
        ManualMode->setWindowTitle(QCoreApplication::translate("ManualMode", "Dialog", nullptr));
        btn_test->setText(QCoreApplication::translate("ManualMode", "TEST", nullptr));
        label->setText(QCoreApplication::translate("ManualMode", "<html><head/><body><p><span style=\" font-size:16pt; color:#1c6d88;\">Manual Mode</span></p></body></html>", nullptr));
        numpad_2->setText(QString());
        btn_therapy_mode->setText(QCoreApplication::translate("ManualMode", "THERAPY MODE", nullptr));
        label_8->setText(QCoreApplication::translate("ManualMode", "<html><head/><body><p><span style=\" color:#000000;\">Hold Time</span></p></body></html>", nullptr));
        btn_help->setText(QString());
        label_5->setText(QCoreApplication::translate("ManualMode", "<html><head/><body><p><span style=\" color:#000000;\">Pressure</span></p></body></html>", nullptr));
        btn_back->setText(QString());
        label_7->setText(QCoreApplication::translate("ManualMode", "<html><head/><body><p><span style=\" color:#000000;\">Hold Time</span></p></body></html>", nullptr));
        btn_reset->setText(QCoreApplication::translate("ManualMode", "RESET", nullptr));
        label_4->setText(QCoreApplication::translate("ManualMode", "<html><head/><body><p><span style=\" font-size:16pt; color:#000000;\">Arm 1 Control</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("ManualMode", "<html><head/><body><p><span style=\" color:#000000;\">Pressure</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("ManualMode", "<html><head/><body><p><span style=\" font-size:16pt; color:#000000;\">Arm 2 Control</span></p></body></html>", nullptr));
        numpad_1->setText(QString());
        numpad_3->setText(QString());
        numpad_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ManualMode: public Ui_ManualMode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANUALMODE_H
