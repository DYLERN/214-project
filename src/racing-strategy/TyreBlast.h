#ifndef TYREBLAST_H
#define TYREBLAST_H
#include <iostream>
#include "PitStopStrategy.h"
using namespace std;
class TyreBlast : public PitStopStrategy {


private:
	virtual string takeAction();

	~TyreBlast();
};

#endif
