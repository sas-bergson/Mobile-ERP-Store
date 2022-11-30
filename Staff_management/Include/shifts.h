#ifndef SHIFTS_H
#define SHIFTS_H

#include <QDialog>

namespace Ui {
class shifts;
}

class shifts : public QDialog
{
    Q_OBJECT

public:
    explicit shifts(QWidget *parent = nullptr);
    ~shifts();

private:
    Ui::shifts *ui;
};

#endif // SHIFTS_H
