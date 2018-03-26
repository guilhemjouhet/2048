#include "tuile.h"
#include <ctime>

Tuile::Tuile(QObject *parent) : QObject(parent)
{
    for (int i=0; i<16;i=i+1)
        T[i]=0;
    nb_cases_vides = 16;
    Nouveau();
    emit tuileChanged();
}

QList<QString> Tuile::readTuile(){
    QList<QString> l;
    for (int i=0;i<16;i++)
        l.append(QString::number(T[i]));
    return l;
}

QList<QString> Tuile::coulTuile(){
    QList<QString> l;
    for (int i=0;i<16;i++)
        l.append(QString::fromStdString(Couleur(T[i])));
    return l;
}

void Tuile::Gauche(){
    DeplGauche();
    FusGauche();
    Nouveau();
    emit tuileChanged();
}

void Tuile::Droite(){
    DeplDroite();
    FusDroite();
    Nouveau();
    emit tuileChanged();
}

void Tuile::Haut(){
    DeplHaut();
    FusHaut();
    Nouveau();
    emit tuileChanged();
}

void Tuile::Bas(){
    DeplBas();
    FusBas();
    Nouveau();
    emit tuileChanged();
}

void Tuile::Nouveau(){
    int indice = my_rand(nb_cases_vides);
    nb_cases_vides=nb_cases_vides-1;
    for (int i=0;i<16;i++){
        if (T[i])
            indice++;
        else
            if (i==indice)
                T[i]=2;
    }
}

void Tuile::DeplGauche(){
    for (int i=0;i<4;i++){
        if (T[4*i+2]==0){
            T[4*i+2]=T[4*i+3];
            T[4*i+3]=0;
        }
        if (T[4*i+1]==0){
            T[4*i+1]=T[4*i+2];
            T[4*i+2]=T[4*i+3];
            T[4*i+3]=0;
        }
        if (T[4*i]==0){
            T[4*i]=T[4*i+1];
            T[4*i+1]=T[4*i+2];
            T[4*i+2]=T[4*i+3];
            T[4*i+3]=0;
        }
    }
}

void Tuile::DeplDroite(){
    for (int i=0;i<4;i++){
        if (T[4*i+1]==0){
            T[4*i+1]=T[4*i];
            T[4*i]=0;
        }
        if (T[4*i+2]==0){
            T[4*i+2]=T[4*i+1];
            T[4*i+1]=T[4*i];
            T[4*i]=0;
        }
        if (T[4*i+3]==0){
            T[4*i+3]=T[4*i+2];
            T[4*i+2]=T[4*i+1];
            T[4*i+1]=T[4*i];
            T[4*i]=0;
        }
    }
}

void Tuile::DeplHaut(){
    for (int i=0;i<4;i++){
        if (T[8+i]==0){
            T[8+i]=T[12+i];
            T[12+i]=0;
        }
        if (T[4+i]==0){
            T[4+i]=T[8+i];
            T[8+i]=T[12+i];
            T[12+i]=0;
        }
        if (T[i]==0){
            T[i]=T[4+i];
            T[4+i]=T[8+i];
            T[8+i]=T[12+i];
            T[12+i]=0;
        }
    }
}

void Tuile::DeplBas(){
    for (int i=0;i<4;i++){
        if (T[4+i]==0){
            T[4+i]=T[i];
            T[i]=0;
        }
        if (T[8+i]==0){
            T[8+i]=T[4+i];
            T[4+i]=T[i];
            T[i]=0;
        }
        if (T[12+i]==0){
            T[12+i]=T[8+i];
            T[8+i]=T[4+i];
            T[4+i]=T[i];
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

ostream& operator <<(ostream& s,const Tuile &tab){
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
