#include "tuile.h"
#include <ctime>
#include <iostream>
using namespace std;

Tuile::Tuile(QObject *parent) : QObject(parent) //constructeur de l'objet
{
    for (int i=0; i<16;i=i+1)
        T[i]=0;
    nb_cases_vides = 16; //initialement toutes les cases valent 0
    mouv = false ;
    JeuFini = false;
    JeuGagne = false;
    emit tuileChanged();//le jeu est créé : on met la fenetre graphique à jour
}

QList<QString> Tuile::readTuile(){ //methode permettant d'acceder aux valeurs des cases depuis la fenêtre graphique
    QList<QString> l; //on créée une Qlist de Qstring contenant les valeurs des cases...
    for (int i=0;i<16;i++)
        l.append(QString::number(T[i]));
    return l; //... que l'on renvoie
}

QList<QString> Tuile::coulTuile(){//de la meme manière que précédement, on revoie une QList de QString contenant les couleurs
    QList<QString> l;//de toutes les cases
    for (int i=0;i<16;i++)
        l.append(QString::fromStdString(Couleur(T[i])));
    return l;
}

QList<QString> Tuile::gameOver(){ //cette methode détecte si le jeu est fini
    QList<QString> texteGameOver;
    if (JeuGagne){ //si le jeu est gagné on le fait savoir au joueur
        texteGameOver.append(QString::fromStdString("Bravo !"));
        texteGameOver.append(QString::fromStdString("#777777"));
    }
    else { //sinon on détecte si il s'agit d'une vraie fin (plus de mouvements sont possibles)
        if (JeuFini){
            bool VraieFin = true;
            for (int i=0;i<4;i++){
                for (int j=0;j<3;j++){
                    if (T[4*i+j]==T[4*i+j+1])
                        VraieFin=false;
                    if (T[4*j+i]==T[4*j+4+i])
                        VraieFin=false;
                }
            }
            if (VraieFin){
                texteGameOver.append(QString::fromStdString("Game Over"));
                texteGameOver.append(QString::fromStdString("#777777"));
            }
            else{
                texteGameOver.append(QString::fromStdString(""));
                texteGameOver.append(QString::fromStdString("#00000000"));
            }
        }
        else{
            texteGameOver.append(QString::fromStdString(""));
            texteGameOver.append(QString::fromStdString("#00000000"));
        }
    }
    return texteGameOver;
}

void Tuile::init(){ //initialise les tuiles à 0
    for (int i=0; i<16;i=i+1)
        T[i]=0;
    nb_cases_vides = 16;
    Nouveau();
    mouv = false ;
    JeuFini = false;
    emit tuileChanged();
}

void Tuile::FinAction(){
    if (mouv)
        Nouveau();
    mouv=false;
    for (int i = 0;i<16;i++)
        if (T[i]==2048){
            JeuGagne =true;}
    if ((nb_cases_vides==0)&(JeuGagne==false))
            JeuFini = true ;
    emit tuileChanged();
    JeuFini = false;
    JeuGagne = false;
}

void Tuile::gauche(){
    DeplGauche();
    int ancien = nb_cases_vides;
    FusGauche();
    if (ancien!=nb_cases_vides)
        mouv = true;
    FinAction();
}

void Tuile::droite(){
    DeplDroite();
    int ancien = nb_cases_vides;
    FusDroite();
    if (ancien!=nb_cases_vides)
        mouv = true;
    FinAction();
}

void Tuile::haut(){
    DeplHaut();
    int ancien = nb_cases_vides;
    FusHaut();
    if (ancien!=nb_cases_vides)
        mouv = true;
    FinAction();
}

void Tuile::bas(){
    DeplBas();
    int ancien = nb_cases_vides;
    FusBas();
    if (ancien!=nb_cases_vides)
        mouv = true;
    FinAction();
}

void Tuile::Nouveau(){
    int indice = my_rand(nb_cases_vides);
    nb_cases_vides=nb_cases_vides-1;
    for (int i=0;i<16;i++){
        if (T[i])
            indice++;
        else
            if (i==indice)
                if (my_rand(4)<3)
                    T[i]=2;
                else
                    T[i]=4;
    }
}

