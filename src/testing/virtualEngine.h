#ifndef __VIRTUALENGINE_H__
#define __VIRTUALENGINE_H__

#include "virtualParts.h"

class virtualEngine : public virtualParts{

protected:
float horsepower;

public:
virtualEngine(float, float, std::string, float, float);
float getPower();

};

#endif // __VIRTUALENGINE_H__
