#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QObject>
#include <QQuickView>
#include <QDateTime>
#include <QQmlContext>
#include "applicationdata.h"



int main(int argc, char *argv[]) {
    QGuiApplication app(argc, argv);

    QQuickView view;

    ApplicationData data;
    view.rootContext()->setContextProperty("applicationData", &data);

    view.setSource (QUrl("qrc:/Item.qml"));
    view.show();

    return app.exec();
}
