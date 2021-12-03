/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *btn_manual_mode;
    QLabel *lbl_title;
    QLabel *img_logo;
    QPushButton *btn_help;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1024, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 515, 60, 60));
        pushButton->setStyleSheet(QString::fromUtf8("border:none;"));
        btn_manual_mode = new QPushButton(centralwidget);
        btn_manual_mode->setObjectName(QString::fromUtf8("btn_manual_mode"));
        btn_manual_mode->setGeometry(QRect(80, 390, 311, 81));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_manual_mode->sizePolicy().hasHeightForWidth());
        btn_manual_mode->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        btn_manual_mode->setFont(font);
        btn_manual_mode->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: white;\n"
"border-radius: 10px;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(0, 0, 0), stop:1 rgb(153, 153, 153));\n"
"\n"
""));
        lbl_title = new QLabel(centralwidget);
        lbl_title->setObjectName(QString::fromUtf8("lbl_title"));
        lbl_title->setGeometry(QRect(70, 190, 741, 191));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lbl_title->sizePolicy().hasHeightForWidth());
        lbl_title->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(48);
        font1.setBold(true);
        font1.setWeight(75);
        lbl_title->setFont(font1);
        img_logo = new QLabel(centralwidget);
        img_logo->setObjectName(QString::fromUtf8("img_logo"));
        img_logo->setGeometry(QRect(620, 20, 381, 111));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(img_logo->sizePolicy().hasHeightForWidth());
        img_logo->setSizePolicy(sizePolicy2);
        img_logo->setMaximumSize(QSize(421, 113));
        img_logo->setStyleSheet(QString::fromUtf8("\n"
"  width: 100%;\n"
"  height: auto;\n"
""));
        img_logo->setPixmap(QPixmap(QString::fromUtf8("../Desktop/trial1/images/imgLeadingEdge.png")));
        img_logo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        img_logo->setIndent(0);
        btn_help = new QPushButton(centralwidget);
        btn_help->setObjectName(QString::fromUtf8("btn_help"));
        btn_help->setGeometry(QRect(20, 20, 60, 60));
        btn_help->setStyleSheet(QString::fromUtf8("border:none;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1024, 27));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QString());
        btn_manual_mode->setText(QCoreApplication::translate("MainWindow", "MANUAL MODE", nullptr));
        lbl_title->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:72pt;\">Bionic PT</span></p></body></html>", nullptr));
        img_logo->setText(QString());
        btn_help->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
