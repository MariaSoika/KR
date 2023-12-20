#include "mainwindow.h"
#include "dialogtest.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
   // DialogTest test;
    //test.show();
    return a.exec();
}
