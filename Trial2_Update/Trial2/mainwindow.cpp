#include "ui_mainwindow.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QPushButton>

//Create a list of info buttons for this page
//QList<QPushButton *> infoBtnList;

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

    QPixmap pix2("C:/FA2021/sdp/ui/images/imgDots.png");
    int w1 = ui->img_dots->width();
    int h1 = ui->img_dots->height();
    ui->img_dots->setPixmap(pix2.scaled(w1,h1,Qt::KeepAspectRatio));

    //Populate global list of info buttons for this page

    for (int index = 0; index < 2; index++)
    {
        infoBtnList.append(new QPushButton(this));
        infoBtnList[index]->resize(32, 32);
        infoBtnList[index]->setIcon(QIcon(":/img/InfoIcn.png"));
        infoBtnList[index]->setIconSize(QSize(32, 32));
        infoBtnList[index]->setStyleSheet("border:none;");
        //Place button at correct position based on index
        if (index == 0)
        {
            //Troubleshooting info button
            infoBtnList[index]->move(100, 20);
        }
        if (index == 1)
        {
            //Manual mode info button
            infoBtnList[index]->move(240, 500);
        }
        connect(infoBtnList[index], SIGNAL(clicked()), this, SLOT(on_btn_info_clicked()));
    }
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
    help = new Help(this);
    help->setScrollPos(0);
    help->show();
}

void MainWindow::on_btn_info_clicked()
{
    //Use sender to determine which button was pressed

    QPushButton *currentBtn = (QPushButton *)sender();
    if (currentBtn == infoBtnList[0])
    {
        //Troubleshooting info button
        qInfo("Troubleshooting info button");

        QMessageBox::information(this, "Information", "Clicking on the question mark button will open the separate troubleshooting window.");
    }
    if (currentBtn == infoBtnList[1])
    {
        //Manual mode info button
        qInfo("Manual mode info button");

        QMessageBox::information(this, "Information", "Clicking on the Manual Mode button will open the separate Manual Mode window.");
    }
}


