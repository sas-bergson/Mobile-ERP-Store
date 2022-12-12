#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "AdminWindow.h"
#include "User.h"
#include "Employee.h"


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
    void on_btnLogin_clicked();

signals:
    void emitEmployee(Employment::Employee employee);

private:
    Ui::MainWindow *ui;
    AdminWindow *adminWindow;
    User *user;
    Employment::Employee *employeeUser;


};
#endif // MAINWINDOW_H
