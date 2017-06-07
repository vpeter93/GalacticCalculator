#include "spaceship.h"

SpaceShip::SpaceShip(QString name, double velocity, VelocityUnit velocityUnit,
                     double acceleration, AccelerationUnit accelerationUnit) :
        name(name), velocity(velocity), velocityUnit(velocityUnit),
        acceleration(acceleration), accelerationUnit(accelerationUnit)
{

}


/**
 * @brief intToAccelerationUnit
 * @param unit
 * @return
 */
AccelerationUnit intToAccelerationUnit(int unit)
{
    switch(unit)
    {
        case 0  : return mps2;
        case 1  : return kmps2;
        case 2  : return G;
        default : return mps2;
    }
}
/**
 * @brief accelerationUnitToInt
 * @param unit
 * @return
 */
int accelerationUnitToInt(AccelerationUnit unit)
{
    switch(unit)
    {
        case mps2 : return 0;
        case kmps2 : return 1;
        case G : return 2;
        default : return 0;
    }
}
/**
 * @brief velocityUnitToInt
 * @param unit
 * @return
 */
int velocityUnitToInt(VelocityUnit unit)
{
    switch(unit)
    {
        case kmph : return 0;
        case mps : return 1;
        case kmps : return 2;
        case C : return 3;
        default : return 0;
    }
}
/**
 * @brief IntToVelocityUnit
 * @param unit
 * @return
 */
VelocityUnit IntToVelocityUnit(int unit)
{
    switch(unit)
    {
        case 0 : return kmph;
        case 1 : return mps;
        case 2 : return kmps;
        case 3 : return C;
        default : return kmph;
    }
}
