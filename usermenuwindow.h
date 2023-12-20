#ifndef USERMENUWINDOW_H
#define USERMENUWINDOW_H

#include <QDialog>
#include "contactswindow.h"

namespace Ui {
class UserMenuWindow;
}

class UserMenuWindow : public QDialog
{
    Q_OBJECT

public:
    explicit UserMenuWindow(QWidget *parent = nullptr);
    ~UserMenuWindow();

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::UserMenuWindow *ui;
    ContactsWindow* contactsWindow;
};

#endif // USERMENUWINDOW_H
