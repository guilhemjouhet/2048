#include "tuile.h"

Tuile::Tuile(QObject *parent) : QObject(parent)
{
    valeur = 0;
    emit tuileChanged();
}
void Tuile::changement_valeur(int val){
    valeur = val;
    emit tuileChanged();
    }
int Tuile::val(){
    return valeur;
    }

QString Tuile::readTuile(){
    return QString::number(valeur);
}
