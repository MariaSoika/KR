#ifndef BUCKET_H
#define BUCKET_H
#include <QString>
#include "car.h"

class Bucket
{
    QVector<Car*> cars;
public:
    Bucket();
    ~Bucket();
    void addCar(Car car);
};

#endif // BUCKET_H
