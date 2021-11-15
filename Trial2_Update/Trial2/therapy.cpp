#include <QMessageBox>
#include <QPushButton>
#include "therapy.h"
#include "ui_therapy.h"

Therapy::Therapy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Therapy)
{
    ui->setupUi(this);

    this->setWindowTitle("Leading Edge Physical Therapy");

    QPixmap pix("C:/FA2021/sdp/ui/images/imgLeadingEdgeLogo.png");
    int w = ui->img_logo->width();
    int h = ui->img_logo->height();
    ui->img_logo->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

    ui->btn_back->setIcon(QIcon("C:/FA2021/sdp/ui/images/imgBackBtn.png"));
    ui->btn_back->setIconSize(QSize(40,40));

    ui->dropdown_cycle_time->addItem(" ");
    for(int i = 0; i < 5; i++)
    {
        ui->dropdown_cycle_time->addItem(QString::number((i + 1)*5));
    }

    ui->dropdown_pulses->addItem(" ");
    for(int i = 0; i < 5; i++)
    {
        ui->dropdown_pulses->addItem(QString::number(i + 1));
    }

    //Populate global list of info buttons for this page

    for (int index = 0; index < 8; index++)
    {
        infoBtnList.append(new QPushButton(this));
        infoBtnList[index]->resize(32, 32);
        infoBtnList[index]->setIcon(QIcon(":/img/InfoIcn.png"));
        infoBtnList[index]->setIconSize(QSize(32, 32));
        infoBtnList[index]->setStyleSheet("border:none;");
        //Place button at correct position based on index
        if (index == 0)
        {
            //Arm 1 Pressure Setting info
            infoBtnList[index]->move(160, 290);
        }
        if (index == 1)
        {
            //Arm 2 Pressure Setting info
            infoBtnList[index]->move(530, 290);
        }
        if (index == 2)
        {
            //Cycle time setting info
            infoBtnList[index]->move(870, 290);
        }
        if (index == 3)
        {
            //Arm 1 Hold time Setting info
            infoBtnList[index]->move(160, 410);
        }
        if (index == 4)
        {
            //Arm 2 Hold time Setting info
            infoBtnList[index]->move(530, 410);
        }
        if (index == 5)
        {
            //Pulses Per Cycle setting info
            infoBtnList[index]->move(930, 410);
        }
        if (index == 6)
        {
            //Stop Button info
            infoBtnList[index]->move(230, 550);
        }
        if (index == 7)
        {
            //Begin Therapy button info
            infoBtnList[index]->move(830, 550);
        }
        connect(infoBtnList[index], SIGNAL(clicked()), this, SLOT(on_btn_info_clicked()));
    }
}

Therapy::~Therapy()
{
    delete ui;
}

void Therapy::on_btn_back_clicked()
{
    hide();
}


void Therapy::on_btn_start_therapy_clicked()
{
    QMessageBox::information(this, "Info", "Begin Therapy");
}


void Therapy::on_btn_help_clicked()
{
    help = new Help(this);
    help->setScrollPos(1000);
    help->show();
}


void Therapy::on_btn_stop_clicked()
{
    QMessageBox::information(this, "STOP", "stop therapy");

}


void Therapy::on_btn_info_clicked()
{
    //Use sender to determine which button was pressed

    QPushButton *currentBtn = (QPushButton *)sender();
    if (currentBtn == infoBtnList[0])
    {
        //Arm 1 Pressure Setting info

        QMessageBox::information(this, "Information", "Clicking on the pressure drop down box will allow you to select your pressure for Arm 1.");
    }
    if (currentBtn == infoBtnList[1])
    {
        //Arm 2 Pressure Setting info

        QMessageBox::information(this, "Information", "Clicking on the pressure drop down box will allow you to select your pressure for Arm 2.");
    }
    if (currentBtn == infoBtnList[2])
    {
        //Cycle time setting info

        QMessageBox::information(this, "Information", "Clicking on the pressure drop down box will allow you to select your cycle time for both arms.");
    }
    if (currentBtn == infoBtnList[3])
    {
        //Arm 1 Hold time Setting info

        QMessageBox::information(this, "Information", "Clicking on the pressure drop down box will allow you to select your hold time for Arm 1.");
    }
    if (currentBtn == infoBtnList[4])
    {
        //Arm 2 Hold time Setting info

        QMessageBox::information(this, "Information", "Clicking on the pressure drop down box will allow you to select your hold time for Arm 2.");
    }
    if (currentBtn == infoBtnList[5])
    {
        //Pulses Per Cycle setting info

        QMessageBox::information(this, "Information", "Clicking on the pressure drop down box will allow you to select how many pulses for each cycle for both arms.");
    }
    if (currentBtn == infoBtnList[6])
    {
        //Stop Button info

        QMessageBox::information(this, "Information", "Clicking on the Stop button will halt both arms immediately.");
    }
    if (currentBtn == infoBtnList[7])
    {
        //Begin Therapy button info

        QMessageBox::information(this, "Information", "Clicking on the Begin Therapy button will will activate the arms and begin the therapy process.");
    }
}

