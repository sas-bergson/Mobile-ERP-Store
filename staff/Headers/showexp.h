#ifndef SHOWEXP_H
#define SHOWEXP_H


#include <QDialog>

namespace Ui {
class ShowExp;
}

class ShowExp : public QDialog
{
    Q_OBJECT

public:
    explicit ShowExp(QWidget *parent = nullptr);
    ~ShowExp();



private slots:


    void on_GBack_clicked();

    void on_SBack_clicked();

private:
    Ui::ShowExp *ui;
};

#endif // SHOWEXP_H
