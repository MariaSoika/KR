#include "sqlitedbmanager.h"
#include "car.h"

#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QFile>
#include <QSqlTableModel>
#include <QDebug>

SqliteDBManager::SqliteDBManager() {
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(DATABASE_FILE_NAME);


    //QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    //db.setHostName("127.0.0.1:3306");
    //db.setUserName("root");
    //db.setPassword("");
    //db.setDatabaseName("KR");
}


void SqliteDBManager::connectToDataBase() {
    if (QFile(DATABASE_FILE_NAME).exists()) {
        this->openDataBase();
    } else {
        this->restoreDataBase();
    }
}

bool SqliteDBManager::openDataBase() {
    /* База даних відкривається по вказаному шляху
     * та імені бази даних, якщо вона існує
     * */
    if (db.open()) {
        qInfo("Open");
        return true;
    } else
        qCritical("Error of opening");
    return false;
}

bool SqliteDBManager::restoreDataBase() {
    if (this->openDataBase()) {
        if (!this->createTables()) {
            return false;
        } else {
            return true;
        }
    } else {
        qDebug() << "Не вдалось відновити базу даних";
        return false;
    }
}

void SqliteDBManager::closeDataBase() {
    db.close();
}

QSqlDatabase SqliteDBManager::getDB() {
    return db;
}

bool SqliteDBManager::createTables() {
    QSqlQuery query(db);
    if (!query.exec("CREATE TABLE 'cars' (\
                     'id' INTEGER,\
                     'brand' VARCHAR(255),\
                     'model'	VARCHAR(255),\
                     'year'	INTEGER,\
                     'color'	VARCHAR(255),\
                     'price'	INTEGER,\
                     'registstration_date'	INTEGER,\
                     PRIMARY KEY('id' AUTOINCREMENT)\
                     );")) {
        qDebug("Database: error of creating table 'cars'");
        qDebug() << query.lastError().text();
        return false;
    }
    if (!query.exec("CREATE TABLE users (\
                    id       INTEGER       PRIMARY KEY AUTOINCREMENT,\
                    login    VARCHAR (50)  UNIQUE,\
                    password VARCHAR (100),\
                    role     VARCHAR (10) \
                    );")) {
        qDebug("Database: error of creating table 'users'");
        qDebug() << query.lastError().text();
        return false;
    }
    return true;
}


bool SqliteDBManager::insertIntoTable(const Car& car) {
    QSqlQuery query(db);
    query.prepare("INSERT INTO cars(brand,model,year,color,price,registstration_date) "
                  "VALUES(:value2,:value3,:value4,:value5,:value6,:value7 )");
    query.bindValue(":value2", car.getBrand());
    query.bindValue(":value3", car.getModel());
    query.bindValue(":value4", car.getYear());
    query.bindValue(":value5", car.getColor());
    query.bindValue(":value6", car.getPrice());
    query.bindValue(":value7", car.getRegistrationDate());
    if (query.exec()) {
        qDebug("Data insert into table cars");
        return true;
    } else {
        qDebug("Database: erorr of inserting table cars");
        qDebug() << query.lastError().text();
        qDebug() << query.lastQuery();
        return false;
    }
}

