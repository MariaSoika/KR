#ifndef ADDCARWINDOW_H
#define ADDCARWINDOW_H

#include <QDialog>
#include "car.h"
#include "news.h"
#include "dbmanager.h"

namespace Ui {
    class AddCarWindow;
}

class AddCarWindow : public QDialog {
    Q_OBJECT

public:
    explicit AddCarWindow(DBManager* dbManager, QWidget* parent = nullptr);
    ~AddCarWindow();

private
    slots:
            void on_pushButtonCreate_clicked();

    void on_pushButton_clicked();

signals:
    void createCars(Car * );
    void createNews(News * );

private:
    Ui::AddCarWindow* ui;
    Car* car;
    News* news;
    DBManager* dbManager;
    QString logo;
};

#endif // ADDCARWINDOW_H
