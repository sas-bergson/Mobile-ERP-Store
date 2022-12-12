#include "viewattendance.h"
#include "ui_viewattendance.h"
#include "INCLUDES/database.h"
#include <QSqlError>
#include <QTableView>
#include <QSqlQueryModel>
#include <QMainWindow>

viewAttendance::viewAttendance(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::viewAttendance)
{
    ui->setupUi(this);
}

viewAttendance::~viewAttendance()
{
    delete ui;

}
