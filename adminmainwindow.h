#ifndef ADMINMAINWINDOW_H
#define ADMINMAINWINDOW_H

#include <QDialog>
#include "adminreportswindow.h"
#include "dbmanager.h"
#include "carshowwindow.h"
#include "addcarwindow.h"

namespace Ui {
    class AdminMainWindow;
}

class AdminMainWindow : public QDialog {
    Q_OBJECT

public:
    explicit AdminMainWindow(DBManager* dbManager, QWidget* parent = nullptr);

    ~AdminMainWindow();

private
    slots:
            void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::AdminMainWindow* ui;
    AdminReportsWindow* adminReportsWindow;
    DBManager* dbManager;
    CarShowWindow* carShowWindow;
    AddCarWindow* addCarWindow;
};

#endif // ADMINMAINWINDOW_H
