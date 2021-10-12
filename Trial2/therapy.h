#ifndef THERAPY_H
#define THERAPY_H

#include <QDialog>

namespace Ui {
class Therapy;
}

class Therapy : public QDialog
{
    Q_OBJECT

public:
    explicit Therapy(QWidget *parent = nullptr);
    ~Therapy();

private slots:
    void on_btn_back_clicked();

    void on_btn_start_therapy_clicked();

    void on_btn_help_clicked();

    void on_btn_stop_clicked();

private:
    Ui::Therapy *ui;

};

#endif // THERAPY_H
