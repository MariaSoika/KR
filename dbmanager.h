#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QSqlDatabase>
#include <QLabel>
#include "car.h"
#include "news.h"
#include "bucket.h"

class DBManager {

public:
    virtual void connectToDataBase() = 0;

    virtual void closeDataBase() = 0;

    virtual QSqlDatabase getDB() = 0;

    virtual bool insertIntoTable(const Car& car) = 0;

    virtual QVector<Car>* getAllCars() = 0;

    virtual bool insetrIntoTableNews(const News& news) = 0;

    //virtual bool insetrIntoTableBucket() = 0;
};

#endif // DBMANAGER_H
