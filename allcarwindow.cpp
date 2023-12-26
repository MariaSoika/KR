#include "allcarwindow.h"
#include "ui_allcarwindow.h"
#include <QVector>
#include <QPushButton>

#include "carinfoform.h"

AllCarWindow::AllCarWindow(DBManager *dbManager, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AllCarWindow),
    dbManager(dbManager)
{
    ui->setupUi(this);
    QVector<Car>* cars = this->dbManager->getAllCars();
    foreach (Car car, cars->toList()) {
        CarInfoForm *carInfoForm = new CarInfoForm(car, this);
       // connect(carInfoForm, &CarInfoForm::selectedCarId, this, )
        carInfoForm->show();
        ui->verticalLayout->addWidget(carInfoForm);
        QPushButton.hide();
        }


}

AllCarWindow::~AllCarWindow()
{
        delete ui;
}

void AllCarWindow::on_selectedCarId(int carId)
{

}

