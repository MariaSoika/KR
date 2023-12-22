#include "carinfoform.h"
#include "ui_carinfoform.h"
#include "QMessageBox"
#include "QSqlQuery"

CarInfoForm::CarInfoForm(QWidget* parent) :
        QWidget(parent),
        ui(new Ui::CarInfoForm) {
    ui->setupUi(this);
    QSqlQuery query;
    query.prepare("SELECT * FROM Cars WHERE model = :carModel");
    query.bindValue(":carModel", "Model Y");

    if (query.exec())
    {
        if (query.next())
        {
            QString foundCarBrand = query.value("brand").toString();
            QString foundCarModel = query.value("model").toString();
            int foundCarYear = query.value("year").toInt();
            QString foundCarColor = query.value("color").toString();
            int foundCarPrice = query.value("price").toDouble();
            int foundCarRegistrationDate = query.value("registration_date").toInt();

            ui->labelInfo->setText("---Car info---\n"
                                   "Brand: " + foundCarBrand +
                                   "\nModel: " + foundCarModel +
                                   "\nYear: " + QString::number(foundCarYear) +
                                   "\nColor: " + foundCarColor +
                                   "\nPrice: " + QString::number(foundCarPrice) +
                                   "\nRegistration date: " + QString::number(foundCarRegistrationDate));
        }
    }
}

CarInfoForm::~CarInfoForm() {
    delete ui;
}
