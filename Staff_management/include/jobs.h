#ifndef JOBS_H
#define JOBS_H

#include <QDialog>

namespace Ui {
class jobs;
}

class jobs : public QDialog
{
    Q_OBJECT

public:
    explicit jobs(QWidget *parent = nullptr);
    ~jobs();

private:
    Ui::jobs *ui;
};

#endif // JOBS_H
