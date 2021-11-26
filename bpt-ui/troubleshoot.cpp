#include "troubleshoot.h"
#include "ui_troubleshoot.h"

Troubleshoot::Troubleshoot(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Troubleshoot)
{
    ui->setupUi(this);

    ui->btn_back->setFlat(true);
    ui->btn_back->setIcon(QIcon(":/img/backBtn.png"));
    ui->btn_back->setIconSize(QSize(55,55));
}

Troubleshoot::~Troubleshoot()
{
    delete ui;
}

void Troubleshoot::on_btn_back_clicked()
{
    hide();
}
