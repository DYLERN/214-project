#ifndef __VIRTUALAERODYNAMICS_H__
#define __VIRTUALAERODYNAMICS_H__

#include "virtualParts.h"

/**
 * Not part of a design pattern
 * Child of virtualParts.h
 * Constructor sets local variable and inherited variables.
 * @author Connor Mayston
 */
class virtualAerodynamics : public virtualParts{

protected:
float rating;

public:
virtualAerodynamics(float, float, std::string, float, float);
float getRating();

};

#endif // __VIRTUALAERODYNAMICS_H__


