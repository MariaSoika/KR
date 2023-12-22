#include "adminreportswindow.h"
#include "ui_adminreportswindow.h"

AdminReportsWindow::AdminReportsWindow(QWidget* parent) :
        QDialog(parent),
        ui(new Ui::AdminReportsWindow) {
    ui->setupUi(this);
}

AdminReportsWindow::~AdminReportsWindow() {
    delete ui;
}
