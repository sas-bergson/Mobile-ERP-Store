#ifndef ATTENDANCEREPORT_H
#define ATTENDANCEREPORT_H

#include <QMainWindow>

namespace Ui {
class attendanceReport;
}

class attendanceReport : public QMainWindow
{
    Q_OBJECT

public:
    explicit attendanceReport(QWidget *parent = nullptr);
    ~attendanceReport();

private slots:
    void on_backBtn_clicked();

private:
    Ui::attendanceReport *ui;
};

#endif // ATTENDANCEREPORT_H
