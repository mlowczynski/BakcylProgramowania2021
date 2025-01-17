#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtQuickControls2/QtQuickControls2>
#include <QQmlContext>

#include <gui/searchboxcontroller.hpp>
#include <gui/ProductModel.hpp>

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    qmlRegisterType<SearchboxController>("Searchbox", 1, 0, "SearchboxController");
    qmlRegisterType<ProductModel>("Product", 1, 0, "ProductModel");

    engine.load(QUrl(QString("qrc:/main.qml")));

    return app.exec();
}

