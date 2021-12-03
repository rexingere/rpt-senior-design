#include "helppage.h"
#include "ui_helppage.h"

HelpPage::HelpPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HelpPage)
{
    ui->setupUi(this);

    ui->btn_back->setFlat(true);
    ui->btn_back->setIcon(QIcon(":/img/backBtn.png"));
    ui->btn_back->setIconSize(QSize(55,55));

//    QPixmap pix(":/img/leadingEdgeLogo.png");
//    int w = ui->img_logo->width();
//    int h = ui->img_logo->height();
//    ui->img_logo->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

    ui->iconTabs->setIconSize(QSize(60,60));

    ui->iconTabs->setTabIcon(0, QIcon(":/img/exit_btn"));
    ui->iconTabs->setTabIcon(1, QIcon(":/img/backBtn.png"));
    ui->iconTabs->setTabIcon(2, QIcon(":/img/manual_mode.png"));
    ui->iconTabs->setTabIcon(3, QIcon(":/img/reset.png"));
    ui->iconTabs->setTabIcon(4, QIcon(":/img/test.png"));
    ui->iconTabs->setTabIcon(5, QIcon(":/img/therapy_mode.png"));
    ui->iconTabs->setTabIcon(6, QIcon(":/img/numpad.png"));
    ui->iconTabs->setTabIcon(7, QIcon(":/img/stop.png"));
    ui->iconTabs->setTabIcon(8, QIcon(":/img/begin_therapy.png"));


}

HelpPage::~HelpPage()
{
    delete ui;
}

void HelpPage::on_btn_back_clicked()
{
    hide();
}


