#ifndef ADDCARWINDOW_H
#define ADDCARWINDOW_H

#include <QDialog>
#include "Car.h"
#include "MySqlDBManager.h"
namespace Ui {
class AddCarWindow;
}

class AddCarWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddCarWindow(QWidget *parent = nullptr);
    ~AddCarWindow();

private slots:
    void on_pushButtonCreate_clicked();

signals:
    void createCars(Car*);

private:
    Ui::AddCarWindow *ui;
    Car* car;
    MySqlDBManager *dbManager;
};

#endif // ADDCARWINDOW_H
