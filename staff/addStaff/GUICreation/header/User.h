#ifndef USER_H
#define USER_H

#include <QDialog>
#include <QuitDialog.h>
#include <Employee.h>



namespace Ui {
class User;
}

class User : public QDialog
{
    Q_OBJECT

public:
    explicit User(QWidget *parent = nullptr);
    ~User();

private slots:
    void on_btnClose_clicked();
    void onNewEmployee(Employment::Employee);


private:
    Ui::User *ui;
    QuitDialog *quit;
    //Employment::Employee *user;
};

#endif // USER_H
