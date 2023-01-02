#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "headers/database.h"
#include "headers/listmodel.h"
#include <QQmlContext>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QGuiApplication::setApplicationName("EMPLOYEES MANAGEMENT");
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QQmlApplicationEngine engine;


    DataBase database;


    ListModel *model = new ListModel();

    engine.rootContext()->setContextProperty("myModel", model);
    engine.rootContext()->setContextProperty("database", &database);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}

