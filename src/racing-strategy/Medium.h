#ifndef MEDIUM_H
#define MEDIUM_H
#include <iostream>
#include "CompoundTyre.h"
using namespace std;
/**
 * Created by Akil on 9/1/2020.
 */
class Medium : public CompoundTyre {

private:
    string TyreState;
public:
	Medium();

	Medium(string unnamed_1);
    virtual void handle();
    virtual string getCompoundTyreState();

	virtual CompoundTyre* changeCompoundTyre(string unnamed_1);
};

#endif
