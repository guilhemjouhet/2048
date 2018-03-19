#ifndef LISTETUILE_H
#define LISTETUILE_H
#include <vector>
#include <QObject>
#include "tuile.h"

class ListeTuile : public QObject
{
    Q_OBJECT
public:
    explicit ListeTuile(QObject *parent = nullptr);
    //Q_INVOKABLE void fusionH();
    Q_INVOKABLE Tuile* getTuile1();

signals:
    //void listetuileChanged();

public slots:
private:
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
    Tuile tuile16;
    //std::vector<Tuile*> Ltuile;
};

#endif // LISTETUILE_H
