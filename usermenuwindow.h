#ifndef USERMENUWINDOW_H
#define USERMENUWINDOW_H

#include <QDialog>
#include "contactswindow.h"
#include "allcarwindow.h"

namespace Ui {
    class UserMenuWindow;
}

class UserMenuWindow : public QDialog {
    Q_OBJECT

public:
    explicit UserMenuWindow(QWidget* parent = nullptr);

    ~UserMenuWindow();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

private:
    Ui::UserMenuWindow* ui;
    ContactsWindow* contactsWindow;
    AllCarWindow allCarWindow;
};

#endif // USERMENUWINDOW_H
