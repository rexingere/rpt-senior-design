#ifndef THERAPYMODE_H
#define THERAPYMODE_H

#include <QDialog>

namespace Ui {
class TherapyMode;
}

class TherapyMode : public QDialog
{
    Q_OBJECT

public:
    explicit TherapyMode(QWidget *parent = nullptr);
    ~TherapyMode();

private slots:
    void on_btn_back_clicked();

    void on_btn_start_therapy_clicked();

private:
    Ui::TherapyMode *ui;
};

#endif // THERAPYMODE_H
