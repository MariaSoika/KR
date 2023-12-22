#include "authorizationwindow.h"
#include "ui_authorizationwindow.h"
#include <QMessageBox>

AuthorizationWindow::AuthorizationWindow(DBManager* dbManager, QWidget* parent) :
        QDialog(parent), ui(new Ui::AuthorizationWindow),
        dbManager(dbManager) {
    ui->setupUi(this);
    adminAuthorizationWindow = new AdminAuthorizationWindow(this->dbManager, this);
    adminAuthorizationWindow->setModal(true);
}

AuthorizationWindow::~AuthorizationWindow() {
    delete ui;
}


void AuthorizationWindow::on_pushButtonAdmLogIn_clicked() {
    adminAuthorizationWindow->show();
    this->hide();
}


void AuthorizationWindow::on_pushButtonUserLogIn_clicked() {
    QString firstName = ui->lineEditUserFirsName->text();
    QString lastName = ui->lineEditUserLastName->text();
    if (firstName.isEmpty() || lastName.isEmpty()) {
        QMessageBox::warning(this, QString("Warning"), QString("Both first name and last name are required"));
    } else {
        QMessageBox::information(this, QString("Access Grante"), QString("Access allowed"));
        this->close();
    }
}

