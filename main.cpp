#include "mainwindow.h"
#include "sqlitedbmanager.h"

#include <QApplication>

int main(int argc, char* argv[]) {
    QApplication a(argc, argv);
    DBManager* dbManager = new SqliteDBManager();

    MainWindow w(dbManager);
    w.show();
    // DialogTest test;
    //test.show();
    return a.exec();
}
