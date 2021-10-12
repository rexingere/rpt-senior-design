#include "ui_mainwindow.h"
#include "mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("Leading Edge Physical Therapy");

    QPixmap pix("C:/FA2021/sdp/ui/images/imgLeadingEdgeLogo.png");
    int w = ui->img_logo->width();
    int h = ui->img_logo->height();
    ui->img_logo->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

    ui->btn_help->setIcon(QIcon("C:/FA2021/sdp/ui/images/imgQuestion.png"));
    ui->btn_help->setIconSize(QSize(40,40));

    QPixmap pix2("C:/FA2021/sdp/ui/images/imgDots.png");
    int w1 = ui->img_dots->width();
    int h1 = ui->img_dots->height();
    ui->img_dots->setPixmap(pix2.scaled(w1,h1,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    //hide();
    dialog = new Dialog(this);
    dialog->show();

}


void MainWindow::on_btn_help_clicked()
{
    QMessageBox::information(this, "Help", "Instructions");

}

