#ifndef HIGHTEMPERATURE_H
#define HIGHTEMPERATURE_H
#include <iostream>
#include "PitStopStrategy.h"
using namespace std;
class HighTemperature : public PitStopStrategy {


private:
	virtual string takeAction();

	~HighTemperature();
};

#endif
