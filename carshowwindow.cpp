#include "carshowwindow.h"
#include "ui_carshowwindow.h"
#include <QMessageBox>

CarShowWindow::CarShowWindow(DBManager *dbManager, QWidget* parent) :
    QDialog(parent),
    ui(new Ui::CarShowWindow) {
    ui->setupUi(this);
    model = new QSqlTableModel(this, dbManager->getDB());
    model->setTable("Cars");
    model->select();
    ui->tableView->setModel(model);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);
}

CarShowWindow::~CarShowWindow() {
    delete ui;
}

void CarShowWindow::on_createCars() {
    model->select();
}
