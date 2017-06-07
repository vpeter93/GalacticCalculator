#ifndef SPACESHIP_H
#define SPACESHIP_H
#include <QString>

enum VelocityUnit
{
    kmph,
    mps,
    kmps,
    C,
};

enum AccelerationUnit
{
    mps2,
    kmps2,
    G,
};

class SpaceShip
{
    QString name;
    double velocity;
    VelocityUnit velocityUnit;
    double acceleration;
    AccelerationUnit accelerationUnit;
public:
    SpaceShip(QString name, double velocity, VelocityUnit velocityUnit,
              double acceleration, AccelerationUnit accelerationUnit);
    QString getName()
    {
        return name;
    }
    double getVelocity()
    {
        return velocity;
    }
    VelocityUnit getVelocityUnit()
    {
        return velocityUnit;
    }
    double getAcceleration()
    {
        return acceleration;
    }
    AccelerationUnit getAccelerationUnit()
    {
        return accelerationUnit;
    }

};


/**
 * @brief intToAccelerationUnit
 * @param unit
 * @return
 */
AccelerationUnit intToAccelerationUnit(int unit);
/**
 * @brief accelerationUnitToInt
 * @param unit
 * @return
 */
int accelerationUnitToInt(AccelerationUnit unit);
/**
 * @brief velocityUnitToInt
 * @param unit
 * @return
 */
int velocityUnitToInt(VelocityUnit unit);
/**
 * @brief IntToVelocityUnit
 * @param unit
 * @return
 */
VelocityUnit IntToVelocityUnit(int unit);

#endif // SPACESHIP_H
