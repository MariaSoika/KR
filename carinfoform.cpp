#include "carinfoform.h"
#include "ui_carinfoform.h"

CarInfoForm::CarInfoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CarInfoForm)
{
    ui->setupUi(this);
}

CarInfoForm::~CarInfoForm()
{
    delete ui;
}
