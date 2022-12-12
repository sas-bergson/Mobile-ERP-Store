#ifndef PROMOTEDEMOTE_H
#define PROMOTEDEMOTE_H

#include <QDialog>

namespace Ui {
class PromoteDemote;
}

class PromoteDemote : public QDialog
{
    Q_OBJECT

public:
    explicit PromoteDemote(QWidget *parent = nullptr);
    ~PromoteDemote();

private slots:
    void on_btnHome_clicked();

    void on_btnSubmit_clicked();

private:
    Ui::PromoteDemote *ui;
};

#endif // PROMOTEDEMOTE_H
