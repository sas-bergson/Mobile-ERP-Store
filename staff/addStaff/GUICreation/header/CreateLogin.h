#ifndef CREATELOGIN_H
#define CREATELOGIN_H

#include <QDialog>

namespace Ui {
class CreateLogin;
}

class CreateLogin : public QDialog
{
    Q_OBJECT

public:
    explicit CreateLogin(QWidget *parent = nullptr);
    ~CreateLogin();

private slots:
    void on_btnHome_clicked();

    void on_btnSumbit_clicked();

private:
    Ui::CreateLogin *ui;
};

#endif // CREATELOGIN_H
