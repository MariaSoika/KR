#ifndef SQLITEDBMANAGER_H
#define SQLITEDBMANAGER_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlTableModel>

#include "dbmanager.h"

#define DATABASE_FILE_NAME   "Database.db"

class SqliteDBManager : public DBManager {
public:
    SqliteDBManager();

    void connectToDataBase() override;

    void closeDataBase() override;

    QSqlDatabase getDB() override;

    bool insertIntoTable(const Car& car) override;

    void displayAllCars(QLabel* labelinfo, QLabel* lableImage) override;

    bool  insetrIntoTableNews(const News& news);

private:
    bool openDataBase();
    bool createTables();
    bool restoreDataBase();

    QSqlDatabase db;
    // QSqlQuery* query;
    // QSqlTableModel* model;
};

#endif // SQLITEDBMANAGER_H
