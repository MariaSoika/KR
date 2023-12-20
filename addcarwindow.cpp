#include "addcarwindow.h"
#include "ui_addcarwindow.h"
#include "car.h"
#include <QMessageBox>

AddCarWindow::AddCarWindow(DBManager* dbManager, QWidget* parent) :
        QDialog(parent), ui(new Ui::AddCarWindow),
        dbManager(dbManager) {
    ui->setupUi(this);
}

AddCarWindow::~AddCarWindow() {
    delete ui;
}

void AddCarWindow::on_pushButtonCreate_clicked() {
    QString brand = ui->lineEditBrand->text();
    QString model = ui->lineEditModel->text();
    QString year = ui->lineEditYear->text();
    QString color = ui->lineEditColor->text();
    QString price = ui->lineEditPrice->text();
    QString regDate = ui->lineEditRegDate->text();

    if (brand.isEmpty() || model.isEmpty() || year.isEmpty() || color.isEmpty() || price.isEmpty() ||
        regDate.isEmpty()) {
        QMessageBox::warning(this, QString("Warning"), QString("There is an empty line"));
    } else {
        car = new Car(brand, model, year.toInt(), color, price.toInt(), regDate.toInt());
        this->dbManager->insertIntoTable(*car);
        this->accept();
    }
}
