#ifndef SHOPWINDOW_H
#define SHOPWINDOW_H

#include <QDialog>
#include "dbmanager.h"

namespace Ui {
class ShopWindow;
}

class ShopWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ShopWindow(DBManager *dbManager, QWidget *parent = nullptr);
    ~ShopWindow();

private:
    Ui::ShopWindow *ui;
    DBManager *dbManager;
};

#endif // SHOPWINDOW_H
