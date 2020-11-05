#ifndef __VIRTUALTYRE_H__
#define __VIRTUALTYRE_H__

#include "virtualParts.h"

class virtualTyre : public virtualParts{

protected:
float thickness;
float grip;

public:
virtualTyre(float, float, float, string, float, float);
float getThickness();
float getGrip();

};

#endif // __VIRTUALTYRE_H__
