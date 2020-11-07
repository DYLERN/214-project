#ifndef __VIRTUALENGINE_H__
#define __VIRTUALENGINE_H__

#include "virtualParts.h"

/**
 * Not part of a design pattern
 * Child of virtualParts.h
 * Constructor sets local variable and inherited variables.
 * @author Connor Mayston
 */
class virtualEngine : public virtualParts{

protected:
float horsepower;

public:
virtualEngine(float, float, std::string, float, float);
float getPower();

};

#endif // __VIRTUALENGINE_H__
