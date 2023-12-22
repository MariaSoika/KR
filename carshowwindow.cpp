#include "carshowwindow.h"
#include "ui_carshowwindow.h"
#include <QMessageBox>

CarShowWindow::CarShowWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CarShowWindow)
{
    ui->setupUi(this);
    model = new QSqlTableModel(this, db);
    model->setTable("Cars");
    model->select();
    ui->tableView->setModel(model);
}

CarShowWindow::~CarShowWindow()
{
    delete ui;
}

void CarShowWindow::on_createCars()
{
    model = new QSqlTableModel(this, db);
    model->setTable("Cars");
    model->select();
    ui->tableView->setModel(model);
    qDebug() << model->lastError().text();
}
