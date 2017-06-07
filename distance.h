#ifndef DISTANCE_H
#define DISTANCE_H
#include <QString>

enum DistanceUnit
{
    kiloMeter,
    parsec,
    lightSecundum,
    lightMinute,
    lightHour,
    lightYear,
    AstronomicalUnit,
    KiloParsec,
    MegaParsec,
};

class Distance
{
    DistanceUnit unit;
    double quantity;
public:
    Distance(double thisQuantity, int distanceUnit);
    QString quantityToString();
    QString unitToString();
    double getQuantity();
    ~Distance();

};

QString DistanceUnitToQString(QString distanceUnit);

#endif // DISTANCE_H
