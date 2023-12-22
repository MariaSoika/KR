#ifndef CONTACTSWINDOW_H
#define CONTACTSWINDOW_H

#include <QDialog>

namespace Ui {
    class ContactsWindow;
}

class ContactsWindow : public QDialog {
    Q_OBJECT

public:
    explicit ContactsWindow(QWidget* parent = nullptr);

    ~ContactsWindow();

private:
    Ui::ContactsWindow* ui;
};

#endif // CONTACTSWINDOW_H
