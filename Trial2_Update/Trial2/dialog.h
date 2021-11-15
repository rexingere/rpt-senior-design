#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "therapy.h"
#include "help.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

    //Create a public list of info buttons for this page
    QList<QPushButton *> infoBtnList;

private slots:
    void on_btn_back_clicked();

    void on_btn_therapy_mode_clicked();

    void on_btn_reset_clicked();

    void on_btn_test_clicked();

    void on_btn_help_clicked();

    void on_btn_info_clicked();

private:
    Ui::Dialog *ui;
    Therapy *therapy;
    Help *help;

};

#endif // DIALOG_H
