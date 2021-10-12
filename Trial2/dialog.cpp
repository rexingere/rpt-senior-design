#include <QMessageBox>

#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    this->setWindowTitle("Leading Edge Physical Therapy");

    QPixmap pix("C:/FA2021/sdp/ui/images/imgLeadingEdgeLogo.png");
    int w = ui->img_logo->width();
    int h = ui->img_logo->height();
    ui->img_logo->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

    ui->btn_help->setIcon(QIcon("C:/FA2021/sdp/ui/images/imgQuestion.png"));
    ui->btn_help->setIconSize(QSize(40,40));

    ui->btn_back->setIcon(QIcon("C:/FA2021/sdp/ui/images/imgBackBtn.png"));
    ui->btn_back->setIconSize(QSize(40,40));

    ui->dropdown_pressure_1->addItem(" ");
    for(int i = 0; i < 5; i++)
    {
        ui->dropdown_pressure_1->addItem(QString::number(i + 1));
    }

    ui->dropdown_hold_1->addItem(" ");
    for(int i = 0; i < 5; i++)
    {
        ui->dropdown_hold_1->addItem(QString::number(i + 1));
    }

    ui->dropdown_pressure_2->addItem(" ");
    for(int i = 0; i < 5; i++)
    {
        ui->dropdown_pressure_2->addItem(QString::number(i + 1));
    }

    ui->dropdown_hold_2->addItem(" ");
    for(int i = 0; i < 5; i++)
    {
        ui->dropdown_hold_2->addItem(QString::number(i + 1));
    }
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_btn_back_clicked()
{
    hide();

}

void Dialog::on_btn_therapy_mode_clicked()
{
    hide();
    therapy = new Therapy(this);
    therapy->show();
}

void Dialog::on_btn_reset_clicked()
{
    ui->dropdown_pressure_1->setCurrentText(" ");
    ui->dropdown_pressure_2->setCurrentText(" ");
    ui->dropdown_hold_1->setCurrentText(" ");
    ui->dropdown_hold_2->setCurrentText(" ");
}

void Dialog::on_btn_test_clicked()
{
    //QMessageBox msgBox;
    //msgBox.setText("ACTION - TEST!!");
    //msgBox.exec();

    QMessageBox::information(this, "Test Values",
                             "Arm 1\nPressure: "+ ui->dropdown_pressure_1->currentText() +
                             "\nHold Time: " + ui->dropdown_hold_1->currentText() +
                             "\n\n Arm 2\nPressure: " + ui->dropdown_pressure_2->currentText()+
                             "\nHold Time: " + ui->dropdown_hold_2->currentText());
}

void Dialog::on_btn_help_clicked()
{
    QMessageBox::information(this, "Help", "Instructions");

}

