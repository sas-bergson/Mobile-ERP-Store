#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_pushButton_Tap_clicked();

    void on_pushButtonView_Account_clicked();

    void on_pushButtonUpdate_Account_clicked();

    void on_pushButtonDelete_Account_clicked();

    void on_pushButtonCreate_clicked();

    void on_pushButtonCreate_2_clicked();

    void on_textEdit_copyAvailable(bool b);

    void on_textEditUserName_textChanged();

    void on_label_4_linkActivated(const QString &link);

    void on_pushButton_Settings_clicked();

    void on_pushButton_Cancel_clicked();

    void on_pushButton_Confirm_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
