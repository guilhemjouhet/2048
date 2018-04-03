#ifndef TUILE_H
#define TUILE_H
#include <QObject>
#include <iostream>
using namespace std;
#include <QString>

class Tuile : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QList<QString> valQML READ readTuile NOTIFY tuileChanged)
    Q_PROPERTY(QList<QString> coulQML READ coulTuile NOTIFY tuileChanged)
    Q_PROPERTY(QList<QString> TextGameOver READ gameOver NOTIFY tuileChanged)

public:
    explicit Tuile (QObject *parent = nullptr);
    QList<QString> readTuile();
    QList<QString> coulTuile();
    QList<QString> gameOver();
    Q_INVOKABLE void init();
    void Nouveau();
    void FinAction();
    Q_INVOKABLE void gauche();
    void DeplGauche();
    void FusGauche();
    Q_INVOKABLE void droite();
    void DeplDroite();
    void FusDroite();
    Q_INVOKABLE void haut();
    void DeplHaut();
    void FusHaut();
    Q_INVOKABLE void bas();
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
    bool JeuGagne;

};

#endif // TUILE_H
