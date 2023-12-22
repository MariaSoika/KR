#include "usermenuwindow.h"
#include "ui_usermenuwindow.h"

UserMenuWindow::UserMenuWindow(QWidget* parent) :
        QDialog(parent),
        ui(new Ui::UserMenuWindow) {
    ui->setupUi(this);
    contactsWindow = new ContactsWindow(this);
    contactsWindow->setModal(true);

}

UserMenuWindow::~UserMenuWindow() {
    delete ui;
}

void UserMenuWindow::on_pushButton_4_clicked() {
    contactsWindow->show();
}


void UserMenuWindow::on_pushButton_clicked()
{
    allCarWindow.show();
}

