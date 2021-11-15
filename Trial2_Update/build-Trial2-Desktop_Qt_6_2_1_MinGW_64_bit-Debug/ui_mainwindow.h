/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
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
    QLabel *img_logo;
    QLabel *label_2;
    QLabel *img_dots;
    QPushButton *pushButton;
    QPushButton *btn_help;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1105, 695);
        QFont font;
        font.setPointSize(28);
        MainWindow->setFont(font);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("body {background-color: coral;}"));
        img_logo = new QLabel(centralwidget);
        img_logo->setObjectName(QString::fromUtf8("img_logo"));
        img_logo->setGeometry(QRect(780, 30, 291, 91));
        img_logo->setMaximumSize(QSize(421, 113));
        img_logo->setStyleSheet(QString::fromUtf8("\n"
"  width: 100%;\n"
"  height: auto;\n"
""));
        img_logo->setPixmap(QPixmap(QString::fromUtf8("../../../trial1/images/imgLeadingEdge.png")));
        img_logo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        img_logo->setIndent(0);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 330, 1121, 121));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Verdana")});
        font1.setPointSize(48);
        font1.setBold(true);
        label_2->setFont(font1);
        img_dots = new QLabel(centralwidget);
        img_dots->setObjectName(QString::fromUtf8("img_dots"));
        img_dots->setGeometry(QRect(80, 570, 251, 31));
        img_dots->setPixmap(QPixmap(QString::fromUtf8("../../../trial1/images/imgDots.png")));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(80, 500, 151, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Verdana")});
        font2.setPointSize(10);
        font2.setBold(true);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: white;\n"
"\n"
""));
        btn_help = new QPushButton(centralwidget);
        btn_help->setObjectName(QString::fromUtf8("btn_help"));
        btn_help->setEnabled(true);
        btn_help->setGeometry(QRect(20, 20, 64, 64));
        btn_help->setStyleSheet(QString::fromUtf8("border:none;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/HlpIcn.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_help->setIcon(icon);
        btn_help->setIconSize(QSize(64, 64));
        btn_help->setAutoDefault(false);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1105, 20));
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
        img_logo->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Therbo Robotic Therapy", nullptr));
        img_dots->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Manual Mode", nullptr));
        btn_help->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