void Tuile::DeplGauche(){
    for (int i=0;i<4;i++){
        if (T[4*i+2]==0){
            T[4*i+2]=T[4*i+3];
            if (T[4*i+2]!=0)
                mouv = true;
            T[4*i+3]=0;
        }
        if (T[4*i+1]==0){
            T[4*i+1]=T[4*i+2];
            T[4*i+2]=T[4*i+3];
            if (T[4*i+1]!=0)
                mouv = true;
            T[4*i+3]=0;
        }
        if (T[4*i]==0){
            T[4*i]=T[4*i+1];
            T[4*i+1]=T[4*i+2];
            T[4*i+2]=T[4*i+3];
            if (T[4*i]!=0)
                mouv = true;
            T[4*i+3]=0;
        }
    }
}

void Tuile::DeplDroite(){
    for (int i=0;i<4;i++){
        if (T[4*i+1]==0){
            T[4*i+1]=T[4*i];
            if (T[4*i+1]!=0)
                mouv = true;
            T[4*i]=0;
        }
        if (T[4*i+2]==0){
            T[4*i+2]=T[4*i+1];
            T[4*i+1]=T[4*i];
            if (T[4*i+2]!=0)
                mouv = true;
            T[4*i]=0;
        }
        if (T[4*i+3]==0){
            T[4*i+3]=T[4*i+2];
            T[4*i+2]=T[4*i+1];
            T[4*i+1]=T[4*i];
            if (T[4*i+3]!=0)
                mouv = true;
            T[4*i]=0;
        }
    }
}

void Tuile::DeplHaut(){
    for (int i=0;i<4;i++){
        if (T[8+i]==0){
            T[8+i]=T[12+i];
            if (T[8+i]!=0)
                mouv = true;
            T[12+i]=0;
        }
        if (T[4+i]==0){
            T[4+i]=T[8+i];
            T[8+i]=T[12+i];
            if (T[4+i]!=0)
                mouv = true;
            T[12+i]=0;
        }
        if (T[i]==0){
            T[i]=T[4+i];
            T[4+i]=T[8+i];
            T[8+i]=T[12+i];
            if (T[i]!=0)
                mouv = true;
            T[12+i]=0;
        }
    }
}

void Tuile::DeplBas(){
    for (int i=0;i<4;i++){
        if (T[4+i]==0){
            T[4+i]=T[i];
            if (T[i+4]!=0)
                mouv = true;
            T[i]=0;
        }
        if (T[8+i]==0){
            T[8+i]=T[4+i];
            T[4+i]=T[i];
            if (T[i+8]!=0)
                mouv = true;
            T[i]=0;
        }
        if (T[12+i]==0){
            T[12+i]=T[8+i];
            T[8+i]=T[4+i];
            T[4+i]=T[i];
            if (T[12+i]!=0)
                mouv = true;
            T[i]=0;
        }
    }
}

void Tuile::FusGauche(){
    for (int i=0;i<4;i++){
        if (T[4*i]==T[4*i+1]){
            T[4*i]=T[4*i]*2;
            if (T[4*i]!=0)
                nb_cases_vides=nb_cases_vides+1;
            T[4*i+1]=T[4*i+2];
            T[4*i+2]=T[4*i+3];
            T[4*i+3]=0;
            if(T[4*i+1]==T[4*i+2]){
                T[4*i+1]=T[4*i+2]*2;
                T[4*i+2]=0;
                if (T[4*i+1]!=0)
                    nb_cases_vides=nb_cases_vides+1;
            }
        }
        else {
            if (T[4*i+1]==T[4*i+2]){
                T[4*i+1]=T[4*i+1]*2;
                T[4*i+2]=T[4*i+3];
                T[4*i+3]=0;
                if (T[4*i+1]!=0)
                    nb_cases_vides=nb_cases_vides+1;
            }
            else{
                if(T[4*i+2]==T[4*i+3]){
                    T[4*i+2]=T[4*i+2]*2;
                    T[4*i+3]=0;
                    if (T[4*i+2]!=0)
                        nb_cases_vides=nb_cases_vides+1;
                }
            }
        }
    }
}

