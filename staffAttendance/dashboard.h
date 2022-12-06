#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QDialog>
#include "review.h"
namespace Ui {
class Dashboard;
}

class Dashboard : public QDialog
{
    Q_OBJECT

public:
    explicit Dashboard(QWidget *parent = nullptr);
    ~Dashboard();

private:
    Ui::Dashboard *ui;
    Review *review;
};

#endif // DASHBOARD_H
