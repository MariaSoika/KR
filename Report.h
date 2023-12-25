#ifndef REPORT_H
#define REPORT_H

#include <QString>
#include <cstring>
#include <iostream>
using namespace std;

class Report
{
protected:
    QString month;
    QString carModel;
    int sales;

public:
    Report();
    Report(QString month, QString carModel, int sales);
    ~Report();
};

#endif // REPORT_H
