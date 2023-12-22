#include "deletecarwindow.h"
#include "ui_deletecarwindow.h"
#include "MySqlDBManager.h"
#include <QMessageBox>

DeleteCarWindow::DeleteCarWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeleteCarWindow)
{
    ui->setupUi(this);
}

DeleteCarWindow::~DeleteCarWindow()
{
    delete ui;
}


void DeleteCarWindow::on_pushButton_clicked()
{
    QString carModelToDelete = ui->lineEditCarNameToDelete->text();

    if(carModelToDelete.isEmpty())
    {
        QMessageBox::warning(this, QString("Warning"), QString("Field cannot be empty"));
    }

    QSqlQuery query;
    query.prepare("Delete from Cars where model = '"+carModelToDelete+"'");

    if (query.exec())
    {
        QMessageBox::information(this, QString ("Delete"), QString ("Data secssecfully deleted"));
        this->close();
    }
    else
        QMessageBox::warning(this, QString("Warning"), QString("Error of deleting data from table Cars"));

}


