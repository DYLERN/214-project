#ifndef HIGHTEMPERATURE_H
#define HIGHTEMPERATURE_H
#include "../pch.h"
#include "PitStopStrategy.h"
using namespace std;
class HighTemperature : public PitStopStrategy {


private:
	virtual string takeAction();

	~HighTemperature();
};

#endif
