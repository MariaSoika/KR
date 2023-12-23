#include "addcarwindow.h"
#include "ui_addcarwindow.h"
#include "car.h"
#include <QMessageBox>
#include <QFileDialog>


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
        regDate.isEmpty() || logo.isEmpty()) {
        QMessageBox::warning(this, QString("Warning"), QString("There is an empty line"));
    }     else
    {
        car = new Car(brand, model, year.toInt(), color, price.toInt(), regDate.toInt(), logo);
        qDebug() << "Image Path: " << car->getImage();
        this->dbManager->insertIntoTable(*car);
        QMessageBox::information(this, QString("Add"), QString("Car add secssefully"));
        ui->lineEditBrand->clear();
        ui->lineEditModel->clear();
        ui->lineEditYear->clear();
        ui->lineEditColor->clear();
        ui->lineEditPrice->clear();
        ui->lineEditRegDate->clear();
        this->accept();
    }
}

void AddCarWindow::on_pushButton_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(nullptr, "Select game logo", QDir::homePath(), "Images (*.png)");

    this->logo = filePath;

    ui->logoHandler->setPixmap(QPixmap(filePath));
}

