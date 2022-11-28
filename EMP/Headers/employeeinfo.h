#ifndef EMPLOYEEINFO_H
#define EMPLOYEEINFO_H

#include <QDialog>

namespace Ui {
class employeeinfo;
}

class employeeinfo : public QDialog
{
    Q_OBJECT

public:
    explicit employeeinfo(QWidget *parent = nullptr);
    ~employeeinfo();

private:
    Ui::employeeinfo *ui;
};

#endif // EMPLOYEEINFO_H
