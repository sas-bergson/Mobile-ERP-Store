#ifndef ENROLL_H
#define ENROLL_H

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

private:
    Ui::Enroll *ui;
};

#endif // ENROLL_H
