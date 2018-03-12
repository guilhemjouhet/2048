#include "listetuile.h"
#include <vector>

ListeTuile::ListeTuile(QObject *parent) : QObject(parent)
{
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
    /*std::vector<Tuile*> Ltuile(16);
    Ltuile[0]=&tuile1;
    Ltuile[1]=&tuile2;
    Ltuile[2]=&tuile3;
    Ltuile[3]=&tuile4;
    Ltuile[4]=&tuile5;
    Ltuile[5]=&tuile6;
    Ltuile[6]=&tuile7;
    Ltuile[7]=&tuile8;
    Ltuile[8]=&tuile9;
    Ltuile[9]=&tuile10;
    Ltuile[10]=&tuile11;
    Ltuile[11]=&tuile12;
    Ltuile[12]=&tuile13;
    Ltuile[13]=&tuile14;
    Ltuile[14]=&tuile15;
    Ltuile[15]=&tuile16;*/
}
void ListeTuile::fusionH(){

    emit listetuileChanged();
}
