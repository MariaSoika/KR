#include "usermenuwindow.h"
#include "ui_usermenuwindow.h"

UserMenuWindow::UserMenuWindow(QWidget* parent) :
        QDialog(parent),
        ui(new Ui::UserMenuWindow) {
    ui->setupUi(this);
    contactsWindow = new ContactsWindow(this);
    contactsWindow->setModal(true);

    allCarWindow=new AllCarWindow(this);
    allCarWindow->setModal(true);

    newsShowWindow = new NewsShowWindow(dbManager, this);
    newsShowWindow->setModal(true);

    connect(addCarWindow, &AddCarWindow::accepted, newsShowWindow, &newsShowWindow::on_createNews);
    connect(addCarWindow, &AddCarWindow::createNews, newsShowWindow, &newsShowWindow::on_createNews);

}

UserMenuWindow::~UserMenuWindow() {
    delete ui;
}

void UserMenuWindow::on_pushButton_4_clicked() {
    contactsWindow->show();
}


void UserMenuWindow::on_pushButton_clicked()
{
    allCarWindow->show();
}


void UserMenuWindow::on_pushButton_3_clicked()
{
    newsShowWindow->show();
}

