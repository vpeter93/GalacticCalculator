#include "distance.h"
#include <QObject>

Distance::Distance(double thisQuantity, int distanceUnit) : quantity(thisQuantity)
{
    if(distanceUnit == 0)
    {
        unit = kiloMeter;
    }
    else if(distanceUnit == 1)
    {
        unit = parsec;
    }
    else if(distanceUnit == 2)
    {
        unit = lightSecundum;
    }
    else if(distanceUnit == 3)
    {
        unit = lightMinute;
    }
    else if(distanceUnit == 4)
    {
        unit = lightHour;
    }
    else if(distanceUnit == 5)
    {
        unit = lightYear;
    }
    else if(distanceUnit == 6)
    {
        unit = AstronomicalUnit;
    }
    else if(distanceUnit == 7)
    {
        unit = KiloParsec;
    }
    else if(distanceUnit == 8)
    {
        unit = MegaParsec;
    }

}
QString Distance::quantityToString()
{
    return QString::number(quantity);
}
QString Distance::unitToString()
{
    return QString::number(unit);
}


Distance::~Distance()
{

}

QString DistanceUnitToQString(QString distanceUnit)
{
    if(distanceUnit == "0")
    {
        return QObject::tr("km");
    }
    else if(distanceUnit == "1")
    {
        return QObject::tr("parsek");
    }
    else if(distanceUnit == "2")
    {
        return QObject::tr("Light-second");
    }
    else if(distanceUnit == "3")
    {
        return QObject::tr("Light-minute");
    }
    else if(distanceUnit == "4")
    {
        return QObject::tr("Light-hour");
    }
    else if(distanceUnit == "5")
    {
        return QObject::tr("Light-year");
    }
    else if(distanceUnit == "6")
    {
        return QObject::tr("Astronomical unit");
    }
    else if(distanceUnit == "7")
    {
        return QObject::tr("kiloparsec");
    }
    else if(distanceUnit == "8")
    {
        return QObject::tr("megaparsec");
    }
    return "";
}
double Distance::getQuantity()
{
    return quantity;
}
