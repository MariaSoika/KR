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
    explicit AllCarWindow(QWidget *parent = nullptr);
    ~AllCarWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AllCarWindow *ui;
    DBManager *dbManager;
};

#endif // ALLCARWINDOW_H
