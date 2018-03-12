#ifndef TUILE_H
#define TUILE_H
#include <QObject>

class Tuile : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString cptQML READ readCompteur NOTIFY cptChanged)
public:
    explicit Tuile (QObject *parent = nullptr);
    Q_INVOKABLE void changement_valeur(int val);
    Q_INVOKABLE int val();
    QString readtuile();

signals:
    void tuileChanged();
public slots:

private:
    int valeur;

};

#endif // TUILE_H
