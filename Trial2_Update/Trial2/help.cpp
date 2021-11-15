//help.cpp
//Includes dialog window functionality
//10/18/2021
#include "ui_help.h"
#include "help.h"
#include <QScrollBar>
#include <QLayout>

Help::Help(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Help)
{
    ui->setupUi(this);
    this->setWindowTitle("Leading Edge Physical Therapy");

    QLayout *vLayout = ui->verticalLayout;

    //This command will make all widgets in the layout only utilize the space they need.
    vLayout->setSizeConstraint(QLayout::SetFixedSize);

    QLabel *titleTest = new QLabel();
    titleTest->setText("SAMPLE TEXT");

    QFont titleFont = titleTest->font();
    titleFont.setPointSize(24);
    titleFont.setBold(true);

    vLayout->addWidget(titleTest);
}

Help::~Help()
{
    delete ui;
}

void Help::setScrollPos(int pos)
{
    QScrollArea *scrA = ui->ScrollA_HelpText;
    scrA->verticalScrollBar()->setValue(pos);
}

void Help::on_btn_HelpExit_clicked()
{
    hide();
}

