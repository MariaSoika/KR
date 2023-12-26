#include "usermenuwindow.h"
#include "ui_usermenuwindow.h"

UserMenuWindow::UserMenuWindow(DBManager *dbManager, QWidget* parent) :
    QDialog(parent), dbManager(dbManager),
        ui(new Ui::UserMenuWindow) {
    ui->setupUi(this);
    contactsWindow = new ContactsWindow(this);
    contactsWindow->setModal(true);

    allCarWindow=new AllCarWindow(this->dbManager, this);
    allCarWindow->setModal(true);

    shopWindow=new ShopWindow(this->dbManager, this);
    shopWindow->setModal(true);

   // newsShowWindow = new NewsShowWindow(dbManager, this);
  //  newsShowWindow->setModal(true);

//    connect(addCarWindow, &AddCarWindow::accepted, newsShowWindow, &NewsShowWindow::on_createNews);
//    connect(addCarWindow, &AddCarWindow::createNews, newsShowWindow, &NewsShowWindow::on_createNews);

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


void UserMenuWindow::on_pushButton_2_clicked()
{
    //allCarWindow->show();
    shopWindow->show();
}

