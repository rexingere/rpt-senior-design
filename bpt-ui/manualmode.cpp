#include "manualmode.h"
#include "ui_manualmode.h"
#include <QMessageBox>


ManualMode::ManualMode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ManualMode)
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

}

ManualMode::~ManualMode()
{
    delete ui;
}

void ManualMode::on_btn_therapy_mode_clicked()
{
    therapymode = new TherapyMode(this);
    therapymode->show();
}

void ManualMode::on_btn_help_clicked()
{
    QMessageBox::information(this, "Help", "Instructions");

}

void ManualMode::on_btn_reset_clicked()
{
    QMessageBox::information(this, "Operation", "Reset");

}

void ManualMode::on_btn_test_clicked()
{
    QMessageBox::information(this, "Operation", "Test");

}

void ManualMode::on_btn_back_clicked()
{
    hide();
}
