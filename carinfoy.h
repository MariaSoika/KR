#ifndef CARINFOY_H
#define CARINFOY_H

#include <QWidget>

namespace Ui {
class CarInfoY;
}

class CarInfoY : public QWidget
{
    Q_OBJECT

public:
    explicit CarInfoY(QWidget *parent = nullptr);
    ~CarInfoY();

private:
    Ui::CarInfoY *ui;
};

#endif // CARINFOY_H
