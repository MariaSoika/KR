#ifndef DIALOGTEST_H
#define DIALOGTEST_H

#include <QDialog>

namespace Ui {
    class DialogTest;
}

class DialogTest : public QDialog {
    Q_OBJECT

public:
    explicit DialogTest(QWidget* parent = nullptr);

    ~DialogTest();

private:
    Ui::DialogTest* ui;
};

#endif // DIALOGTEST_H
