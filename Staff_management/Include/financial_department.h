#ifndef FINANCIAL_DEPARTMENT_H
#define FINANCIAL_DEPARTMENT_H

#include <QDialog>

namespace Ui {
class financial_department;
}

class financial_department : public QDialog
{
    Q_OBJECT

public:
    explicit financial_department(QWidget *parent = nullptr);
    ~financial_department();

private:
    Ui::financial_department *ui;
};

#endif // FINANCIAL_DEPARTMENT_H
