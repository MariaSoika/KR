#include "allcarwindow.h"
#include "ui_allcarwindow.h"

AllCarWindow::AllCarWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AllCarWindow)
{
    ui->setupUi(this);
}

AllCarWindow::~AllCarWindow()
{
    delete ui;
}

void AllCarWindow::on_pushButton_clicked()
{
    this->dbManager->displayAllCars(ui->labelCarInfo, ui->labelCarImage);
}

