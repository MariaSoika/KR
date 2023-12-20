#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QSqlDatabase>
#include "car.h"

class DBManager {

public:
    virtual void connectToDataBase() = 0;

    virtual void closeDataBase() = 0;

    virtual QSqlDatabase getDB() = 0;

    virtual bool insertIntoTable(const Car& car) = 0;
};

#endif // DBMANAGER_H
