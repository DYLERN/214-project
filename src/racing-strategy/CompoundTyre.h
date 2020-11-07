#ifndef COMPOUNDTYRE_H
#define COMPOUNDTYRE_H
#include <iostream>
using namespace std;


class CompoundTyre {


public:
	CompoundTyre();

	CompoundTyre(string);

	virtual ~CompoundTyre();

virtual void handle()=0;

	virtual CompoundTyre* changeCompoundTyre(string unnamed_1) = 0;

	virtual string getCompoundTyreState()=0;
};

#endif
