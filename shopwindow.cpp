#include "shopwindow.h"
#include "ui_shopwindow.h"
#include <QVector>

#include "carinfoform.h"

ShopWindow::ShopWindow(DBManager *dbManager,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShopWindow),
    dbManager(dbManager)
{
    ui->setupUi(this);
    QVector<Car>* cars = this->dbManager->getAllCars();
    foreach (Car car, cars->toList()) {
        CarInfoForm *carInfoForm = new CarInfoForm(car, this);
        // connect(carInfoForm, &CarInfoForm::selectedCarId, this, )
        carInfoForm->show();
        ui->verticalLayout->addWidget(carInfoForm);
    }
}

ShopWindow::~ShopWindow()
{
    delete ui;
}
