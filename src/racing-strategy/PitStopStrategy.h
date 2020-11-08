#ifndef PITSTOPSTRATEGY_H
#define PITSTOPSTRATEGY_H
#include <iostream>
using namespace std;
class PitStopStrategy {


public:
	virtual string takeAction() = 0;

	virtual ~PitStopStrategy();
};

#endif
