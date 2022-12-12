#ifndef VIEWSTAFF_H
#define VIEWSTAFF_H

#include <QMainWindow>

namespace Ui {
class viewStaff;
}

class viewStaff : public QMainWindow
{
    Q_OBJECT

public:
    explicit viewStaff(QWidget *parent = nullptr);
    ~viewStaff();

private slots:
    void on_pushButton_clicked();

private:
    Ui::viewStaff *ui;
};

#endif // VIEWSTAFF_H
