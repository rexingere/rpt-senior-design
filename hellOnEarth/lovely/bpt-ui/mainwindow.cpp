#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTimer>
#include <QMessageBox>

#include <iostream>

//int value = 0;

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
    ui->btn_help->setIcon(QIcon(":/img/imgQuestion.png"));
    ui->btn_help->setIconSize(QSize(55,55));

    ui->pushButton->setFlat(true);
    ui->pushButton->setIcon(QIcon(":/img/exit_btn.png"));
    ui->pushButton->setIconSize(QSize(55,55));
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
    helppage = new HelpPage(this);
    helppage->show();
}

void MainWindow::on_pushButton_clicked()
{
    hide();
    system("shutdown -P now");
}
