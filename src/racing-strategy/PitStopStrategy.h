#ifndef PITSTOPSTRATEGY_H
#define PITSTOPSTRATEGY_H
#include "../pch.h"
using namespace std;
class PitStopStrategy {


public:
	virtual string takeAction() = 0;

	virtual ~PitStopStrategy();
};

#endif
