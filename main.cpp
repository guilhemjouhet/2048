#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "tuile.h"
#include <QtQml>

int main(int argc, char *argv[])
{
#if defined(Q_OS_WIN)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication app(argc, argv);
    Tuile tuile;

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("vueObjetTuile",&tuile);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
