#include <QMessageBox>

#include "therapymode.h"
#include "ui_therapymode.h"

TherapyMode::TherapyMode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TherapyMode)
{
    ui->setupUi(this);

    QPixmap pix("C:/FA2021/sdp/ui/images/imgLeadingEdgeLogo.png");
    int w = ui->img_logo->width();
    int h = ui->img_logo->height();
    ui->img_logo->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

    ui->btn_help->setIcon(QIcon("C:/FA2021/sdp/ui/images/imgQuestion.png"));
    ui->btn_help->setIconSize(QSize(40,40));

    ui->btn_back->setIcon(QIcon("C:/FA2021/sdp/ui/images/imgBackBtn.png"));
    ui->btn_back->setIconSize(QSize(40,40));

    QPixmap pix2("C:/FA2021/sdp/ui/images/imgDots.png");
    int w1 = ui->img_dots->width();
    int h1 = ui->img_dots->height();
    ui->img_dots->setPixmap(pix2.scaled(w1,h1,Qt::KeepAspectRatio));
}

TherapyMode::~TherapyMode()
{
    delete ui;
}

void TherapyMode::on_btn_back_clicked()
{
    hide();
}


void TherapyMode::on_btn_start_therapy_clicked()
{
    // action
    QMessageBox msgBox;
    msgBox.setText("Ac");
    msgBox.exec();
}

