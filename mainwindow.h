#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "authorizationwindow.h"
#include "detailsteslaywindow.h"
#include "usermenuwindow.h"
#include "searchwindow.h"
#include "carinfoform.h"
#include "dialogtest.h"
#include "carinfoy.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonLogIn_clicked();

    void on_pushButtonTeslaYDetails_clicked();

    void on_pushButtonUsreMenu_clicked();

    void on_pushButtonSearch_clicked();

private:
    Ui::MainWindow *ui;
    AuthorizationWindow* authorizationWindow;
    DetailsTeslaYWindow* detailsTeslaYWindow;
    UserMenuWindow* userMenuWindow;
    SearchWindow* searchWindow;
    DialogTest test;
};
#endif // MAINWINDOW_H
