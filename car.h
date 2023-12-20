#ifndef CAR1H_H
#define CAR1H_H

#include <QString>

using namespace std;

class Car {
protected:
    QString brand;
    QString model;
    int year;
    QString color;
    int price;
    int registrationDate;
public:

    QString getBrand() const;

    void setBrand(QString brand1);

    QString getModel() const;

    void setModel(QString model1);

    int getYear() const;

    void setYear(int year1);

    QString getColor() const;

    void setColor(QString color1);

    int getPrice() const;

    void setPrice(int price1);

    int getRegistrationDate() const;

    void setRegistrationDate(int registrationDate1);

    Car();

    Car(QString brand, QString model, int year, QString color, int price, int registrationDate);

    ~Car();
};

#endif // CAR1H_H
