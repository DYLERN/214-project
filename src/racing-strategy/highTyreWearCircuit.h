#ifndef HIGHTYREWEARCIRCUIT_H
#define HIGHTYREWEARCIRCUIT_H
#include <iostream>
#include "PitStopStrategy.h"
using namespace std;
class highTyreWearCircuit : public PitStopStrategy {


private:
	virtual string takeAction();

	~highTyreWearCircuit();
};

#endif
