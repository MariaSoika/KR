#include "Car.h"
QString Car::getBrand() const
{
    return brand;
}

void Car::setBrand(QString brand1)
{
    brand= brand1;
}

QString Car::getModel() const
{
    return model;
}

void Car::setModel(QString model1)
{
    model=model1;
}

int Car::getYear() const
{
    return year;
}

void Car::setYear(int year1)
{
    year=year1;
}

QString Car::getColor() const
{
    return color;
}

void Car::setColor(QString color1)
{
    color=color1;
}

int Car::getPrice() const
{
    return price;
}

void Car::setPrice(int price1)
{
    price=price1;
}

int Car::getRegistrationDate() const
{
    return registrationDate;
}

void Car::setRegistrationDate(int registrationDate1)
{
    registrationDate=registrationDate1;
}

Car::Car()
{
    brand="";
    model="";
    year=0;
    color="";
    price=0;
    registrationDate=0;
}

Car::Car(QString brand, QString model, int year, QString color, int price, int registrationDate)
{
    this->brand=brand;
    this->model=model;
    this->year=year;
    this->color=color;
    this->price=price;
    this->registrationDate=registrationDate;

}

Car::~Car()
{

}
