#include "manualmode.h"
#include "ui_manualmode.h"

#include <QMessageBox>
#include <QComboBox>

int numpad_num;

ManualMode::ManualMode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ManualMode)
{
    ui->setupUi(this);

    this->setStyleSheet("background-color:white");
    this->setAutoFillBackground(true);
    //this->showFullScreen();


    ui->btn_help->setFlat(true);
    ui->btn_help->setIcon(QIcon(":/img/imgQuestion.png"));
    ui->btn_help->setIconSize(QSize(55,55));

    ui->numpad_1->setIcon(QIcon(":/img/numpad.png"));
    ui->numpad_1->setIconSize(QSize(40,40));

    ui->numpad_2->setIcon(QIcon(":/img/numpad.png"));
    ui->numpad_2->setIconSize(QSize(40,40));

    ui->numpad_3->setIcon(QIcon(":/img/numpad.png"));
    ui->numpad_3->setIconSize(QSize(40,40));

    ui->numpad_4->setIcon(QIcon(":/img/numpad.png"));
    ui->numpad_4->setIconSize(QSize(40,40));

    ui->btn_back->setFlat(true);
    ui->btn_back->setIcon(QIcon(":/img/backBtn.png"));
    ui->btn_back->setIconSize(QSize(55,55));

    this->set_combo_values();

}

ManualMode::~ManualMode()
{
    delete ui;
}

void ManualMode::on_btn_therapy_mode_clicked()
{
    therapymode = new TherapyMode(this);
    therapymode->set_params(
                ui->pressure1_combo->currentText(),
                ui->pressure2_combo->currentText(),
                ui->hold1_combo->currentText(),
                ui->hold2_combo->currentText());

    therapymode->show();
}

void ManualMode::on_btn_help_clicked()
{
    QMessageBox::information(this, "Help", "Instructions");
    helppage = new HelpPage(this);
    helppage->show();
}

void ManualMode::on_btn_reset_clicked()
{
    QMessageBox::information(this, "Operation", "Reset");
    ui->pressure1_combo->clear();
    ui->pressure2_combo->clear();
    ui->hold1_combo->clear();
    ui->hold2_combo->clear();

    this->set_combo_values();
}

void ManualMode::on_btn_test_clicked()
{
    QString pos0 = ui->pressure1_combo->currentText();
    QString pos1 = ui->pressure2_combo->currentText();

    QString hold0 = ui->hold1_combo->currentText();
    QString hold1 = ui->hold2_combo->currentText();

    //QString cmd_qt = QString("python3 -c 'import synthesis; synthesis.setPos(1,10)'");
    //QString cmd_qt = QString("python -c 'import ledGeany; ledGeany.led_blink(3)'");
    //QString cmd_qt = QString("python -c 'import ledSynthesis; ledSynthesis.controller(1," + pos1 + "," + hold1 + ",1)'");
    //const char* cmd = cmd_qt.toLocal8Bit().constData();
    //system(cmd);
}

void ManualMode::on_btn_back_clicked()
{
    hide();
}

void ManualMode::set_combo_values()
{
    ui->pressure1_combo->addItem(" ");
    for(int i = 0; i < 5; i++)
    {
        ui->pressure1_combo->addItem(QString::number((i + 1)*10));
    }

    ui->pressure2_combo->addItem(" ");
    for(int i = 0; i < 5; i++)
    {
        ui->pressure2_combo->addItem(QString::number((i + 1)*10));
    }

    ui->hold1_combo->addItem(" ");
    for(int i = 0; i < 6; i++)
    {
        ui->hold1_combo->addItem(QString::number((i + 1)*5));
    }

    ui->hold2_combo->addItem(" ");
    for(int i = 0; i < 6; i++)
    {
        ui->hold2_combo->addItem(QString::number((i + 1)*5));
    }

}

void ManualMode::on_numpad_clicked() {
    numpad = new Numpad(this);
    numpad->show();
}


void ManualMode::on_numpad_1_clicked()
{
    numpad_num = 0;
    on_numpad_clicked();
}

void ManualMode::on_numpad_2_clicked()
{
    numpad_num = 1;
    on_numpad_clicked();

}

void ManualMode::on_numpad_3_clicked()
{
    numpad_num = 2;
    on_numpad_clicked();
}

void ManualMode::on_numpad_4_clicked()
{
    numpad_num = 3;
    on_numpad_clicked();
}


void ManualMode::set_pressure_numpad(QString msg) {
    ui->pressure1_combo->clear();
    this->ui->pressure1_combo->addItem(msg);
    QMessageBox::information(this, "Operation", msg);

}

void ManualMode::receiveMessage(const QString &msg) {
    switch(numpad_num) {
        case 0:
            ui->pressure1_combo->clear();
            this->ui->pressure1_combo->addItem(msg);
            break;
        case 1:
            ui->pressure2_combo->clear();
            this->ui->pressure2_combo->addItem(msg);
            break;
        case 2:
            ui->hold1_combo->clear();
            this->ui->hold1_combo->addItem(msg);
            break;
        case 3:
            ui->hold2_combo->clear();
            this->ui->hold2_combo->addItem(msg);
            break;

    }

}



























