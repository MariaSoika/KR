#ifndef DELETECARWINDOW_H
#define DELETECARWINDOW_H
#include "dbmanager.h"

#include <QDialog>
#include <QSqlTableModel>

namespace Ui {
class DeleteCarWindow;
}

class DeleteCarWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteCarWindow(DBManager *dbManager,QWidget *parent = nullptr);
    ~DeleteCarWindow();


private slots:
    void on_pushButton_clicked();

    void on_tableView_clicked(const QModelIndex &index);

private:
    Ui::DeleteCarWindow *ui;
    DBManager *dbManager;
    QSqlTableModel *model;
    int row;
};

#endif // DELETECARWINDOW_H
