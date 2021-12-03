#ifndef HELPPAGE_H
#define HELPPAGE_H

#include <QDialog>

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

private:
    Ui::HelpPage *ui;
};

#endif // HELPPAGE_H
