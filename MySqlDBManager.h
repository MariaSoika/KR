#ifndef MYSQLDBMANAGER_H
#define MYSQLDBMANAGER_H
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlTableModel>
#include "Car.h"
#include "Report.h"

class MySqlDBManager
{
public:
    void connectToDataBase();
    void closeDataBaseCars();
    QSqlDatabase getDB();
    bool createTableCars();
    bool inserIntoTableCars(const Car& car);



private:
    QSqlDatabase db;
    QSqlQuery* query;
    QSqlTableModel* model;
};
#endif // MYSQLDBMANAGER_H
