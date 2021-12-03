#include "therapymode.h"
#include "ui_therapymode.h"
#include <QMessageBox>

int stop_value = 0; //pin 3
int arm1_value = 0; // pin 16
int arm2_value = 0; // pin 12


TherapyMode::TherapyMode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TherapyMode)
{
    ui->setupUi(this);

    this->setStyleSheet("background-color:white");
    this->setAutoFillBackground(true);
    this->showFullScreen();

    ui->btn_help->setFlat(true);
    ui->btn_help->setIcon(QIcon(":/img/imgQuestion.png"));
    ui->btn_help->setIconSize(QSize(55,55));

    ui->btn_back->setFlat(true);
    ui->btn_back->setIcon(QIcon(":/img/backBtn.png"));
    ui->btn_back->setIconSize(QSize(55,55));

    this->set_combo_values();

}

TherapyMode::~TherapyMode()
{
    delete ui;
}

void TherapyMode::on_btn_help_clicked()
{
    QMessageBox::information(this, "Help", "Instructions");
    helppage = new HelpPage(this);
    helppage->show();

}

void TherapyMode::on_btn_stop_clicked()
{
    //QMessageBox::information(this, "Operation", "Stop");

        FILE *sysfs_handle = NULL;

        if((sysfs_handle =fopen("/sys/class/gpio/gpio3/value", "w" )) != NULL) {
            stop_value = stop_value ? 0 : 1;
            char str_value[2];
            snprintf(str_value, (2*sizeof(char)), "%d", stop_value);

            fwrite(str_value, sizeof(char), 2, sysfs_handle);
            fclose(sysfs_handle);
        }

}

void TherapyMode::on_btn_therapy_clicked()
{
    QString pos0 = ui->pressure1->text();
    QString pos1 = ui->pressure2->text();

    QString hold0 = ui->hold1->text();
    QString hold1 = ui->hold2->text();

    QString pulses = ui->pulses_combo->currentText();
    QString cycles = ui->cycles_combo->currentText();

    QString cmd_qt = QString("python3 -c 'import synthesis; synthesis.controller(0," + pos0 + "," + hold0 + "," + pulses + "," + cycles + ")'");
    // python3 -c 'import synthesis; synthesis.controller(0,30,5,3,2)'
    const char* cmd = cmd_qt.toLocal8Bit().constData();
    system(cmd);
}

void TherapyMode::on_btn_back_clicked()
{
    hide();
}

void TherapyMode::set_combo_values()
{
    ui->pulses_combo->addItem(" ");
    for(int i = 0; i < 5; i++)
    {
        ui->pulses_combo->addItem(QString::number(i + 1));
    }

    ui->cycles_combo->addItem(" ");
    for(int i = 0; i < 5; i++)
    {
        ui->cycles_combo->addItem(QString::number(i + 1));
    }
}

void TherapyMode::set_params(
        QString pressure1, QString pressure2, QString hold1, QString hold2)
{
    ui->pressure1->setText(pressure1);
    ui->pressure2->setText(pressure2);
    ui->hold1->setText(hold1);
    ui->hold2->setText(hold2);

}
