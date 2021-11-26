#ifndef HELPPAGE_H
#define HELPPAGE_H

#include <QDialog>

#include "troubleshoot.h"

namespace Ui {
class HelpPage;
}

class HelpPage : public QDialog
{
    Q_OBJECT

public:
    explicit HelpPage(QWidget *parent = nullptr);
    ~HelpPage();

private slots:
    void on_btn_back_clicked();

    void on_btn_troubleshoot_clicked();

private:
    Ui::HelpPage *ui;
    Troubleshoot *troubleshoot;
};

#endif // HELPPAGE_H
