#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "carinfoform.h"
#include "dialogtest.h"
#include <QDialog>
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    authorizationWindow=new AuthorizationWindow(this);
    authorizationWindow->setModal(true);

    searchWindow= new SearchWindow(this);
    searchWindow->setModal(true);

    findCarWindow = new FindCarWindow(this);
    findCarWindow->setModal(true);

    //detailsTeslaYWindow=new DetailsTeslaYWindow(this);
    //detailsTeslaYWindow->setModal(true);

   // carInfoForm=new CarInfoForm(this);
    //carInfoForm->setModal(true);

    //carInfoY=new CarInfoForm(this);

    userMenuWindow=new UserMenuWindow(this);
    userMenuWindow->setModal(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonLogIn_clicked()
{
    authorizationWindow->show();

}


void MainWindow::on_pushButtonTeslaYDetails_clicked()
{
    test.show();
}


void MainWindow::on_pushButtonUsreMenu_clicked()
{
    userMenuWindow->show();
}


void MainWindow::on_pushButtonSearch_clicked()
{
    //searchWindow->show();
    findCarWindow->show();
}

