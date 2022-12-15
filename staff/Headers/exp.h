#ifndef EXP_H
#define EXP_H

#include <QDialog>

namespace Ui {
class Exp;
}

class Exp : public QDialog
{
    Q_OBJECT

public:
    explicit Exp(QWidget *parent = nullptr);
    ~Exp();

private slots:


    void on_ExpB_clicked();


    void on_ExUp_clicked();

    void on_ExLd_clicked();

    void on_ExDel_clicked();

    void on_HB_clicked();

private:
    Ui::Exp *ui;
};

#endif // EXP_H
