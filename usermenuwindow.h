#ifndef USERMENUWINDOW_H
#define USERMENUWINDOW_H

#include <QDialog>
#include "contactswindow.h"
#include "allcarwindow.h"
#include "newsshowwindow.h"
#include "addcarwindow.h"
#include "dbmanager.h"
#include "shopwindow.h"

namespace Ui {
    class UserMenuWindow;
}

class UserMenuWindow : public QDialog {
    Q_OBJECT

public:
    explicit UserMenuWindow(DBManager* dbManager, QWidget* parent = nullptr);

    ~UserMenuWindow();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::UserMenuWindow* ui;
    ContactsWindow* contactsWindow;
    AllCarWindow* allCarWindow;
    ShopWindow *shopWindow;
    NewsShowWindow* newsShowWindow;
    AddCarWindow* addCarWindow;
    DBManager* dbManager;
};

#endif // USERMENUWINDOW_H
