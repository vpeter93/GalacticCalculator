#include "route.h"

Route::Route(QString name, Distance distance) : distance(distance), name(name)
{

}
QString Route::toString()
{
    return name+" "+distance.quantityToString()+" "+distance.unitToString();
}
QString Route::getName()
{
    return name;
}
Distance Route::getDistance()
{
    return distance;
}

Route::~Route()
{

}
