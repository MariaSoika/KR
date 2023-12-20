#ifndef DETAILSTESLAYWINDOW_H
#define DETAILSTESLAYWINDOW_H

#include <QDialog>

namespace Ui {
class DetailsTeslaYWindow;
}

class DetailsTeslaYWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DetailsTeslaYWindow(QWidget *parent = nullptr);
    ~DetailsTeslaYWindow();

private:
    Ui::DetailsTeslaYWindow *ui;
};

#endif // DETAILSTESLAYWINDOW_H
