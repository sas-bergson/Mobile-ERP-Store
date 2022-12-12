#ifndef VIEWATTENDANCE_H
#define VIEWATTENDANCE_H

#include <QWidget>

namespace Ui {
class viewAttendance;
}

class viewAttendance : public QWidget
{
    Q_OBJECT

public:
    explicit viewAttendance(QWidget *parent = nullptr);
    ~viewAttendance();

private:
    Ui::viewAttendance *ui;
};

#endif // VIEWATTENDANCE_H
