/*QuitDialog is a prevention screen that asks users if they are sure about exiting the app, avoiding users leaving
 * the app when button is pressed by mistake.
*/
#include "QuitDialog.h"
#include "ui_QuitDialog.h"

QuitDialog::QuitDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QuitDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Exit Window");

}

QuitDialog::~QuitDialog()
{
    delete ui;
}

void QuitDialog::on_btnYes_clicked()
{
    QApplication::quit();
}

void QuitDialog::on_btnNo_clicked()
{
   this->close();
}
