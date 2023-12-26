#include "mainwindow.h"
#include "sqlitedbmanager.h"
#include "dbmanager.h"

#include <QApplication>

int main(int argc, char* argv[]) {
    QApplication a(argc, argv);
    DBManager* dbManager = new SqliteDBManager();
    //SqliteDBManager* dbManager = new SqliteDBManager();
    dbManager->connectToDataBase();

    MainWindow w(dbManager);
    w.show();
    // DialogTest test;
    //test.show();
    return a.exec();
}
