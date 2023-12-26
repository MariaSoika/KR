#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogtest.h"
#include <QDialog>
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(DBManager* dbManager, QWidget* parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), dbManager(dbManager), authorizationWindow(nullptr)
        {
    ui->setupUi(this);

    bucketFirstMenu=new BucketFirstMenu(this);
    bucketFirstMenu->setModal(true);

    authorizationWindow = new AuthorizationWindow(this->dbManager, this);
    authorizationWindow->setModal(true);

    searchWindow = new SearchWindow(this);
    searchWindow->setModal(true);

    findCarWindow = new FindCarWindow(this);
    findCarWindow->setModal(true);

    test = new DialogTest(this);

    //detailsTeslaYWindow=new DetailsTeslaYWindow(this);
    //detailsTeslaYWindow->setModal(true);

    // carInfoForm=new CarInfoForm(this);
    //carInfoForm->setModal(true);

    //carInfoY=new CarInfoForm(this);

    userMenuWindow = new UserMenuWindow(this->dbManager, this);
    userMenuWindow->setModal(true);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_GoBack()
{
    authorizationWindow->hide();
    this->show();
}

void MainWindow::on_pushButtonLogIn_clicked() {
    authorizationWindow->show();

}


void MainWindow::on_pushButtonTeslaYDetails_clicked() {
    test->show();
}


void MainWindow::on_pushButtonUsreMenu_clicked() {
    userMenuWindow->show();
}


void MainWindow::on_pushButtonSearch_clicked()
{
    //searchWindow->show();
    findCarWindow->show();
}


void MainWindow::on_pushButtonBucket_clicked()
{
    bucketFirstMenu->show();
}

