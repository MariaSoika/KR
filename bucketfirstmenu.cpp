#include "bucketfirstmenu.h"
#include "ui_bucketfirstmenu.h"

BucketFirstMenu::BucketFirstMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BucketFirstMenu)
{
    ui->setupUi(this);
}

BucketFirstMenu::~BucketFirstMenu()
{
    delete ui;
}
