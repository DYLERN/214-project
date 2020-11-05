#ifndef __VIRTUALENGINE_H__
#define __VIRTUALENGINE_H__

#include "virtualParts.h"

class virtualEngine : public virtualParts{

protected:
float horsepower;

public:
virtualEngine(float, float, string, float, float);
float getPower();

};

#endif // __VIRTUALENGINE_H__
