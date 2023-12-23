#ifndef ADMINREPORTSWINDOW_H
#define ADMINREPORTSWINDOW_H

#include <QDialog>
#include "dbmanager.h"

namespace Ui {
    class AdminReportsWindow;
}

class AdminReportsWindow : public QDialog {
    Q_OBJECT

public:
    explicit AdminReportsWindow(QWidget* parent = nullptr);

    ~AdminReportsWindow();

private:
    Ui::AdminReportsWindow* ui;
    DBManager *dbManager;
};

#endif // ADMINREPORTSWINDOW_H
