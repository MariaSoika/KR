#ifndef ALLCARWINDOW_H
#define ALLCARWINDOW_H

#include <QDialog>
#include "dbmanager.h"

namespace Ui {
class AllCarWindow;
}

class AllCarWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AllCarWindow(DBManager *dbManager, QWidget *parent = nullptr);
    ~AllCarWindow();

private slots:
    void on_selectedCarId(int carId);

private:
    Ui::AllCarWindow *ui;
    DBManager *dbManager;
};

#endif // ALLCARWINDOW_H
