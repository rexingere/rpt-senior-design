#ifndef THERAPY_H
#define THERAPY_H

#include <QDialog>
#include "help.h"

namespace Ui {
class Therapy;
}

class Therapy : public QDialog
{
    Q_OBJECT

public:
    explicit Therapy(QWidget *parent = nullptr);
    ~Therapy();

    //Create a public list of info buttons for this page
    QList<QPushButton *> infoBtnList;

private slots:
    void on_btn_back_clicked();

    void on_btn_start_therapy_clicked();

    void on_btn_help_clicked();

    void on_btn_stop_clicked();

    void on_btn_info_clicked();

private:
    Ui::Therapy *ui;
    Help *help;
};

#endif // THERAPY_H
