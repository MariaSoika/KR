#include "deletecarwindow.h"
#include "ui_deletecarwindow.h"
#include "sqlitedbmanager.h"
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
        return;
    }

    QSqlQuery query;
    query.prepare("Delete from Cars where model = '"+carModelToDelete+"'");  //TODO

    if (query.exec())
    {
        QMessageBox::information(this, QString ("Delete"), QString ("Data secssecfully deleted"));
        this->accept();
    }
    else
        QMessageBox::warning(this, QString("Warning"), QString("Error of deleting data from table Cars"));
}


