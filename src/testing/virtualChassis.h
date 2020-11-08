#ifndef __VIRTUALCHASSIS_H__
#define __VIRTUALCHASSIS_H__

#include "virtualParts.h"

/**
 * Not part of a design pattern
 * Child of virtualParts.h
 * Constructor sets local variable and inherited variables.
 * @author Connor Mayston
 */
class virtualChassis : public virtualParts{

private:
float collisionRating;

public:
virtualChassis(float, float, std::string, float, float);
float getCollisionRating();

};

#endif // __VIRTUALCHASSIS_H__


