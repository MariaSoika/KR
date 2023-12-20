#ifndef CARINFOFORM_H
#define CARINFOFORM_H

#include <QWidget>

namespace Ui {
class CarInfoForm;
}

class CarInfoForm : public QWidget
{
    Q_OBJECT

public:
    explicit CarInfoForm(QWidget *parent = nullptr);
    ~CarInfoForm();

private:
    Ui::CarInfoForm *ui;
};

#endif // CARINFOFORM_H
