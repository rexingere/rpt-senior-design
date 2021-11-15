/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Help
{
public:
    QPushButton *btn_HelpExit;
    QLabel *label_ScreenTitle;
    QScrollArea *ScrollA_HelpText;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QLabel *title_Arm_TS;
    QLabel *label;
    QLabel *title_TchScrn_TS;

    void setupUi(QDialog *Help)
    {
        if (Help->objectName().isEmpty())
            Help->setObjectName(QString::fromUtf8("Help"));
        Help->resize(1105, 695);
        btn_HelpExit = new QPushButton(Help);
        btn_HelpExit->setObjectName(QString::fromUtf8("btn_HelpExit"));
        btn_HelpExit->setGeometry(QRect(20, 20, 64, 64));
        btn_HelpExit->setStyleSheet(QString::fromUtf8("border: none;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/HlpIcn.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_HelpExit->setIcon(icon);
        btn_HelpExit->setIconSize(QSize(64, 64));
        btn_HelpExit->setAutoDefault(true);
        label_ScreenTitle = new QLabel(Help);
        label_ScreenTitle->setObjectName(QString::fromUtf8("label_ScreenTitle"));
        label_ScreenTitle->setGeometry(QRect(110, 0, 631, 101));
        QFont font;
        font.setFamilies({QString::fromUtf8("Verdana")});
        font.setPointSize(48);
        font.setBold(true);
        label_ScreenTitle->setFont(font);
        ScrollA_HelpText = new QScrollArea(Help);
        ScrollA_HelpText->setObjectName(QString::fromUtf8("ScrollA_HelpText"));
        ScrollA_HelpText->setGeometry(QRect(30, 120, 1041, 541));
        ScrollA_HelpText->setMinimumSize(QSize(1041, 541));
        ScrollA_HelpText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        ScrollA_HelpText->setWidgetResizable(false);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1025, 1292));
        scrollAreaWidgetContents->setLayoutDirection(Qt::LeftToRight);
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        title_Arm_TS = new QLabel(scrollAreaWidgetContents);
        title_Arm_TS->setObjectName(QString::fromUtf8("title_Arm_TS"));
        QFont font1;
        font1.setPointSize(24);
        font1.setBold(true);
        font1.setItalic(false);
        title_Arm_TS->setFont(font1);

        verticalLayout->addWidget(title_Arm_TS);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setPointSize(12);
        label->setFont(font2);

        verticalLayout->addWidget(label);

        title_TchScrn_TS = new QLabel(scrollAreaWidgetContents);
        title_TchScrn_TS->setObjectName(QString::fromUtf8("title_TchScrn_TS"));
        QFont font3;
        font3.setPointSize(24);
        font3.setBold(true);
        title_TchScrn_TS->setFont(font3);

        verticalLayout->addWidget(title_TchScrn_TS);

        ScrollA_HelpText->setWidget(scrollAreaWidgetContents);

        retranslateUi(Help);

        QMetaObject::connectSlotsByName(Help);
    } // setupUi

    void retranslateUi(QDialog *Help)
    {
        Help->setWindowTitle(QCoreApplication::translate("Help", "Dialog", nullptr));
        btn_HelpExit->setText(QString());
        label_ScreenTitle->setText(QCoreApplication::translate("Help", "Troubleshooting", nullptr));
        title_Arm_TS->setText(QCoreApplication::translate("Help", "Arm Troubleshooting", nullptr));
        label->setText(QCoreApplication::translate("Help", "<html><head/><body><p>This is the Arm Troubleshooting section. You will find the troubleshooting categories below.</p><p><span style=\" font-weight:600;\">Arm unresponsiveness</span></p><p>If the arms do not apply pressure, or show any signs of activity there are a few possible issues.</p><p>	1) The software is unable to make proper connectivity to the arms.</p><p>	2) The settings were not input properly on either the Manual Mode or 		Therapy mode.</p><p>	3) The arms are in need of maintainence.</p></body></html>", nullptr));
        title_TchScrn_TS->setText(QCoreApplication::translate("Help", "Touchscreen Troubleshooting", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Help: public Ui_Help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
