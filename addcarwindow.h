#ifndef ADDCARWINDOW_H
#define ADDCARWINDOW_H

#include <QDialog>
#include "car.h"
#include "dbmanager.h"

namespace Ui {
    class AddCarWindow;
}

class AddCarWindow : public QDialog {
    Q_OBJECT

public:
    explicit AddCarWindow(DBManager* dbManager, QWidget* parent = nullptr);

    ~AddCarWindow();

private
    slots:
            void on_pushButtonCreate_clicked();

    signals:
            void createCars(Car * );

private:
    Ui::AddCarWindow* ui;
    Car* car;
    DBManager* dbManager;
};

#endif // ADDCARWINDOW_H
