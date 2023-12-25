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

private:
    Ui::BucketFirstMenu *ui;
};

#endif // BUCKETFIRSTMENU_H
