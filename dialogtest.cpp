#include "dialogtest.h"
#include "ui_dialogtest.h"
#include "carinfoform.h"

DialogTest::DialogTest(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogTest)
{
    ui->setupUi(this);
    CarInfoForm* carInfo = new CarInfoForm();
    ui->verticalLayout_2->addWidget(carInfo);

    //CarInfoForm* carInfo2 = new CarInfoForm();
    //ui->verticalLayout_2->addWidget(carInfo2);

    //CarInfoForm* carInfo3 = new CarInfoForm();
   // ui->verticalLayout_2->addWidget(carInfo3);

}

DialogTest::~DialogTest()
{
    delete ui;
}
