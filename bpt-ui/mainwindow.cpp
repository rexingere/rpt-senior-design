#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTimer>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setStyleSheet("background-color:white");
    this->setAutoFillBackground(true);
    this->showFullScreen();

    QPixmap pix(":/img/leadingEdgeLogo.png");
    int w = ui->img_logo->width();
    int h = ui->img_logo->height();
    ui->img_logo->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

    ui->btn_help->setFlat(true);
    ui->btn_help->setIcon(QIcon(":/img/question.png"));
    ui->btn_help->setIconSize(QSize(55,55));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_manual_mode_clicked()
{
    manualmode = new ManualMode(this);
    manualmode->show();

}



void MainWindow::on_btn_help_clicked()
{
    QMessageBox::information(this, "Help", "Instructions");
}
