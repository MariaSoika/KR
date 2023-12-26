#include "carinfoform.h"
#include "ui_carinfoform.h"
#include "QMessageBox"
#include "QSqlQuery"

CarInfoForm::CarInfoForm(Car& car, QWidget* parent) :
    QWidget(parent), carId(car.getId()),
        ui(new Ui::CarInfoForm) {
    ui->setupUi(this);
    ui->label->setPixmap(QPixmap(car.getImage()));
    ui->labelInfo->setText("---Car info---\n"
                           "Brand: " + car.getBrand() +
                           "\nModel: " + car.getModel() +
                           "\nYear: " + QString::number(car.getYear()) +
                           "\nColor: " + car.getColor() +
                           "\nPrice: " + QString::number(car.getPrice()) +
                           "\nRegistration date: " + QString::number(car.getRegistrationDate()));
    }

CarInfoForm::~CarInfoForm() {
    delete ui;
}

void CarInfoForm::on_pbAddToBucket_clicked()
{
    emit this->selectedCarId(carId);
}

