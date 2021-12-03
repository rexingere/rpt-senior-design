#ifndef NUMPAD_H
#define NUMPAD_H

#include <QDialog>

namespace Ui {
class Numpad;
}

class Numpad : public QDialog
{
    Q_OBJECT


public:
    explicit Numpad(QWidget *parent = nullptr);
    ~Numpad();

    void set_numpad_num(int n);


signals:
    void sendMessage(const QString &msg);

private slots:
    void on_enter_clicked();

    void on_btn_num_clicked(QString num);

    void on_btn1_clicked();

    void on_btn2_clicked();

    void on_btn3_clicked();

    void on_btn4_clicked();

    void on_btn5_clicked();

    void on_btn6_clicked();

    void on_btn7_clicked();

    void on_btn8_clicked();

    void on_btn9_clicked();

    void on_btn0_clicked();

    void on_clear_clicked();




private:
    Ui::Numpad *ui;

};

#endif // NUMPAD_H
