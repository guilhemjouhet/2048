#ifndef TUILE_H
#define TUILE_H
#include <QObject>
#include <iostream>
using namespace std;
#include <QString>


//déclaration de la classe Tuile.
//un objet Tuile représente l'ensemble du jeu 2048, avec ses 16 cases
//Ses méthodes sont utilisées lors de l'initialisation du jeu, et lors des actions du joueur
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
    Q_INVOKABLE void init(); //methode pour initialiser le jeu, appelée depuis le fichier QML 
    void Nouveau();
    void FinAction();
    Q_INVOKABLE void gauche(); //methode pour gérer le jeu suite à un appui du joueur sur la flèche gauche
    void DeplGauche(); // déplace les cases vers la gauche
    void FusGauche(); //fusionne les cases vers la gauche si deux cases ont horizontalement la même valeur
    Q_INVOKABLE void droite(); //methode pour gérer le jeu suite à un appui du joueur sur la flèche droite
    void DeplDroite();
    void FusDroite();
    Q_INVOKABLE void haut(); //methode pour gérer le jeu suite à un appui du joueur sur la flèche haute
    void DeplHaut();
    void FusHaut();
    Q_INVOKABLE void bas(); //methode pour gérer le jeu suite à un appui du joueur sur la flèche basse
    void DeplBas();
    void FusBas();
    friend ostream& operator << (ostream& s, const Tuile &tab);
    int my_rand(int max);
    string Couleur(int i); //methode permettant de colorer une case en fonction de sa valeur

signals:
    void tuileChanged();
public slots:

private:
    int T[16]; //le tableau contient les valeurs des 16 cases du jeu
    int nb_cases_vides; //contient le nombre de cases ayant la valeur 0. utilisé pour détecter la fin du jeu.
    bool mouv; //vaut 1 si des mouvements sont possibles : détecte la fin du jeu
    bool JeuFini; //vaut 1 lorsque le jeu est fini
    bool JeuGagne; //vaut 1 lorsque le joueur a gagné le jeu

};

#endif // TUILE_H
