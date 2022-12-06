#ifndef SECREVIEW_H
#define SECREVIEW_H

#include <QDialog>
//#include "secdashboard.h"
namespace Ui {
class SecReview;
}

class SecReview : public QDialog
{
    Q_OBJECT

public:
    explicit SecReview(QWidget *parent = nullptr);
    ~SecReview();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::SecReview *ui;
    //SecDashboard *secDashboard;
};

#endif // SECREVIEW_H
