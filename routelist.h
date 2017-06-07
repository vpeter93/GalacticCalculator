#ifndef ROUTELIST_H
#define ROUTELIST_H
#include <QList>
#include "route.h"
#include "databasemanager.h"

class RouteList
{
    QList<Route> routeList;
    DataBaseManager databaseManager;
public:
    RouteList();
    QList<Route> search(QString keyword);
    void add(Route route);
    int length();
    Route get(int i);
    void deleteList();
};

#endif // ROUTELIST_H
