#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.setWindowState(Qt::WindowMaximized);
    //w.showFullScreen();


    FILE *sysfs_handle = NULL;

    if((sysfs_handle =fopen("/sys/class/gpio/export", "w" )) != NULL) {
        fwrite("3", sizeof(char), 2, sysfs_handle);
        fwrite("20", sizeof(char), 2, sysfs_handle);

        fclose(sysfs_handle);
    }

    if((sysfs_handle =fopen("/sys/class/gpio/export", "w" )) != NULL) {
        fwrite("20", sizeof(char), 2, sysfs_handle);

        fclose(sysfs_handle);
    }

    if((sysfs_handle =fopen("/sys/class/gpio/export", "w" )) != NULL) {
        fwrite("21", sizeof(char), 2, sysfs_handle);

        fclose(sysfs_handle);
    }



    if((sysfs_handle =fopen("/sys/class/gpio/gpio3/direction", "w" )) != NULL) {
        fwrite("out", sizeof(char), 4, sysfs_handle);
        fclose(sysfs_handle);
    }

    if((sysfs_handle =fopen("/sys/class/gpio/gpio20/direction", "w" )) != NULL) {
        fwrite("out", sizeof(char), 4, sysfs_handle);
        fclose(sysfs_handle);
    }

    if((sysfs_handle =fopen("/sys/class/gpio/gpio21/direction", "w" )) != NULL) {
        fwrite("out", sizeof(char), 4, sysfs_handle);
        fclose(sysfs_handle);
    }



    w.show();

    return a.exec();
}
