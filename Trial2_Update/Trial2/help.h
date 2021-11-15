//help.h
//Header for help.cpp
//10/18/2021
#ifndef HELP_H
#define HELP_H

#include <QDialog>

namespace Ui
{
class Help;
}

class Help : public QDialog
{
    Q_OBJECT

public:
    explicit Help(QWidget *parent = nullptr);
    ~Help();

public:
    void setScrollPos(int);

private slots:
    //Widget function declarations go here
    void on_btn_HelpExit_clicked();

private:
    Ui::Help *ui;
};

#endif // HELP_H
