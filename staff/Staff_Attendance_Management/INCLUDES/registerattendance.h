#ifndef REGISTERATTENDANCE_H
#define REGISTERATTENDANCE_H

#include <QWidget>
#include <QMainWindow>

namespace Ui {
class RegisterAttendance;
}

class RegisterAttendance : public QMainWindow
{
    Q_OBJECT

public:
    explicit RegisterAttendance(QWidget *parent = nullptr);
    ~RegisterAttendance();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::RegisterAttendance *ui;
};

#endif // REGISTERATTENDANCE_H
