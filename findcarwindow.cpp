#include "findcarwindow.h"
#include "ui_findcarwindow.h"
#include <QMessageBox>

FindCarWindow::FindCarWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindCarWindow)
{
    ui->setupUi(this);
}

FindCarWindow::~FindCarWindow()
{
    delete ui;
}

void FindCarWindow::on_pushButton_clicked()
{
    QString carModelToSearch = ui->lineEditCarNameToSearch->text();

    if(carModelToSearch.isEmpty())
    {
        QMessageBox::warning(this, QString("Warning"), QString("Field cannot be empty"));
    }
    else
    {
        QSqlQuery query;
        query.prepare("SELECT * FROM Cars WHERE model = :carModel");
        query.bindValue(":carModel", carModelToSearch);

        if (query.exec())
        {
            if (query.next())
            {
                // Отримати дані про знайдений автомобіль та вивести їх
                QString foundCarBrand = query.value("brand").toString();
                QString foundCarModel = query.value("model").toString();
                int foundCarYear = query.value("year").toInt();
                QString foundCarColor = query.value("color").toString();
                int foundCarPrice = query.value("price").toInt();
                int foundCarRegistrarionDate = query.value("registstration_Date").toInt();


                ui->labelCarInfo->setText("---Car info---"
                "\nBrand: " + foundCarBrand +
                "\nModel: " + foundCarModel +
                "\nYear: " + QString::number(foundCarYear) +
                "\nColor: " + foundCarColor +
                "\nPrice: " + QString::number(foundCarPrice) +
                "\nRegistration date: " + QString::number(foundCarRegistrarionDate)
                 );
            }
            else
            {
                QMessageBox::information(this, QString("Search"), QString("Car not found"));
            }
        }
        else
        {
            QMessageBox::warning(this, QString("Warning"), QString("Error searching data in table Cars"));
            qDebug() << "Error: " << query.lastError();
        }
    }

}

