#ifndef TROUBLESHOOT_H
#define TROUBLESHOOT_H

#include <QDialog>

namespace Ui {
class Troubleshoot;
}

class Troubleshoot : public QDialog
{
    Q_OBJECT

public:
    explicit Troubleshoot(QWidget *parent = nullptr);
    ~Troubleshoot();

private slots:
    void on_btn_back_clicked();

private:
    Ui::Troubleshoot *ui;
};

#endif // TROUBLESHOOT_H
