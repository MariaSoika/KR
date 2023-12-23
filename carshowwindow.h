#ifndef CARSHOWWINDOW_H
#define CARSHOWWINDOW_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlTableModel>
#include "dbmanager.h"

namespace Ui {
    class CarShowWindow;
}

class CarShowWindow : public QDialog {
    Q_OBJECT

public:
    explicit CarShowWindow(DBManager* dbManager, QWidget* parent = nullptr);

    ~CarShowWindow();

public
    slots:
            void on_createCars();
private:
    Ui::CarShowWindow* ui;
    QSqlTableModel* model;
};

#endif // CARSHOWWINDOW_H
