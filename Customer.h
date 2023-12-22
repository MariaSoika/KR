#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <QString>
#include <cstring>
#include <iostream>

using namespace std;

class Customer
{
protected:
    QString firstName;
    QString lastName;
    QString number;

public:
    Customer();
    Customer(QString firstName, QString lastname);
    ~Customer();
};

#endif // CUSTOMER_H
