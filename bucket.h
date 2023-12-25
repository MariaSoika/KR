#ifndef BUCKET_H
#define BUCKET_H
#include <QString>

class Bucket
{
protected:
    QString brand;
    QString model;
    int price;
    int registrationDate;
    QString image;
public:
    Bucket();
};

#endif // BUCKET_H
