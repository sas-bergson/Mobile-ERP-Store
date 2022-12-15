#ifndef EXPERIENCE_H
#define EXPERIENCE_H

#include <QDialog>

namespace Ui {
class Experience;
}

class Experience : public QDialog
{
    Q_OBJECT

public:
    explicit Experience(QWidget *parent = nullptr);
    ~Experience();

private slots:
    void on_Home_clicked();

    void on_ShowExp_clicked();

    void on_AddExp_clicked();

private:
    Ui::Experience *ui;
};

#endif // EXPERIENCE_H
