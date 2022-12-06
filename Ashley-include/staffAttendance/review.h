#ifndef REVIEW_H
#define REVIEW_H

#include <QDialog>

namespace Ui {
class Review;
}

class Review : public QDialog
{
    Q_OBJECT

public:
    explicit Review(QWidget *parent = nullptr);
    ~Review();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Review *ui;
};

#endif // REVIEW_H
