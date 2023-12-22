#include "carinfoy.h"
#include "ui_carinfoy.h"

CarInfoY::CarInfoY(QWidget* parent) :
        QWidget(parent),
        ui(new Ui::CarInfoY) {
    ui->setupUi(this);
}

CarInfoY::~CarInfoY() {
    delete ui;
}
