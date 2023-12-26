#include "bucketfirstmenu.h"
#include "ui_bucketfirstmenu.h"
#include <QMessageBox>

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

void BucketFirstMenu::on_pushButton_clicked()
{
    QString Date = ui->lineEditDate->text();

    if(Date.isEmpty())
    {
        QMessageBox::warning(this, QString("Warning"), QString("Field cannot be empty"));
    }
    date=Date;
}

