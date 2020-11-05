#ifndef __VIRTUALAERODYNAMICS_H__
#define __VIRTUALAERODYNAMICS_H__

#include "virtualParts.h"

class virtualAerodynamics : public virtualParts{

protected:
float rating;

public:
virtualAerodynamics(float, float, string, float, float);
float getRating();

};

#endif // __VIRTUALAERODYNAMICS_H__


