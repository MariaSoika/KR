#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlTableModel>
#include <QDebug>
#include "MySqlDBManager.h"
#include "Car.h"

void MySqlDBManager::connectToDataBase()
{
    //QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    //db.setHostName("127.0.0.1:3306");
    //db.setUserName("root");
    //db.setPassword("");
    //db.setDatabaseName("KR");
   // if (db.open())
   // {
    //    qInfo("Open");
   // }
   // else
   // {
   //     qCritical("Error of opening");
   // }
    db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./Database.db");
    if (db.open())
    {
        qInfo("Open");
    }
    else
    {
        throw new runtime_error("sdf");
        qCritical("Error of opening");
    }
}

void MySqlDBManager::closeDataBaseCars()
{
    db.close();
}

QSqlDatabase MySqlDBManager::getDB()
{
    return db;
}

bool MySqlDBManager::createTableCars()
{
    query = new QSqlQuery(db);
    if (!query->exec("CREATE TABLE 'Cars' (\
                     'id' INTEGER,\
                     'brand' VARCHAR(255),\
                     'model'	VARCHAR(255),\
                     'Year'	INTEGER,\
                     'color'	VARCHAR(255),\
                     'price'	INTEGER,\
                     'registstration_Date'	INTEGER,\
                     PRIMARY KEY('id' AUTOINCREMENT)\
                     );"))
        {
            qDebug("Database: error of creating table Cars");
            qDebug() << query->lastError().text();
            return false;
        }
        else
        {
            return true;
        }
}

bool MySqlDBManager::inserIntoTableCars(const Car &car)
{
        QSqlQuery query(db);
        query.prepare("INSERT INTO Cars(brand,model,year,color,price,registstration_Date) "
                      "VALUES(:value2,:value3,:value4,:value5,:value6,:value7 )");
        query.bindValue(":value2", car.getBrand());
        query.bindValue(":value3", car.getModel());
        query.bindValue(":value4", car.getYear());
        query.bindValue(":value5", car.getColor());
        query.bindValue(":value6", car.getPrice());
        query.bindValue(":value7", car.getRegistrationDate());
        if (query.exec())
        {
            qDebug("Data insert into table Cars");
            return true;
        }
        else
        {
            qDebug("Database: erorr of inserting table Cars");
            qDebug() << query.lastError().text();
            qDebug() << query.lastQuery();
            return false;
        }
}

