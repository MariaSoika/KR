#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QSqlDatabase>
#include <QLabel>
#include "car.h"
#include "news.h"

class DBManager {

public:
    virtual void connectToDataBase() = 0;

    virtual void closeDataBase() = 0;

    virtual QSqlDatabase getDB() = 0;

    virtual bool insertIntoTable(const Car& car) = 0;

    virtual void displayAllCars(QLabel* labelinfo, QLabel* lableImage) = 0;

    virtual bool insetrIntoTableNews(const News& news) = 0;
};

#endif // DBMANAGER_H
