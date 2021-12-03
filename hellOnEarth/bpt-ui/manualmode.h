#ifndef MANUALMODE_H
#define MANUALMODE_H

#include <QDialog>

#include "therapymode.h"
#include "numpad.h"
#include "helppage.h"
namespace Ui {
class ManualMode;
}

class ManualMode : public QDialog
{
    Q_OBJECT

public:
    explicit ManualMode(QWidget *parent = nullptr);
    ~ManualMode();

    void on_numpad_clicked();


private slots:
    void on_btn_therapy_mode_clicked();

    void on_btn_help_clicked();

    void on_btn_reset_clicked();

    void on_btn_test_clicked();

    void on_btn_back_clicked();

    void set_combo_values();

    void on_numpad_1_clicked();

    void on_numpad_2_clicked();

    void on_numpad_3_clicked();

    void on_numpad_4_clicked();

public slots:
    void set_pressure_numpad(QString msg);

    void receiveMessage(const QString &msg);




private:
    Ui::ManualMode *ui;
    TherapyMode *therapymode;
    Numpad *numpad;
    HelpPage *helppage;



};

#endif // MANUALMODE_H
