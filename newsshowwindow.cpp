#include "newsshowwindow.h"
#include "ui_newsshowwindow.h"

NewsShowWindow::NewsShowWindow(DBManager *dbManager, QWidget* parent) :
    QDialog(parent),
    ui(new Ui::NewsShowWindow)
{
    ui->setupUi(this);
    model = new QSqlTableModel(this, dbManager->getDB());
    model->setTable("News");
    model->select();
    ui->tableView->setModel(model);
}

NewsShowWindow::~NewsShowWindow()
{
    delete ui;
}
void NewsShowWindow::on_createNews()
{
    model->select();
}
