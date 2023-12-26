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
    if (!query.exec("CREATE TABLE 'Cars' (\
                     'id' INTEGER,\
                     'brand' VARCHAR(255),\
                     'model'	VARCHAR(255),\
                     'year'	INTEGER,\
                     'color'	VARCHAR(255),\
                     'price'	INTEGER,\
                     'registstration_date'	INTEGER,\
                     'image' VARCHAR(255),\
                     PRIMARY KEY('id' AUTOINCREMENT)\
                     );")) {
        qDebug("Database: error of creating table 'cars'");
        qDebug() << query.lastError().text();
        qDebug() << query.lastQuery();
        return false;
    }
    if (!query.exec("CREATE TABLE 'Bucket' (\
                     'brand' VARCHAR(255),\
                     'model'	VARCHAR(255),\
                     'price'	INTEGER,\
                     'image' VARCHAR(255)\
                     );")) {
        qDebug("Database: error of creating table 'Bucket'");
        qDebug() << query.lastError().text();
        return false;
    }
    if (!query.exec("CREATE TABLE 'News' (\
                    news   VARCHAR (50),\
                    date   VARCHAR (50)\
                    );")) {
        qDebug("Database: error of creating table news");
        qDebug() << query.lastError().text();
        return false;
    }
    if (!query.exec("CREATE TABLE 'Users' (\
                    id INTEGER PRIMARY KEY AUTOINCREMENT, \
                    login VARCHAR(50) UNIQUE, \
                    password VARCHAR(100), \
                    role VARCHAR(10)\
                    );")) {
        qDebug("Database: error of creating table 'users'");
        qDebug() << query.lastError().text();
        qDebug() << query.lastQuery();
        return false;
    }
    if (!query.exec("CREATE TABLE 'Sales' (\
                    id       INTEGER       PRIMARY KEY AUTOINCREMENT,\
                    firstName    VARCHAR (50),\
                    lastName VARCHAR (100),\
                    carModel     VARCHAR (50), \
                    price INTEGER \
                    );")) {
        qDebug("Database: error of creating table 'users'");
        qDebug() << query.lastError().text();
        qDebug() << query.lastQuery();
        return false;
    }
    return true;
}


bool SqliteDBManager::insertIntoTable(const Car& car) {
    QSqlQuery query(db);
    query.prepare("INSERT INTO Cars(brand,model,year,color,price,registstration_date, image) "
                  "VALUES(:value2,:value3,:value4,:value5,:value6,:value7,:value8 )");
    query.bindValue(":value2", car.getBrand());
    query.bindValue(":value3", car.getModel());
    query.bindValue(":value4", car.getYear());
    query.bindValue(":value5", car.getColor());
    query.bindValue(":value6", car.getPrice());
    query.bindValue(":value7", car.getRegistrationDate());
    query.bindValue(":value8", car.getImage());
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

QVector<Car>* SqliteDBManager::getAllCars()
{
    QVector<Car>* cars = new QVector<Car>();
    QSqlQuery query(db);
    if (query.exec("SELECT * FROM Cars"))
    {
        while(query.next()){
            QString carImage = query.value("image").toString();
            QString carBrand = query.value("brand").toString();
            QString carModel = query.value("model").toString();
            int carYear = query.value("year").toInt();
            QString carColor = query.value("color").toString();
            int carPrice = query.value("price").toInt();
            int carRegistrarionDate = query.value("registstration_Date").toInt();
            Car car(carBrand, carModel, carYear, carColor, carPrice, carRegistrarionDate, carImage);
            cars->push_back(car);

//            QPixmap carImage(carImage);
//            labelCarImage->setPixmap(carImage.scaled(labelCarImage->size(), Qt::KeepAspectRatio));

//            labelCarInfo->setText("---Car info---"
//                                  "\nBrand: " + carBrand +
//                                  "\nModel: " + carModel +
//                                  "\nYear: " + QString::number(carYear) +
//                                  "\nColor: " + carColor +
//                                  "\nPrice: " + QString::number(carPrice) +
//                                  "\nRegistration date: " + QString::number(carRegistrarionDate));
        }
    }
    return cars;
}

bool SqliteDBManager::insetrIntoTableNews(const News &news)
{
    QSqlQuery query(db);
    query.prepare("INSERT INTO News(news,date) "
                  "VALUES(:value1,:value2)");
    query.bindValue(":value1", news.getNews());
    query.bindValue(":value3", news.getDate());
    if (query.exec()) {
        qDebug("Data insert into table News");
        return true;
    } else {
        qDebug("Database: erorr of inserting table News");
        qDebug() << query.lastError().text();
        qDebug() << query.lastQuery();
        return false;
    }
}



