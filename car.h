#ifndef CAR1H_H
#define CAR1H_H

#include <QString>
#include <QPixmap>

using namespace std;

class Car {
protected:
    QString brand;
    QString model;
    int year;
    QString color;
    int price;
    int registrationDate;
    QString image;
public:

    QString getBrand() const;

    void setBrand(QString brand);

    QString getModel() const;

    void setModel(QString model);

    int getYear() const;

    void setYear(int year);

    QString getColor() const;

    void setColor(QString color);

    int getPrice() const;

    void setPrice(int price);

    int getRegistrationDate() const;

    void setRegistrationDate(int registrationDate);

    QString getImage() const;

    void setImage(QString image);

    Car();

    Car(QString brand, QString model, int year, QString color, int price, int registrationDate, QString image);

    ~Car();
};

#endif // CAR1H_H
