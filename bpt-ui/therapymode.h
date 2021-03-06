#ifndef THERAPYMODE_H
#define THERAPYMODE_H

#include <QDialog>

#include "helppage.h"


namespace Ui {
class TherapyMode;
}

class TherapyMode : public QDialog
{
    Q_OBJECT

public:
    explicit TherapyMode(QWidget *parent = nullptr);
    ~TherapyMode();
    void set_params(QString pressure1, QString pressure2, QString hold1, QString hold2);

private slots:
    void on_btn_help_clicked();

    void on_btn_stop_clicked();

    void on_btn_therapy_clicked();

    void on_btn_back_clicked();

    void set_combo_values();


private:
    Ui::TherapyMode *ui;
    HelpPage *helppage;

};

#endif // THERAPYMODE_H
