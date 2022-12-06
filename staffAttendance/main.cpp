#include "secdashboard.h""

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SecDashboard w;
    w.show();
    return a.exec();
}
