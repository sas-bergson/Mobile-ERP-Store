#ifndef ENROLL_H
#define ENROLL_H

#include <QWidget>
#include <QMainWindow>

namespace Ui {
class Enroll;
}

class Enroll : public QMainWindow
{
    Q_OBJECT

public:
    explicit Enroll(QWidget *parent = nullptr);
    ~Enroll();

private slots:
    void on_pushButton_clicked();

    void on_backBtn_clicked();

private:
    Ui::Enroll *ui;
};

#endif // ENROLL_H
