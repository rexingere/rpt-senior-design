#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "manualmode.h"
#include "helppage.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_manual_mode_clicked();

    void on_btn_help_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    ManualMode *manualmode;
    HelpPage *helppage;

};

#endif // MAINWINDOW_H
