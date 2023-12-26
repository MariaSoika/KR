#ifndef BUCKETFIRSTMENU_H
#define BUCKETFIRSTMENU_H

#include <QDialog>

namespace Ui {
class BucketFirstMenu;
}

class BucketFirstMenu : public QDialog
{
    Q_OBJECT

public:
    explicit BucketFirstMenu(QWidget *parent = nullptr);
    ~BucketFirstMenu();

private slots:
    void on_pushButton_clicked();

private:
    Ui::BucketFirstMenu *ui;
    QString date;
};

#endif // BUCKETFIRSTMENU_H
