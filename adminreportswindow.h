#ifndef ADMINREPORTSWINDOW_H
#define ADMINREPORTSWINDOW_H

#include <QDialog>

namespace Ui {
class AdminReportsWindow;
}

class AdminReportsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AdminReportsWindow(QWidget *parent = nullptr);
    ~AdminReportsWindow();

private:
    Ui::AdminReportsWindow *ui;
};

#endif // ADMINREPORTSWINDOW_H
