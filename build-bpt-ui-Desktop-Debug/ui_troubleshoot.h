/********************************************************************************
** Form generated from reading UI file 'troubleshoot.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TROUBLESHOOT_H
#define UI_TROUBLESHOOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Troubleshoot
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QPushButton *btn_back;

    void setupUi(QDialog *Troubleshoot)
    {
        if (Troubleshoot->objectName().isEmpty())
            Troubleshoot->setObjectName(QString::fromUtf8("Troubleshoot"));
        Troubleshoot->resize(1024, 600);
        Troubleshoot->setMinimumSize(QSize(1024, 600));
        Troubleshoot->setMaximumSize(QSize(1024, 600));
        buttonBox = new QDialogButtonBox(Troubleshoot);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(Troubleshoot);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 40, 201, 71));
        btn_back = new QPushButton(Troubleshoot);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(20, 515, 60, 60));
        btn_back->setStyleSheet(QString::fromUtf8("border:none;"));

        retranslateUi(Troubleshoot);
        QObject::connect(buttonBox, SIGNAL(accepted()), Troubleshoot, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Troubleshoot, SLOT(reject()));

        QMetaObject::connectSlotsByName(Troubleshoot);
    } // setupUi

    void retranslateUi(QDialog *Troubleshoot)
    {
        Troubleshoot->setWindowTitle(QCoreApplication::translate("Troubleshoot", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Troubleshoot", "Troubleshooot", nullptr));
        btn_back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Troubleshoot: public Ui_Troubleshoot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TROUBLESHOOT_H
