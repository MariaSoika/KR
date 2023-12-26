#ifndef CARINFOFORM_H
#define CARINFOFORM_H

#include <QWidget>
#include "car.h"

namespace Ui {
    class CarInfoForm;
}

class CarInfoForm : public QWidget {
    Q_OBJECT

public:
    explicit CarInfoForm(Car& car, QWidget* parent = nullptr);

    ~CarInfoForm();

signals:
    void selectedCarId(int id);

private slots:
    void on_pbAddToBucket_clicked();

private:
    Ui::CarInfoForm* ui;
    int carId;
};

#endif // CARINFOFORM_H
