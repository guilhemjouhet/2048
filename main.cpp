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
    Tuile tuile0;
    Tuile tuile1;
    Tuile tuile2;
    Tuile tuile3;
    Tuile tuile4;
    Tuile tuile5;
    Tuile tuile6;
    Tuile tuile7;
    Tuile tuile8;
    Tuile tuile9;
    Tuile tuile10;
    Tuile tuile11;
    Tuile tuile12;
    Tuile tuile13;
    Tuile tuile14;
    Tuile tuile15;

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("vueObjetCpt0",&tuile0);
    engine.rootContext()->setContextProperty("vueObjetCpt1",&tuile1);
    engine.rootContext()->setContextProperty("vueObjetCpt2",&tuile2);
    engine.rootContext()->setContextProperty("vueObjetCpt3",&tuile3);
    engine.rootContext()->setContextProperty("vueObjetCpt4",&tuile4);
    engine.rootContext()->setContextProperty("vueObjetCpt5",&tuile5);
    engine.rootContext()->setContextProperty("vueObjetCpt6",&tuile6);
    engine.rootContext()->setContextProperty("vueObjetCpt7",&tuile7);
    engine.rootContext()->setContextProperty("vueObjetCpt8",&tuile8);
    engine.rootContext()->setContextProperty("vueObjetCpt9",&tuile9);
    engine.rootContext()->setContextProperty("vueObjetCpt10",&tuile10);
    engine.rootContext()->setContextProperty("vueObjetCpt11",&tuile11);
    engine.rootContext()->setContextProperty("vueObjetCpt12",&tuile12);
    engine.rootContext()->setContextProperty("vueObjetCpt13",&tuile13);
    engine.rootContext()->setContextProperty("vueObjetCpt14",&tuile14);
    engine.rootContext()->setContextProperty("vueObjetCpt15",&tuile15);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
