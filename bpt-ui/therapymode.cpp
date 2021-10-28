#include "therapymode.h"
#include "ui_therapymode.h"
#include <QMessageBox>

TherapyMode::TherapyMode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TherapyMode)
{
    ui->setupUi(this);

    this->setStyleSheet("background-color:white");
    this->setAutoFillBackground(true);
    this->showFullScreen();

    ui->btn_help->setFlat(true);
    ui->btn_help->setIcon(QIcon(":/img/question.png"));
    ui->btn_help->setIconSize(QSize(55,55));

    ui->btn_back->setFlat(true);
    ui->btn_back->setIcon(QIcon(":/img/backBtn.png"));
    ui->btn_back->setIconSize(QSize(55,55));

    this->set_combo_values();

}

TherapyMode::~TherapyMode()
{
    delete ui;
}

void TherapyMode::on_btn_help_clicked()
{
    QMessageBox::information(this, "Help", "Instructions");

}

void TherapyMode::on_btn_stop_clicked()
{
    QMessageBox::information(this, "Operation", "Stop");

}

void TherapyMode::on_btn_therapy_clicked()
{
    QMessageBox::information(this, "Operation", "Begin Therapy");

}

void TherapyMode::on_btn_back_clicked()
{
    hide();
}

void TherapyMode::set_combo_values()
{
    ui->pulses_combo->addItem(" ");
    for(int i = 0; i < 5; i++)
    {
        ui->pulses_combo->addItem(QString::number(i + 1));
    }

    ui->cycles_combo->addItem(" ");
    for(int i = 0; i < 5; i++)
    {
        ui->cycles_combo->addItem(QString::number(i + 1));
    }


}
