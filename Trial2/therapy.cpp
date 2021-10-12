#include <QMessageBox>

#include "therapy.h"
#include "ui_therapy.h"

Therapy::Therapy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Therapy)
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

    ui->dropdown_cycle_time->addItem(" ");
    for(int i = 0; i < 5; i++)
    {
        ui->dropdown_cycle_time->addItem(QString::number((i + 1)*5));
    }

    ui->dropdown_pulses->addItem(" ");
    for(int i = 0; i < 5; i++)
    {
        ui->dropdown_pulses->addItem(QString::number(i + 1));
    }
}

Therapy::~Therapy()
{
    delete ui;
}

void Therapy::on_btn_back_clicked()
{
    hide();
}


void Therapy::on_btn_start_therapy_clicked()
{
    QMessageBox::information(this, "Info", "Begin Therapy");
}


void Therapy::on_btn_help_clicked()
{
    QMessageBox::information(this, "Help", "Instructions");

}


void Therapy::on_btn_stop_clicked()
{
    QMessageBox::information(this, "STOP", "stop therapy");

}

