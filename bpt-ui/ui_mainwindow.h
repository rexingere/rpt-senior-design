/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *btn_manual_mode;
    QLabel *img_logo;
    QLabel *lbl_title;
    QPushButton *btn_help;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1024, 668);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1001, 650));
        MainWindow->setMaximumSize(QSize(16777215, 1000));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"gridline-color: rgb(255, 255, 255);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMinimumSize(QSize(1023, 600));
        centralWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        btn_manual_mode = new QPushButton(centralWidget);
        btn_manual_mode->setObjectName(QString::fromUtf8("btn_manual_mode"));
        btn_manual_mode->setGeometry(QRect(70, 390, 311, 81));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_manual_mode->sizePolicy().hasHeightForWidth());
        btn_manual_mode->setSizePolicy(sizePolicy1);
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
        img_logo = new QLabel(centralWidget);
        img_logo->setObjectName(QString::fromUtf8("img_logo"));
        img_logo->setGeometry(QRect(610, 20, 381, 111));
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
        img_logo->setPixmap(QPixmap(QString::fromUtf8("../../trial1/images/imgLeadingEdge.png")));
        img_logo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        img_logo->setIndent(0);
        lbl_title = new QLabel(centralWidget);
        lbl_title->setObjectName(QString::fromUtf8("lbl_title"));
        lbl_title->setGeometry(QRect(60, 190, 741, 191));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lbl_title->sizePolicy().hasHeightForWidth());
        lbl_title->setSizePolicy(sizePolicy3);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(48);
        font1.setBold(true);
        font1.setWeight(75);
        lbl_title->setFont(font1);
        btn_help = new QPushButton(centralWidget);
        btn_help->setObjectName(QString::fromUtf8("btn_help"));
        btn_help->setGeometry(QRect(20, 20, 60, 60));
        btn_help->setStyleSheet(QString::fromUtf8("border:none;"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 515, 60, 60));
        pushButton->setStyleSheet(QString::fromUtf8("border:none;"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 28));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        btn_manual_mode->setText(QApplication::translate("MainWindow", "MANUAL MODE", 0, QApplication::UnicodeUTF8));
        img_logo->setText(QString());
        lbl_title->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:72pt;\">Bionic PT</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        btn_help->setText(QString());
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
