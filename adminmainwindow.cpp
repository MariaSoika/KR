#include "adminmainwindow.h"
#include "ui_adminmainwindow.h"
#include "MySqlDBManager.h"
#include "carshowwindow.h"

AdminMainWindow::AdminMainWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminMainWindow)
{
    ui->setupUi(this);
    adminReportsWindow = new AdminReportsWindow(this);
    adminReportsWindow->setModal(true);

    carShowWindow= new CarShowWindow(this);
    carShowWindow->setModal(true);

    this->dbManager = new MySqlDBManager();
    this->dbManager->connectToDataBase();

    //this->dbManager->createTableCars();

    addCarWindow=new AddCarWindow(this->dbManager,this);
    addCarWindow->setModal(true);
    connect(addCarWindow, &AddCarWindow::createCars, carShowWindow, &CarShowWindow::on_createCars);

    deleteCarWindow = new DeleteCarWindow(this);
    deleteCarWindow->setModal(true);

    findCarWindow = new FindCarWindow(this);
    findCarWindow->setModal(true);
}

AdminMainWindow::~AdminMainWindow()
{
    delete ui;
}

void AdminMainWindow::on_pushButton_5_clicked()
{
    adminReportsWindow->show();
}


void AdminMainWindow::on_pushButton_2_clicked()
{
    carShowWindow->show();
}


void AdminMainWindow::on_pushButton_clicked()
{
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

