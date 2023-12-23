#include "adminauthorizationwindow.h"
#include "ui_adminauthorizationwindow.h"

#include <QMessageBox>

AdminAuthorizationWindow::AdminAuthorizationWindow(DBManager* dbManager, QWidget* parent) :
        QDialog(parent), ui(new Ui::AdminAuthorizationWindow),
        dbManager(dbManager) {
    ui->setupUi(this);
    adminMainWindow = new AdminMainWindow(this->dbManager, this);
    adminMainWindow->setModal(true);
}

AdminAuthorizationWindow::~AdminAuthorizationWindow() {
    delete ui;
}

void AdminAuthorizationWindow::on_pushButton_clicked() {
    QString Name = ui->lineEditAdmName->text();
    QString Password = ui->lineEditPassAdm->text();
    if (Name.isEmpty() || Password.isEmpty()) {
        QMessageBox::warning(this, QString("Warning"), QString("Both name and password are required"));
    } else if (Name == "Admin" && Password == "12345") {
        //QMessageBox::information(this, QString("Access Grante"), QString("Access allowed"));
        adminMainWindow->show();
        this->hide();
    } else {
        QMessageBox::warning(this, QString("Access Denied"),
                             QString("Access not allowed. Please check your credentials."));
    }
}
