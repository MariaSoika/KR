#ifndef ALLCARWINDOW_H
#define ALLCARWINDOW_H

#include <QDialog>

namespace Ui {
class AllCarWindow;
}

class AllCarWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AllCarWindow(QWidget *parent = nullptr);
    ~AllCarWindow();

private:
    Ui::AllCarWindow *ui;
};

#endif // ALLCARWINDOW_H
