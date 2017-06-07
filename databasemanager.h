#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QString>
#include <QDebug>
#include <QList>
#include "route.h"
#include "spaceship.h"

class DataBaseManager
{
private:
    QSqlDatabase database;
public:
    DataBaseManager();
    bool addRoute(Route route);
    QList<Route> loadAllRoute();
    QList<Route> searchRouteByName(QString name);
    //TODO
    bool addShip(SpaceShip ship);
    QList<SpaceShip> loadAllShip();
    QList<SpaceShip> searchShipByName(QString name);

    void connect();
    void close();
    ~DataBaseManager();
};

#endif // DATABASEMANAGER_H
