#ifndef MANUALMODE_H
#define MANUALMODE_H

#include <QDialog>
#include "therapymode.h"

namespace Ui {
class ManualMode;
}

class ManualMode : public QDialog
{
    Q_OBJECT

public:
    explicit ManualMode(QWidget *parent = nullptr);
    ~ManualMode();

private slots:
    void on_btn_therapy_mode_clicked();

    void on_btn_help_clicked();

    void on_btn_reset_clicked();

    void on_btn_test_clicked();

    void on_btn_back_clicked();

    void set_combo_values();


private:
    Ui::ManualMode *ui;
    TherapyMode *therapymode;

};

#endif // MANUALMODE_H
