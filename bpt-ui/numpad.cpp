#include "numpad.h"
#include "ui_numpad.h"
#include "manualmode.h"

#include <QMessageBox>

Numpad::Numpad(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Numpad)
{
    ui->setupUi(this);
    this->setWindowTitle("");
    //connect(this->ui->enter, SIGNAL(clicked()), this, SLOT(on_enter_clicked()));
    // connect child to parent
    connect(this, SIGNAL(sendMessage(QString)), parent, SLOT(receiveMessage(QString)));
    setWindowTitle(" ");
}

Numpad::~Numpad()
{
    delete ui;
}



void Numpad::on_enter_clicked()
{
    QString value = ui->value->text();
    emit sendMessage(value);
    hide();
    //emit enter_numpad(value);
}


void Numpad::on_btn_num_clicked(QString num)
{
    QString currentVal = ui->value->text();
    ui->value->setText(currentVal + num);
    currentVal = ui->value->text();

    int value = currentVal.toInt();
    if (value > 50) {
        //QMessageBox::information(this, "Help", "Instructions");
        QMessageBox::warning(this, "Error", "Cannot exceed 50lbs of pressure.");
        ui->value->setText("");

    }


}

void Numpad::on_btn1_clicked()
{
    on_btn_num_clicked("1");
}

void Numpad::on_btn2_clicked()
{
    on_btn_num_clicked("2");

}

void Numpad::on_btn3_clicked()
{
    on_btn_num_clicked("3");

}

void Numpad::on_btn4_clicked()
{
    on_btn_num_clicked("4");

}

void Numpad::on_btn5_clicked()
{
    on_btn_num_clicked("5");

}

void Numpad::on_btn6_clicked()
{
    on_btn_num_clicked("6");
}

void Numpad::on_btn7_clicked()
{
    on_btn_num_clicked("7");
}

void Numpad::on_btn8_clicked()
{
    on_btn_num_clicked("8");

}

void Numpad::on_btn9_clicked()
{
    on_btn_num_clicked("9");

}

void Numpad::on_btn0_clicked()
{
    on_btn_num_clicked("0");

}

void Numpad::on_clear_clicked()
{
    ui->value->setText("");
}


