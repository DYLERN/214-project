#ifndef DEFAULTSTRATEGY_H
#define DEFAULTSTRATEGY_H
#include <iostream>
#include "PitStopStrategy.h"
using namespace std;
/**
 * Created by Akil on 9/1/2020.
 */
class DefaultStrategy : public PitStopStrategy {


private:
	virtual string takeAction();

	~DefaultStrategy();
};

#endif
