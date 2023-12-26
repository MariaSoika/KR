#include "car.h"

int Car::getId()
{
    return id;
}

QString Car::getBrand() const {
    return brand;
}

void Car::setBrand(QString brand) {
    this->brand = brand;
}

QString Car::getModel() const {
    return model;
}

void Car::setModel(QString model) {
    this->model = model;
}

int Car::getYear() const {
    return year;
}

void Car::setYear(int year) {
    this->year = year;
}

QString Car::getColor() const {
    return color;
}

void Car::setColor(QString color) {
    this->color = color;
}

int Car::getPrice() const {
    return price;
}

void Car::setPrice(int price) {
    this->price = price;
}

int Car::getRegistrationDate() const {
    return registrationDate;
}

void Car::setRegistrationDate(int registrationDate) {
    this->registrationDate = registrationDate;
}

QString Car::getImage() const{
    return image; // Припустимо, що image_path - це приватне поле класу Car
}

void Car::setImage(QString image){
    this->image=image;
}

Car::Car() {
    brand = "";
    model = "";
    year = 0;
    color = "";
    price = 0;
    registrationDate = 0;
    image= "";
}

Car::Car(QString brand, QString model, int year, QString color, int price, int registrationDate, QString image) {
    this->brand = brand;
    this->model = model;
    this->year = year;
    this->color = color;
    this->price = price;
    this->registrationDate = registrationDate;
    this->image = image;

}

Car::~Car()
{

}
