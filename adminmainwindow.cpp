#include "adminmainwindow.h"
#include "ui_adminmainwindow.h"
#include "carshowwindow.h"

AdminMainWindow::AdminMainWindow(DBManager* dbManager, QWidget* parent) :
        QDialog(parent), ui(new Ui::AdminMainWindow),
        dbManager(dbManager) {
    ui->setupUi(this);
    adminReportsWindow = new AdminReportsWindow(this);
    adminReportsWindow->setModal(true);

    carShowWindow = new CarShowWindow(dbManager, this);
    carShowWindow->setModal(true);

    //this->dbManager->createTableCars();

    addCarWindow=new AddCarWindow(this->dbManager,this);
    addCarWindow->setModal(true);
    connect(addCarWindow, &AddCarWindow::accepted, carShowWindow, &CarShowWindow::on_createCars);
    connect(addCarWindow, &AddCarWindow::createCars, carShowWindow, &CarShowWindow::on_createCars);

    deleteCarWindow = new DeleteCarWindow(this->dbManager,this);
    deleteCarWindow->setModal(true);
    connect(deleteCarWindow, &DeleteCarWindow::accepted, carShowWindow, &CarShowWindow::on_createCars);

    findCarWindow = new FindCarWindow(this);
    findCarWindow->setModal(true);
}

AdminMainWindow::~AdminMainWindow() {
    delete ui;
}

void AdminMainWindow::on_pushButton_5_clicked() {
    adminReportsWindow->show();
}


void AdminMainWindow::on_pushButton_2_clicked() {
    carShowWindow->show();
}


void AdminMainWindow::on_pushButton_clicked() {
    addCarWindow->show();
}


void AdminMainWindow::on_pushButtonDelete_clicked()
{
    deleteCarWindow->show();
}


void AdminMainWindow::on_pushButtonFind_clicked()
{
    findCarWindow->show();
}

