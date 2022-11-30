#ifndef VIEW_DEPARTMENT_H
#define VIEW_DEPARTMENT_H

#include <QDialog>

namespace Ui {
class view_department;
}

class view_department : public QDialog
{
    Q_OBJECT

public:
    explicit view_department(QWidget *parent = nullptr);
    ~view_department();

private:
    Ui::view_department *ui;
};

#endif // VIEW_DEPARTMENT_H
