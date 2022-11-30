#ifndef UPDATE_DEPARTMENT_H
#define UPDATE_DEPARTMENT_H

#include <QDialog>

namespace Ui {
class update_department;
}

class update_department : public QDialog
{
    Q_OBJECT

public:
    explicit update_department(QWidget *parent = nullptr);
    ~update_department();

private slots:
    //void on_backButton_2_clicked();

private:
    Ui::update_department *ui;
};

#endif // UPDATE_DEPARTMENT_H
