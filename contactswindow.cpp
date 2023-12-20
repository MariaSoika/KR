#include "contactswindow.h"
#include "ui_contactswindow.h"

ContactsWindow::ContactsWindow(QWidget* parent) :
        QDialog(parent),
        ui(new Ui::ContactsWindow) {
    ui->setupUi(this);
}

ContactsWindow::~ContactsWindow() {
    delete ui;
}
