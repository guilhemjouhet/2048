#ifndef TUILE_H
#define TUILE_H
#include <QObject>
#include <iostream>
using namespace std;

class Tuile : public QObject
{
    Q_OBJECT
    //Q_PROPERTY(QString cptQML READ readTuile NOTIFY tuileChanged)
    Q_PROPERTY(QList<QString> valQML READ readTuile NOTIFY tuileChanged)


public:
    explicit Tuile (QObject *parent = nullptr);
    QList<QString> readTuile();
    void Nouveau();
    void Gauche();
    void DeplGauche();
    void FusGauche();
    void Droite();
    void DeplDroite();
    void FusDroite();
    void Haut();
    void DeplHaut();
    void FusHaut();
    void Bas();
    void DeplBas();
    void FusBas();
    friend ostream& operator << (ostream& s, const Tuile &tab);
    int my_rand(int max);

signals:
    void tuileChanged();
public slots:

private:
    int T[16];
    int nb_cases_vides;

};

#endif // TUILE_H
