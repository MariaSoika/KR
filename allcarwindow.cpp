#include "allcarwindow.h"
#include "ui_allcarwindow.h"
#include "allcarwindow.h"
#include "carinfoform.h"

AllCarWindow::AllCarWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AllCarWindow)
{
    ui->setupUi(this);
    CarInfoForm* carInfo1 = new CarInfoForm();
    ui->verticalLayout->addWidget(carInfo1);

    CarInfoForm* carInfo2 = new CarInfoForm();
    ui->verticalLayout->addWidget(carInfo2);

    CarInfoForm* carInfo3 = new CarInfoForm();
    ui->verticalLayout->addWidget(carInfo3);
}

AllCarWindow::~AllCarWindow()
{
    delete ui;
}
