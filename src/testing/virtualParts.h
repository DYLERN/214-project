#ifndef __VIRTUALPARTS_H__
#define __VIRTUALPARTS_H__

#include <string>
#include "virtualTyre.h"
#include "virtualChassis.h"
#include "virtualEngine.h"
#include "virtualAerodynamics.h"
#include "virtualElectronics.h"

using namespace std;

class virtualParts{

protected:
float pricing;
string description;
float weight;
float safetyRating;

public:
float getPricing();
string getDescription();
float getWeight();
float getSafetyRating();

};

#endif // __VIRTUALPARTS_H__



