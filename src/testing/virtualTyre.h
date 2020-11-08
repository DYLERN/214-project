#ifndef __VIRTUALTYRE_H__
#define __VIRTUALTYRE_H__

#include "virtualParts.h"

/**
 * Not part of a design pattern
 * Child of virtualParts.h
 * Constructor sets local variable and inherited variables.
 * @author Connor Mayston
 */
class virtualTyre : public virtualParts{

protected:
float thickness;
float grip;

public:
virtualTyre(float, float, float, std::string, float, float);
float getThickness();
float getGrip();

};

#endif // __VIRTUALTYRE_H__
