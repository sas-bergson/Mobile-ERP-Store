#ifndef SEARCHDETAILS_H
#define SEARCHDETAILS_H

#include <QDialog>

namespace Ui {
class Searchdetails;
}

class Searchdetails : public QDialog
{
    Q_OBJECT

public:
    explicit Searchdetails(QWidget *parent = nullptr);
    ~Searchdetails();

private slots:
    void on_SearchBut_clicked();


    void on_HomeButton_clicked();


private:
    Ui::Searchdetails *ui;
};

#endif // SEARCHDETAILS_H
