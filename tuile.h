#ifndef TUILE_H
#define TUILE_H
#include <QObject>
#include <iostream>
using namespace std;

class Tuile : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QList<QString> valQML READ readTuile NOTIFY tuileChanged)


public:
    explicit Tuile (QObject *parent = nullptr);
    QList<QString> readTuile();
    void Nouveau();
    Q_INVOKABLE void Gauche();
    void DeplGauche();
    void FusGauche();
    Q_INVOKABLE void Droite();
    void DeplDroite();
    void FusDroite();
    Q_INVOKABLE void Haut();
    void DeplHaut();
    void FusHaut();
    Q_INVOKABLE void Bas();
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
