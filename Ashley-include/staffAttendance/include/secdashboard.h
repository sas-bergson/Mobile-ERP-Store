#ifndef SECDASHBOARD_H
#define SECDASHBOARD_H

#include <QDialog>
#include "secreview.h"
namespace Ui {
class SecDashboard;
}

class SecDashboard : public QDialog
{
    Q_OBJECT

public:
    explicit SecDashboard(QWidget *parent = nullptr);
    ~SecDashboard();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SecDashboard *ui;
    SecReview *secReview;

};

#endif // SECDASHBOARD_H
