#ifndef CARSHOWWINDOW_H
#define CARSHOWWINDOW_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlTableModel>

namespace Ui {
class CarShowWindow;
}

class CarShowWindow : public QDialog
{
    Q_OBJECT

public:
    explicit CarShowWindow(QWidget *parent = nullptr);
    ~CarShowWindow();
public slots:
    void on_createCars();
private:
    Ui::CarShowWindow *ui;
    QSqlTableModel* model;
    QSqlDatabase db;
};

#endif // CARSHOWWINDOW_H
