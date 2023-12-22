#include "detailsteslaywindow.h"
#include "ui_detailsteslaywindow.h"

DetailsTeslaYWindow::DetailsTeslaYWindow(QWidget* parent) :
        QDialog(parent),
        ui(new Ui::DetailsTeslaYWindow) {
    ui->setupUi(this);
}

DetailsTeslaYWindow::~DetailsTeslaYWindow() {
    delete ui;
}
