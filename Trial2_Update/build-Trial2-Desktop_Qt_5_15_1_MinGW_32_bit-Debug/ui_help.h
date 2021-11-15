/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Help
{
public:
    QPushButton *btn_HelpExit;
    QLabel *label_ScreenTitle;
    QScrollArea *ScrollA_HelpText;
    QWidget *scrollAreaWidgetContents;
    QFormLayout *formLayout;
    QLabel *label_MainMenu;
    QLabel *label_MainMenuDesc;
    QLabel *label_MainMenuPhotoDesc;
    QLabel *label_ManualModeDesc;
    QLabel *label_ManualModePhoto;
    QLabel *label_TherapyMode;
    QLabel *label_ManualModePhotoDesc;
    QLabel *label_TherapyModeDesc;
    QLabel *label_MainMenuPhoto;
    QLabel *label_TherapyModePhoto;
    QLabel *label_ManualMode;
    QLabel *label_TherapyModePhotoDesc;

    void setupUi(QDialog *Help)
    {
        if (Help->objectName().isEmpty())
            Help->setObjectName(QString::fromUtf8("Help"));
        Help->resize(1105, 695);
        btn_HelpExit = new QPushButton(Help);
        btn_HelpExit->setObjectName(QString::fromUtf8("btn_HelpExit"));
        btn_HelpExit->setGeometry(QRect(0, 20, 93, 61));
        btn_HelpExit->setStyleSheet(QString::fromUtf8("border: none;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/Images/HlpIcn.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_HelpExit->setIcon(icon);
        btn_HelpExit->setIconSize(QSize(61, 61));
        btn_HelpExit->setAutoDefault(true);
        label_ScreenTitle = new QLabel(Help);
        label_ScreenTitle->setObjectName(QString::fromUtf8("label_ScreenTitle"));
        label_ScreenTitle->setGeometry(QRect(110, 0, 631, 101));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(48);
        font.setBold(true);
        font.setWeight(75);
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
        formLayout = new QFormLayout(scrollAreaWidgetContents);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_MainMenu = new QLabel(scrollAreaWidgetContents);
        label_MainMenu->setObjectName(QString::fromUtf8("label_MainMenu"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_MainMenu->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_MainMenu);

        label_MainMenuDesc = new QLabel(scrollAreaWidgetContents);
        label_MainMenuDesc->setObjectName(QString::fromUtf8("label_MainMenuDesc"));
        label_MainMenuDesc->setMinimumSize(QSize(400, 350));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setPointSize(12);
        label_MainMenuDesc->setFont(font2);
        label_MainMenuDesc->setLayoutDirection(Qt::LeftToRight);
        label_MainMenuDesc->setStyleSheet(QString::fromUtf8("background-color: rgb(209, 206, 255);\n"
"color: rgb(0, 0, 0);"));
        label_MainMenuDesc->setScaledContents(false);
        label_MainMenuDesc->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_MainMenuDesc->setWordWrap(true);
        label_MainMenuDesc->setMargin(1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_MainMenuDesc);

        label_MainMenuPhotoDesc = new QLabel(scrollAreaWidgetContents);
        label_MainMenuPhotoDesc->setObjectName(QString::fromUtf8("label_MainMenuPhotoDesc"));
        label_MainMenuPhotoDesc->setMinimumSize(QSize(550, 50));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Verdana"));
        font3.setPointSize(9);
        label_MainMenuPhotoDesc->setFont(font3);
        label_MainMenuPhotoDesc->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        formLayout->setWidget(2, QFormLayout::FieldRole, label_MainMenuPhotoDesc);

        label_ManualModeDesc = new QLabel(scrollAreaWidgetContents);
        label_ManualModeDesc->setObjectName(QString::fromUtf8("label_ManualModeDesc"));
        label_ManualModeDesc->setMinimumSize(QSize(400, 350));
        label_ManualModeDesc->setFont(font2);
        label_ManualModeDesc->setLayoutDirection(Qt::LeftToRight);
        label_ManualModeDesc->setStyleSheet(QString::fromUtf8("background-color: rgb(209, 206, 255);\n"
"color: rgb(0, 0, 0);"));
        label_ManualModeDesc->setScaledContents(false);
        label_ManualModeDesc->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_ManualModeDesc->setWordWrap(true);
        label_ManualModeDesc->setMargin(1);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_ManualModeDesc);

        label_ManualModePhoto = new QLabel(scrollAreaWidgetContents);
        label_ManualModePhoto->setObjectName(QString::fromUtf8("label_ManualModePhoto"));
        label_ManualModePhoto->setMinimumSize(QSize(550, 350));
        label_ManualModePhoto->setMaximumSize(QSize(550, 350));
        QFont font4;
        font4.setPointSize(12);
        label_ManualModePhoto->setFont(font4);
        label_ManualModePhoto->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(4, QFormLayout::FieldRole, label_ManualModePhoto);

        label_TherapyMode = new QLabel(scrollAreaWidgetContents);
        label_TherapyMode->setObjectName(QString::fromUtf8("label_TherapyMode"));
        label_TherapyMode->setFont(font1);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_TherapyMode);

        label_ManualModePhotoDesc = new QLabel(scrollAreaWidgetContents);
        label_ManualModePhotoDesc->setObjectName(QString::fromUtf8("label_ManualModePhotoDesc"));
        label_ManualModePhotoDesc->setMinimumSize(QSize(550, 50));
        label_ManualModePhotoDesc->setFont(font3);
        label_ManualModePhotoDesc->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        formLayout->setWidget(5, QFormLayout::FieldRole, label_ManualModePhotoDesc);

        label_TherapyModeDesc = new QLabel(scrollAreaWidgetContents);
        label_TherapyModeDesc->setObjectName(QString::fromUtf8("label_TherapyModeDesc"));
        label_TherapyModeDesc->setMinimumSize(QSize(400, 350));
        label_TherapyModeDesc->setFont(font2);
        label_TherapyModeDesc->setLayoutDirection(Qt::LeftToRight);
        label_TherapyModeDesc->setStyleSheet(QString::fromUtf8("background-color: rgb(209, 206, 255);\n"
"color: rgb(0, 0, 0);"));
        label_TherapyModeDesc->setScaledContents(false);
        label_TherapyModeDesc->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_TherapyModeDesc->setWordWrap(true);
        label_TherapyModeDesc->setMargin(1);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_TherapyModeDesc);

        label_MainMenuPhoto = new QLabel(scrollAreaWidgetContents);
        label_MainMenuPhoto->setObjectName(QString::fromUtf8("label_MainMenuPhoto"));
        label_MainMenuPhoto->setMinimumSize(QSize(550, 350));
        label_MainMenuPhoto->setMaximumSize(QSize(550, 350));
        label_MainMenuPhoto->setFont(font4);
        label_MainMenuPhoto->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::FieldRole, label_MainMenuPhoto);

        label_TherapyModePhoto = new QLabel(scrollAreaWidgetContents);
        label_TherapyModePhoto->setObjectName(QString::fromUtf8("label_TherapyModePhoto"));
        label_TherapyModePhoto->setMinimumSize(QSize(550, 350));
        label_TherapyModePhoto->setMaximumSize(QSize(550, 350));
        label_TherapyModePhoto->setFont(font4);
        label_TherapyModePhoto->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(6, QFormLayout::FieldRole, label_TherapyModePhoto);

        label_ManualMode = new QLabel(scrollAreaWidgetContents);
        label_ManualMode->setObjectName(QString::fromUtf8("label_ManualMode"));
        label_ManualMode->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_ManualMode);

        label_TherapyModePhotoDesc = new QLabel(scrollAreaWidgetContents);
        label_TherapyModePhotoDesc->setObjectName(QString::fromUtf8("label_TherapyModePhotoDesc"));
        label_TherapyModePhotoDesc->setMinimumSize(QSize(550, 50));
        label_TherapyModePhotoDesc->setFont(font3);
        label_TherapyModePhotoDesc->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        formLayout->setWidget(7, QFormLayout::FieldRole, label_TherapyModePhotoDesc);

        ScrollA_HelpText->setWidget(scrollAreaWidgetContents);

        retranslateUi(Help);

        QMetaObject::connectSlotsByName(Help);
    } // setupUi

    void retranslateUi(QDialog *Help)
    {
        Help->setWindowTitle(QCoreApplication::translate("Help", "Dialog", nullptr));
        btn_HelpExit->setText(QString());
        label_ScreenTitle->setText(QCoreApplication::translate("Help", "Application Help", nullptr));
        label_MainMenu->setText(QCoreApplication::translate("Help", "Main Menu", nullptr));
        label_MainMenuDesc->setText(QCoreApplication::translate("Help", "<html><head/><body><p>Description and information regarding the main menu will go here. Dummy text dummy text dummy text dummy text dummy text dummy text dummy text dummy text dummy text dummy text dummy text dummy text dummy text dummy text dummy text dummy text</p></body></html>", nullptr));
        label_MainMenuPhotoDesc->setText(QCoreApplication::translate("Help", "Photo legend and decriptors go here.", nullptr));
        label_ManualModeDesc->setText(QCoreApplication::translate("Help", "<html><head/><body><p>Description and information regarding the manual mode will go here. Dummy text dummy text dummy text dummy text dummy text dummy text dummy text dummy text dummy text dummy text dummy text dummy text dummy text dummy text dummy text dummy text</p></body></html>", nullptr));
        label_ManualModePhoto->setText(QCoreApplication::translate("Help", "Photo goes here.", nullptr));
        label_TherapyMode->setText(QCoreApplication::translate("Help", "Therapy Mode", nullptr));
        label_ManualModePhotoDesc->setText(QCoreApplication::translate("Help", "Photo legend and decriptors go here.", nullptr));
        label_TherapyModeDesc->setText(QCoreApplication::translate("Help", "<html><head/><body><p>Description and information regarding the therapy mode will go here. Dummy text dummy text dummy text dummy text dummy text dummy text dummy text dummy text dummy text dummy text dummy text dummy text dummy text dummy text dummy text dummy text</p></body></html>", nullptr));
        label_MainMenuPhoto->setText(QCoreApplication::translate("Help", "Photo goes here.", nullptr));
        label_TherapyModePhoto->setText(QCoreApplication::translate("Help", "Photo goes here.", nullptr));
        label_ManualMode->setText(QCoreApplication::translate("Help", "Manual Mode", nullptr));
        label_TherapyModePhotoDesc->setText(QCoreApplication::translate("Help", "Photo legend and decriptors go here.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Help: public Ui_Help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
