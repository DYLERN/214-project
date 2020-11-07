#ifndef CONTEXT_H
#define CONTEXT_H

#include "iostream"
#include "CompoundTyre.h"
#include "PitStopStrategy.h"
using namespace std;
class Context {

private:
	string name;
	CompoundTyre* Tyre;
	PitStopStrategy* strategy;

public:
	Context();

	Context(string type);

	~Context();

	void takeAction();

	void setStateAndStrategy(CompoundTyre* unnamed_1, PitStopStrategy* unnamed_2);
	void changeTyreState(string);
};

#endif
