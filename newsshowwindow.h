#ifndef NEWSSHOWWINDOW_H
#define NEWSSHOWWINDOW_H

#include <QDialog>
#include <QSqlTableModel>
#include "dbmanager.h"

namespace Ui {
class NewsShowWindow;
}

class NewsShowWindow : public QDialog
{
    Q_OBJECT

public:
    explicit NewsShowWindow(DBManager* dbManager, QWidget* parent = nullptr);
    ~NewsShowWindow();
public slots:
    void on_createNews();

private:
    Ui::NewsShowWindow *ui;
    QSqlTableModel* model;
};

#endif // NEWSSHOWWINDOW_H
