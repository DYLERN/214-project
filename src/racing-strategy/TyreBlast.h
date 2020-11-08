#ifndef TYREBLAST_H
#define TYREBLAST_H
#include "../pch.h"
#include "PitStopStrategy.h"
using namespace std;
class TyreBlast : public PitStopStrategy {


private:
	virtual string takeAction();

	~TyreBlast();
};

#endif