void Tuile::FusDroite(){
    for (int i=0;i<4;i++){
        if (T[4*i+3]==T[4*i+2]){
            T[4*i+3]=T[4*i+3]*2;
            T[4*i+2]=T[4*i+1];
            T[4*i+1]=T[4*i];
            T[4*i]=0;
            if (T[4*i+3]!=0)
                nb_cases_vides=nb_cases_vides+1;
            if(T[4*i+2]==T[4*i+1]){
                T[4*i+2]=T[4*i+1]*2;
                T[4*i+1]=0;
                if (T[4*i+2]!=0)
                    nb_cases_vides=nb_cases_vides+1;
            }
        }
        else {
            if (T[4*i+1]==T[4*i+2]){
                T[4*i+2]=T[4*i+2]*2;
                T[4*i+1]=T[4*i];
                T[4*i]=0;
                if (T[4*i+2]!=0)
                    nb_cases_vides=nb_cases_vides+1;
            }
            else{
                if(T[4*i+1]==T[4*i]){
                    T[4*i+1]=T[4*i+1]*2;
                    T[4*i]=0;
                    if (T[4*i+1]!=0)
                        nb_cases_vides=nb_cases_vides+1;
                }
            }
        }
    }
}

void Tuile::FusHaut(){
    for (int i=0;i<4;i++){
        if (T[i]==T[4+i]){
            T[i]=T[i]*2;
            T[i+4]=T[i+8];
            T[i+8]=T[i+12];
            T[i+12]=0;
            if (T[i]!=0)
                nb_cases_vides=nb_cases_vides+1;
            if(T[i+4]==T[i+8]){
                T[i+4]=T[i+8]*2;
                T[i+8]=0;
                if (T[i+4]!=0)
                    nb_cases_vides=nb_cases_vides+1;
            }
        }
        else {
            if (T[i+4]==T[i+8]){
                T[i+4]=T[i+4]*2;
                T[i+8]=T[i+12];
                T[i+12]=0;
                if (T[4+i]!=0)
                    nb_cases_vides=nb_cases_vides+1;
            }
            else{
                if(T[i+8]==T[i+12]){
                    T[i+8]=T[i+8]*2;
                    T[i+12]=0;
                    if (T[i+8]!=0)
                        nb_cases_vides=nb_cases_vides+1;
                }
            }
        }
    }
}

void Tuile::FusBas(){
    for (int i=0;i<4;i++){
        if (T[12+i]==T[8+i]){
            T[12+i]=T[12+i]*2;
            T[i+8]=T[i+4];
            T[i+4]=T[i];
            T[i]=0;
            if (T[i+12]!=0)
                nb_cases_vides=nb_cases_vides+1;
            if(T[i+8]==T[i+4]){
                T[i+8]=T[i+4]*2;
                T[i+4]=0;
                if (T[i+8]!=0)
                    nb_cases_vides=nb_cases_vides+1;
            }
        }
        else {
            if (T[i+4]==T[i+8]){
                T[i+8]=T[i+8]*2;
                T[i+4]=T[i];
                T[i]=0;
                if (T[i+8]!=0)
                    nb_cases_vides=nb_cases_vides+1;
            }
            else{
                if(T[i+4]==T[i]){
                    T[i+4]=T[i+4]*2;
                    T[i]=0;
                    if (T[i+4]!=0)
                        nb_cases_vides=nb_cases_vides+1;
                }
            }
        }
    }
}

ostream& operator <<(ostream& s,const Tuile &tab){ //on surcharge l'opérateur <<
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++)
            s << tab.T[i*4+j] << " , ";
        s << endl;
    }
    return s;
}

int Tuile::my_rand (int max){
   int res = time (NULL);
   res = res %max;
   return (res);
}

string Tuile::Couleur (int i){
    int j = i;
    int indice = 0;
    if (j!=0){
        while (j>1){
            j=j/2;
            indice++;
        }
    }
    string tab[13]={"#777777","#a9eafe","#77b5fe","#791cf8","#fd3f92","#fe1b00","#ff7f00","#f3d617","#87e98d","#01d758","#e1ce9a","#ffffff","#ff00c7"};
    return (tab[indice]);
}
