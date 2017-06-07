#ifndef SPACESHIPLIST_H
#define SPACESHIPLIST_H
#include <QList>
#include "spaceship.h"
#include "databasemanager.h"

class SpaceShipList
{
    QList<SpaceShip> list;
    DataBaseManager databaseManager;
public:
    SpaceShipList();
    //TODO
    QList<SpaceShip> search(QString keyword);
    void add(SpaceShip ship);
    int length();
    SpaceShip get(int i);
    void deleteList();
};

#endif // SPACESHIPLIST_H
