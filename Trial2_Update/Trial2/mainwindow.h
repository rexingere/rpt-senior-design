#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog.h"
#include "help.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //Create a public list of info buttons for this page
    QList<QPushButton *> infoBtnList;

private slots:
    void on_pushButton_clicked();

    void on_btn_help_clicked();

    void on_btn_info_clicked();

private:
    Ui::MainWindow *ui;
    Dialog *dialog;
    Help *help;
};
#endif // MAINWINDOW_H
