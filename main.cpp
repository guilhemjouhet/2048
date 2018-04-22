#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "tuile.h"
#include <QtQml>


//partie centrale du programme, qui interface le code en QML avec le code en C++
int main(int argc, char *argv[])
{
#if defined(Q_OS_WIN)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication app(argc, argv);
    Tuile tuile;//création du jeu

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("vueObjetTuile",&tuile); //envoi de du jeu par référence à l'interface graphique
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));//lancement de la fenetre graphique
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
