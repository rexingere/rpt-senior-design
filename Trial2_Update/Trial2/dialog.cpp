#include <QMessageBox>
#include <QPushButton>
#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    this->setWindowTitle("Leading Edge Physical Therapy");

    QPixmap pix("C:/FA2021/sdp/ui/images/imgLeadingEdgeLogo.png");
    int w = ui->img_logo->width();
    int h = ui->img_logo->height();
    ui->img_logo->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

    ui->btn_back->setIcon(QIcon("C:/FA2021/sdp/ui/images/imgBackBtn.png"));
    ui->btn_back->setIconSize(QSize(40,40));

    ui->dropdown_pressure_1->addItem(" ");
    for(int i = 0; i < 5; i++)
    {
        ui->dropdown_pressure_1->addItem(QString::number(i + 1));
    }

    ui->dropdown_hold_1->addItem(" ");
    for(int i = 0; i < 5; i++)
    {
        ui->dropdown_hold_1->addItem(QString::number(i + 1));
    }

    ui->dropdown_pressure_2->addItem(" ");
    for(int i = 0; i < 5; i++)
    {
        ui->dropdown_pressure_2->addItem(QString::number(i + 1));
    }

    ui->dropdown_hold_2->addItem(" ");
    for(int i = 0; i < 5; i++)
    {
        ui->dropdown_hold_2->addItem(QString::number(i + 1));
    }

    //Populate global list of info buttons for this page

    for (int index = 0; index < 7; index++)
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
            infoBtnList[index]->move(130, 300);
        }
        if (index == 1)
        {
            //Arm 2 Pressure Setting info
            infoBtnList[index]->move(540, 290);
        }
        if (index == 2)
        {
            //Arm 1 Hold Time Setting info
            infoBtnList[index]->move(130, 420);
        }
        if (index == 3)
        {
            //Arm 2 Hold Time Setting info
            infoBtnList[index]->move(540, 410);
        }
        if (index == 4)
        {
            //Reset button info
            infoBtnList[index]->move(170, 540);
        }
        if (index == 5)
        {
            //Test button info
            infoBtnList[index]->move(560, 540);
        }
        if (index == 6)
        {
            //Begin Therapy button info
            infoBtnList[index]->move(850, 620);
        }
        connect(infoBtnList[index], SIGNAL(clicked()), this, SLOT(on_btn_info_clicked()));
    }
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_btn_back_clicked()
{
    hide();

}

void Dialog::on_btn_therapy_mode_clicked()
{
    hide();
    therapy = new Therapy(this);
    therapy->show();
}

void Dialog::on_btn_reset_clicked()
{
    ui->dropdown_pressure_1->setCurrentText(" ");
    ui->dropdown_pressure_2->setCurrentText(" ");
    ui->dropdown_hold_1->setCurrentText(" ");
    ui->dropdown_hold_2->setCurrentText(" ");
}

void Dialog::on_btn_test_clicked()
{
    //QMessageBox msgBox;
    //msgBox.setText("ACTION - TEST!!");
    //msgBox.exec();

    QMessageBox::information(this, "Test Values",
                             "Arm 1\nPressure: "+ ui->dropdown_pressure_1->currentText() +
                             "\nHold Time: " + ui->dropdown_hold_1->currentText() +
                             "\n\n Arm 2\nPressure: " + ui->dropdown_pressure_2->currentText()+
                             "\nHold Time: " + ui->dropdown_hold_2->currentText());
}

void Dialog::on_btn_help_clicked()
{
    help = new Help(this);
    help->setScrollPos(400);
    help->show();
}

void Dialog::on_btn_info_clicked()
{
    //Use sender to determine which button was pressed

    QPushButton *currentBtn = (QPushButton *)sender();
    if (currentBtn == infoBtnList[0])
    {
        //Arm 1 Pressure Setting info

        QMessageBox::information(this, "Information", "Clicking on the pressure drop down box will allow you to select your test pressure for Arm 1.");
    }
    if (currentBtn == infoBtnList[1])
    {
        //Arm 2 Pressure Setting info

        QMessageBox::information(this, "Information", "Clicking on the pressure drop down box will allow you to select your test pressure for Arm 2.");
    }
    if (currentBtn == infoBtnList[2])
    {
        //Arm 1 Hold Time Setting info

        QMessageBox::information(this, "Information", "Clicking on the pressure drop down box will allow you to select your test hold time for Arm 1.");
    }
    if (currentBtn == infoBtnList[3])
    {
        //Arm 2 Hold Time Setting info

        QMessageBox::information(this, "Information", "Clicking on the pressure drop down box will allow you to select your test hold time for Arm 2.");
    }
    if (currentBtn == infoBtnList[4])
    {
        //Reset button info

        QMessageBox::information(this, "Information", "Clicking on the Reset button will reset all values in the drop down boxes.");
    }
    if (currentBtn == infoBtnList[5])
    {
        //Test button info

        QMessageBox::information(this, "Information", "Clicking on the Test button will activate the arms for a test pressure and hold time.");
    }
    if (currentBtn == infoBtnList[6])
    {
        //Begin Therapy button info

        QMessageBox::information(this, "Information", "Clicking on the Begin Therapy button will advance to the therapy mode window.");
    }
}

