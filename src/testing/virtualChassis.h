#ifndef __VIRTUALCHASSIS_H__
#define __VIRTUALCHASSIS_H__

#include "virtualParts.h"

class virtualChassis : public virtualParts{

private:
float collisionRating;

public:
virtualChassis(float, float, string, float, float);
float getCollisionRating();

};

#endif // __VIRTUALCHASSIS_H__


