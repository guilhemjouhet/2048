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

void Tuile::Gauche(){
    DeplGauche();
    FusGauche();
    DeplGauche();
    Nouveau();
    emit tuileChanged();
}

void Tuile::Droite(){
    DeplDroite();
    FusDroite();
    DeplDroite();
    Nouveau();
    emit tuileChanged();
}

void Tuile::Haut(){
    DeplHaut();
    FusHaut();
    DeplHaut();
    Nouveau();
    emit tuileChanged();
}

void Tuile::Bas(){
    DeplBas();
    FusBas();
    DeplBas();
    Nouveau();
    emit tuileChanged();
}

void Tuile::Nouveau(){
    int indice = my_rand(nb_cases_vides);
    nb_cases_vides = nb_cases_vides-1;
    for (int i=0;i<16;i++){
        if (T[i]!=0)
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
            T[4*i+1]=0;
            if(T[4*i+2]==T[4*i+3]){
                T[4*i+2]=T[4*i+2]*2;
                T[4*i+3]=0;
            }
        }
        else {
            if (T[4*i+1]==T[4*i+2]){
                T[4*i+1]=T[4*i+1]*2;
                T[4*i+2]=0;
            }
            else{
                if(T[4*i+2]==T[4*i+3]){
                    T[4*i+2]=T[4*i+2]*2;
                    T[4*i+3]=0;
                }
            }
        }
    }
}

void Tuile::FusDroite(){
    for (int i=0;i<4;i++){
        if (T[4*i+3]==T[4*i+2]){
            T[4*i+3]=T[4*i+3]*2;
            T[4*i+2]=0;
            if(T[4*i+1]==T[4*i]){
                T[4*i+1]=T[4*i+1]*2;
                T[4*i]=0;
            }
        }
        else {
            if (T[4*i+1]==T[4*i+2]){
                T[4*i+2]=T[4*i+2]*2;
                T[4*i+1]=0;
            }
            else{
                if(T[4*i+1]==T[4*i]){
                    T[4*i+1]=T[4*i+1]*2;
                    T[4*i]=0;
                }
            }
        }
    }
}

void Tuile::FusHaut(){
    for (int i=0;i<4;i++){
        if (T[i]==T[4+i]){
            T[i]=T[i]*2;
            T[i+4]=0;
            if(T[i+8]==T[i+12]){
                T[i+8]=T[i+8]*2;
                T[i+12]=0;
            }
        }
        else {
            if (T[i+4]==T[i+8]){
                T[i+4]=T[i+4]*2;
                T[i+8]=0;
            }
            else{
                if(T[i+8]==T[i+12]){
                    T[i+8]=T[i+8]*2;
                    T[i+12]=0;
                }
            }
        }
    }
}

void Tuile::FusBas(){
    for (int i=0;i<4;i++){
        if (T[12+i]==T[8+i]){
            T[12+i]=T[12+i]*2;
            T[i+8]=0;
            if(T[i+4]==T[i]){
                T[i+4]=T[i+4]*2;
                T[i]=0;
            }
        }
        else {
            if (T[i+4]==T[i+8]){
                T[i+8]=T[i+8]*2;
                T[i+4]=0;
            }
            else{
                if(T[i+4]==T[i]){
                    T[i+4]=T[i+4]*2;
                    T[i]=0;
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
