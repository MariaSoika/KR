#ifndef FINDCARWINDOW_H
#define FINDCARWINDOW_H

#include <QDialog>
#include "MySqlDBManager.h"

namespace Ui {
class FindCarWindow;
}

class FindCarWindow : public QDialog
{
    Q_OBJECT

public:
    explicit FindCarWindow(QWidget *parent = nullptr);
    ~FindCarWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::FindCarWindow *ui;
    MySqlDBManager *dbManager;
};

#endif // FINDCARWINDOW_H
