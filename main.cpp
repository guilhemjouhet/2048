#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <vector>
#include "tuile.h"
#include <QtQml>


int main(int argc, char *argv[])
{
#if defined(Q_OS_WIN)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication app(argc, argv);
    Tuile tuile1;

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("vueObjetCpt0",&tuile1);
    engine.rootContext()->setContextProperty("vueObjetCpt1",&tuile1);
    engine.rootContext()->setContextProperty("vueObjetCpt2",&tuile1);
    engine.rootContext()->setContextProperty("vueObjetCpt3",&tuile1);
    engine.rootContext()->setContextProperty("vueObjetCpt4",&tuile1);
    engine.rootContext()->setContextProperty("vueObjetCpt5",&tuile1);
    engine.rootContext()->setContextProperty("vueObjetCpt6",&tuile1);
    engine.rootContext()->setContextProperty("vueObjetCpt7",&tuile1);
    engine.rootContext()->setContextProperty("vueObjetCpt8",&tuile1);
    engine.rootContext()->setContextProperty("vueObjetCpt9",&tuile1);
    engine.rootContext()->setContextProperty("vueObjetCpt10",&tuile1);
    engine.rootContext()->setContextProperty("vueObjetCpt11",&tuile1);
    engine.rootContext()->setContextProperty("vueObjetCpt12",&tuile1);
    engine.rootContext()->setContextProperty("vueObjetCpt13",&tuile1);
    engine.rootContext()->setContextProperty("vueObjetCpt14",&tuile1);
    engine.rootContext()->setContextProperty("vueObjetCpt15",&tuile1);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
