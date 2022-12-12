#ifndef QUITDIALOG_H
#define QUITDIALOG_H

#include <QDialog>


namespace Ui {
class QuitDialog;
}

class QuitDialog : public QDialog
{
    Q_OBJECT

public:
    explicit QuitDialog(QWidget *parent = nullptr);
    ~QuitDialog();

private slots:
    void on_btnYes_clicked();

    void on_btnNo_clicked();

private:
    Ui::QuitDialog *ui;

};

#endif // QUITDIALOG_H
