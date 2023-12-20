#ifndef MYSQLDBMANAGER_H
#define MYSQLDBMANAGER_H
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlTableModel>
#include "Car.h"

class MySqlDBManager
{
public:
    void connectToDataBase();
    void closeDataBase();
    QSqlDatabase getDB();
    bool createTableCars();
    bool inserIntoTable(const Car& car);
   // bool inserIntoTable(const Medicine& medicine);
private:
    QSqlDatabase db;
    QSqlQuery* query;
    QSqlTableModel* model;
};
#endif // MYSQLDBMANAGER_H
