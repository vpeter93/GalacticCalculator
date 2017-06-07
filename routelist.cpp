#include "routelist.h"


RouteList::RouteList()
{
    routeList = databaseManager.loadAllRoute();
}
/**
 * @brief RouteList::listInit
 */
QList<Route> RouteList::search(QString keyword)
{
    return databaseManager.searchRouteByName(keyword);
}
/**
 * @brief RouteList::add
 * @param route
 */
void RouteList::add(Route route)
{
    routeList.append(route);

    databaseManager.addRoute(route);
}
/**
 * @brief RouteList::length
 * @return
 */
int RouteList::length()
{
    return routeList.length();
}
/**
 * @brief RouteList::get
 * @param i
 * @return
 */
Route RouteList::get(int i)
{
    return routeList[i];
}
/**
 * @brief RouteList::deleteList
 */
void RouteList::deleteList()
{
    routeList.clear();
}
