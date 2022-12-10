#ifndef DELETE_DEPARTMENT_H
#define DELETE_DEPARTMENT_H

#include <QDialog>

namespace Ui {
class Delete_department;
}

class Delete_department : public QDialog
{
    Q_OBJECT

public:
    explicit Delete_department(QWidget *parent = nullptr);
    ~Delete_department();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Delete_department *ui;
};

#endif // DELETE_DEPARTMENT_H
