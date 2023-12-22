#ifndef ADMINMAINWINDOW_H
#define ADMINMAINWINDOW_H

#include <QDialog>
#include "adminreportswindow.h"
#include "MySqlDBManager.h"
#include "carshowwindow.h"
#include "addcarwindow.h"
#include "deletecarwindow.h"
#include "findcarwindow.h"

namespace Ui {
class AdminMainWindow;
}

class AdminMainWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AdminMainWindow(QWidget *parent = nullptr);
    ~AdminMainWindow();

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButtonDelete_clicked();

    void on_pushButtonFind_clicked();

private:
    Ui::AdminMainWindow *ui;
    AdminReportsWindow *adminReportsWindow;
    MySqlDBManager *dbManager;
    CarShowWindow *carShowWindow;
    AddCarWindow *addCarWindow;
    DeleteCarWindow *deleteCarWindow;
    FindCarWindow *findCarWindow;
};

#endif // ADMINMAINWINDOW_H
