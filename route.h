#ifndef ROUTE_H
#define ROUTE_H
#include <QString>
#include <QList>
#include "distance.h"

class Route
{
    Distance distance;
    QString name;
public:
    Route(QString name, Distance distance);
    QString toString();
    QString getName();
    Distance getDistance();
    ~Route();
};

#endif // ROUTE_H
