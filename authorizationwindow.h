#ifndef AUTHORIZATIONWINDOW_H
#define AUTHORIZATIONWINDOW_H

#include <QDialog>
#include "adminauthorizationwindow.h"

namespace Ui {
    class AuthorizationWindow;
}

class AuthorizationWindow : public QDialog {
    Q_OBJECT

public:
    explicit AuthorizationWindow(DBManager* dbManager, QWidget* parent = nullptr);

    ~AuthorizationWindow();

    signals:
            void closeMainWindow();
private
    slots:
            void on_pushButtonAdmLogIn_clicked();

    void on_pushButtonUserLogIn_clicked();

private:
    Ui::AuthorizationWindow* ui;
    AdminAuthorizationWindow* adminAuthorizationWindow;
    DBManager* dbManager;
};

#endif // AUTHORIZATIONWINDOW_H
