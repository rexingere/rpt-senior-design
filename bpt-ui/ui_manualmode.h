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
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
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
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QFrame *line;
    QLabel *label_8;
    QComboBox *pressure1_combo;
    QComboBox *hold1_combo;
    QComboBox *pressure2_combo;
    QComboBox *hold2_combo;

    void setupUi(QDialog *ManualMode)
    {
        if (ManualMode->objectName().isEmpty())
            ManualMode->setObjectName(QString::fromUtf8("ManualMode"));
        ManualMode->resize(1024, 650);
        ManualMode->setMinimumSize(QSize(1024, 600));
        label = new QLabel(ManualMode);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 0, 401, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        btn_therapy_mode = new QPushButton(ManualMode);
        btn_therapy_mode->setObjectName(QString::fromUtf8("btn_therapy_mode"));
        btn_therapy_mode->setGeometry(QRect(780, 500, 221, 81));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_therapy_mode->sizePolicy().hasHeightForWidth());
        btn_therapy_mode->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("DejaVu Sans"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        btn_therapy_mode->setFont(font1);
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
        btn_test->setFont(font1);
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
        btn_reset->setFont(font1);
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
        label_3 = new QLabel(ManualMode);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(580, 90, 191, 31));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_4 = new QLabel(ManualMode);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(210, 90, 171, 41));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_5 = new QLabel(ManualMode);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(210, 150, 401, 31));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_6 = new QLabel(ManualMode);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(580, 150, 141, 31));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_7 = new QLabel(ManualMode);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(210, 270, 141, 31));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        line = new QFrame(ManualMode);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(480, 100, 16, 231));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label_8 = new QLabel(ManualMode);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(580, 270, 131, 31));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        pressure1_combo = new QComboBox(ManualMode);
        pressure1_combo->setObjectName(QString::fromUtf8("pressure1_combo"));
        pressure1_combo->setGeometry(QRect(210, 200, 121, 51));
        hold1_combo = new QComboBox(ManualMode);
        hold1_combo->setObjectName(QString::fromUtf8("hold1_combo"));
        hold1_combo->setGeometry(QRect(210, 310, 121, 51));
        pressure2_combo = new QComboBox(ManualMode);
        pressure2_combo->setObjectName(QString::fromUtf8("pressure2_combo"));
        pressure2_combo->setGeometry(QRect(580, 200, 121, 51));
        hold2_combo = new QComboBox(ManualMode);
        hold2_combo->setObjectName(QString::fromUtf8("hold2_combo"));
        hold2_combo->setGeometry(QRect(580, 310, 121, 51));
        label->raise();
        btn_therapy_mode->raise();
        btn_test->raise();
        btn_reset->raise();
        btn_help->raise();
        btn_back->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        line->raise();
        label_8->raise();
        pressure1_combo->raise();
        hold1_combo->raise();
        pressure2_combo->raise();
        hold2_combo->raise();
        label_3->raise();

        retranslateUi(ManualMode);

        QMetaObject::connectSlotsByName(ManualMode);
    } // setupUi

    void retranslateUi(QDialog *ManualMode)
    {
        ManualMode->setWindowTitle(QApplication::translate("ManualMode", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ManualMode", "<html><head/><body><p><span style=\" font-size:16pt; color:#1c6d88;\">Manual Mode</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        btn_therapy_mode->setText(QApplication::translate("ManualMode", "THERAPY MODE", 0, QApplication::UnicodeUTF8));
        btn_test->setText(QApplication::translate("ManualMode", "TEST", 0, QApplication::UnicodeUTF8));
        btn_reset->setText(QApplication::translate("ManualMode", "RESET", 0, QApplication::UnicodeUTF8));
        btn_help->setText(QString());
        btn_back->setText(QString());
        label_3->setText(QApplication::translate("ManualMode", "<html><head/><body><p><span style=\" font-size:16pt; color:#000000;\">Arm 2 Control</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ManualMode", "<html><head/><body><p><span style=\" font-size:16pt; color:#000000;\">Arm 1 Control</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ManualMode", "<html><head/><body><p><span style=\" color:#000000;\">Pressure</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ManualMode", "<html><head/><body><p><span style=\" color:#000000;\">Pressure</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("ManualMode", "<html><head/><body><p><span style=\" color:#000000;\">Hold Time</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("ManualMode", "<html><head/><body><p><span style=\" color:#000000;\">Hold Time</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ManualMode: public Ui_ManualMode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANUALMODE_H
