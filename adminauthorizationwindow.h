#ifndef ADMINAUTHORIZATIONWINDOW_H
#define ADMINAUTHORIZATIONWINDOW_H

#include "adminmainwindow.h"
#include "dbmanager.h"

#include <QDialog>

namespace Ui {
    class AdminAuthorizationWindow;
}

class AdminAuthorizationWindow : public QDialog {
    Q_OBJECT

public:
    explicit AdminAuthorizationWindow(DBManager* dbManager, QWidget* parent = nullptr);

    ~AdminAuthorizationWindow();

private
    slots:
            void on_pushButton_clicked();

private:
    Ui::AdminAuthorizationWindow* ui;
    AdminMainWindow* adminMainWindow;
    DBManager* dbManager;
};

#endif // ADMINAUTHORIZATIONWINDOW_H
