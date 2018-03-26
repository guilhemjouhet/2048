#ifndef TUILE_H
#define TUILE_H
#include <QObject>
#include <iostream>
#include <QString>
using namespace std;

class Tuile : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QList<QString> valQML READ readTuile NOTIFY tuileChanged)
    Q_PROPERTY(QList<QString> coulQML READ coulTuile NOTIFY tuileChanged)
    Q_PROPERTY(QString TextGameOver READ gameOver NOTIFY tuileChanged)

public:
    explicit Tuile (QObject *parent = nullptr);
    QList<QString> readTuile();
    QList<QString> coulTuile();
    QString gameOver();
    Q_INVOKABLE void init();
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
    string Couleur(int i);

signals:
    void tuileChanged();
public slots:

private:
    int T[16];
    int nb_cases_vides;
    bool mouv;
    bool JeuFini;

};

#endif // TUILE_H
