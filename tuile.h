#ifndef TUILE_H
#define TUILE_H
#include <QObject>

class Tuile : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString tuileQML READ readTuile NOTIFY tuileChanged)
public:
    explicit Tuile (QObject *parent = nullptr);
    Q_INVOKABLE void changement_valeur(int val);
    Q_INVOKABLE int val();
    QString readTuile();

signals:
    void tuileChanged();
public slots:

private:
    int valeur;

};

#endif // TUILE_H
