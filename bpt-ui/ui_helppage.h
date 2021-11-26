/********************************************************************************
** Form generated from reading UI file 'helppage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPPAGE_H
#define UI_HELPPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelpPage
{
public:
    QPushButton *btn_back;
    QTabWidget *iconTabs;
    QWidget *tab;
    QLabel *label_2;
    QLabel *label_6;
    QWidget *tab_2;
    QLabel *label_3;
    QLabel *label_12;
    QWidget *tab_9;
    QLabel *label_11;
    QWidget *tab_3;
    QLabel *label_4;
    QWidget *tab_4;
    QLabel *label_5;
    QWidget *tab_5;
    QLabel *label_7;
    QWidget *tab_6;
    QLabel *label_8;
    QWidget *tab_7;
    QLabel *label_9;
    QWidget *tab_8;
    QLabel *label_10;
    QPushButton *btn_troubleshoot;
    QLabel *label;

    void setupUi(QDialog *HelpPage)
    {
        if (HelpPage->objectName().isEmpty())
            HelpPage->setObjectName(QString::fromUtf8("HelpPage"));
        HelpPage->resize(1024, 600);
        HelpPage->setMinimumSize(QSize(1024, 600));
        btn_back = new QPushButton(HelpPage);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(20, 500, 60, 60));
        btn_back->setStyleSheet(QString::fromUtf8("border:none;"));
        iconTabs = new QTabWidget(HelpPage);
        iconTabs->setObjectName(QString::fromUtf8("iconTabs"));
        iconTabs->setGeometry(QRect(40, 130, 911, 351));
        QFont font;
        font.setPointSize(15);
        iconTabs->setFont(font);
        iconTabs->setStyleSheet(QString::fromUtf8("padding-left: 10px;"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 50, 751, 181));
        QFont font1;
        font1.setPointSize(17);
        label_2->setFont(font1);
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 50, 751, 181));
        QFont font2;
        font2.setPointSize(16);
        label_6->setFont(font2);
        iconTabs->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 50, 751, 181));
        label_3->setFont(font2);
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(140, 70, 611, 141));
        label_12->setFont(font2);
        iconTabs->addTab(tab_2, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        label_11 = new QLabel(tab_9);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(60, 80, 751, 111));
        label_11->setFont(font2);
        iconTabs->addTab(tab_9, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 80, 651, 111));
        label_4->setFont(font2);
        iconTabs->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        label_5 = new QLabel(tab_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 90, 761, 111));
        label_5->setFont(font2);
        iconTabs->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        label_7 = new QLabel(tab_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(90, 70, 691, 131));
        label_7->setFont(font2);
        iconTabs->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        label_8 = new QLabel(tab_6);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 70, 811, 121));
        label_8->setFont(font2);
        iconTabs->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        label_9 = new QLabel(tab_7);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(60, 70, 771, 141));
        label_9->setFont(font2);
        iconTabs->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        label_10 = new QLabel(tab_8);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(50, 70, 791, 131));
        label_10->setFont(font2);
        iconTabs->addTab(tab_8, QString());
        btn_troubleshoot = new QPushButton(HelpPage);
        btn_troubleshoot->setObjectName(QString::fromUtf8("btn_troubleshoot"));
        btn_troubleshoot->setGeometry(QRect(800, 30, 181, 61));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_troubleshoot->sizePolicy().hasHeightForWidth());
        btn_troubleshoot->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamily(QString::fromUtf8("DejaVu Sans"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        btn_troubleshoot->setFont(font3);
        btn_troubleshoot->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: white;\n"
"border-radius: 10px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(28, 109, 136), stop:1 rgb(100, 182, 209));\n"
"\n"
""));
        label = new QLabel(HelpPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 70, 441, 22));
        QFont font4;
        font4.setPointSize(17);
        font4.setBold(true);
        font4.setWeight(75);
        label->setFont(font4);

        retranslateUi(HelpPage);

        iconTabs->setCurrentIndex(7);


        QMetaObject::connectSlotsByName(HelpPage);
    } // setupUi

    void retranslateUi(QDialog *HelpPage)
    {
        HelpPage->setWindowTitle(QApplication::translate("HelpPage", "Dialog", 0, QApplication::UnicodeUTF8));
        btn_back->setText(QString());
        label_2->setText(QString());
        label_6->setText(QApplication::translate("HelpPage", "Pressing the exit button will close the application and shutdown the system.", 0, QApplication::UnicodeUTF8));
        iconTabs->setTabText(iconTabs->indexOf(tab), QString());
        label_3->setText(QString());
        label_12->setText(QApplication::translate("HelpPage", "Pressing the back button will return the the previous page.\n"
"Previous setting will be saved.", 0, QApplication::UnicodeUTF8));
        iconTabs->setTabText(iconTabs->indexOf(tab_2), QString());
        label_11->setText(QApplication::translate("HelpPage", "Select to proceed to Manual Mode.\n"
"Manual Mode is intended to test out the pressure and hold time for therapy.", 0, QApplication::UnicodeUTF8));
        iconTabs->setTabText(iconTabs->indexOf(tab_9), QString());
        label_4->setText(QApplication::translate("HelpPage", "Selecting RESET will clear the fields and allow you to enter a different therapy setting.", 0, QApplication::UnicodeUTF8));
        iconTabs->setTabText(iconTabs->indexOf(tab_3), QString());
        label_5->setText(QApplication::translate("HelpPage", "Clicking TEST will deliver a single pulse of the therapy arms.\n"
"The pressure and hold time are set by the values entered in Manual Mode", 0, QApplication::UnicodeUTF8));
        iconTabs->setTabText(iconTabs->indexOf(tab_4), QString());
        label_7->setText(QApplication::translate("HelpPage", "In Therapy Mode, the settings made in Manual Mode are transferred.\n"
"\n"
"You now have the option to select the number of pulses in a cycle and number of cycles\n"
"to be delivered in the therapy session.", 0, QApplication::UnicodeUTF8));
        iconTabs->setTabText(iconTabs->indexOf(tab_5), QString());
        label_8->setText(QApplication::translate("HelpPage", "To enter a pressure value not seen in the dropdown menu, select the number pad icon.\n"
"Here, you can enter any integer value between 0 and 50 for the pressure setting.", 0, QApplication::UnicodeUTF8));
        iconTabs->setTabText(iconTabs->indexOf(tab_6), QString());
        label_9->setText(QApplication::translate("HelpPage", "To stop the therapy session, click the STOP button.\n"
"This action will retract the therapy arms and return to Manual Mode to\n"
"adjust the settings.", 0, QApplication::UnicodeUTF8));
        iconTabs->setTabText(iconTabs->indexOf(tab_7), QString());
        label_10->setText(QApplication::translate("HelpPage", "After appropriate pressure, hold time, pulse number, and cycle number\n"
"are selected, click BEGIN THERAPY to start the session.", 0, QApplication::UnicodeUTF8));
        iconTabs->setTabText(iconTabs->indexOf(tab_8), QString());
        btn_troubleshoot->setText(QApplication::translate("HelpPage", "Troubleshoot", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("HelpPage", "Select an icon to view instruction.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class HelpPage: public Ui_HelpPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPPAGE_H
