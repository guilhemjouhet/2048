#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <vector>
#include "tuile.h"
#include "listetuile.h"
#include <QtQml>


int main(int argc, char *argv[])
{
#if defined(Q_OS_WIN)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication app(argc, argv);
    ListeTuile liste_tuile;

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("vueToutesTuiles",liste_tuile.getTuile1());

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
