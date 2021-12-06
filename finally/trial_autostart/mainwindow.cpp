#include "mainwindow.h"
#include "ui_mainwindow.h"

bool toggle = false;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setText("ON");

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    toggle = !toggle;
    QString btnText = toggle ? "OFF" : "ON";
    ui->pushButton->setText(btnText);

    QString cmd_qt = QString("python3 -c 'import ledGeany; ledGeany.runInParallel()'");
    const char* cmd = cmd_qt.toLocal8Bit().constData();
    system(cmd);
}




