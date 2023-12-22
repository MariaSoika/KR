#ifndef DELETECARWINDOW_H
#define DELETECARWINDOW_H
#include "MySqlDBManager.h"

#include <QDialog>

namespace Ui {
class DeleteCarWindow;
}

class DeleteCarWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteCarWindow(QWidget *parent = nullptr);
    ~DeleteCarWindow();


private slots:
    void on_pushButton_clicked();

private:
    Ui::DeleteCarWindow *ui;
    MySqlDBManager *dbManager;
};

#endif // DELETECARWINDOW_H
