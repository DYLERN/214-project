#ifndef SOFT_H
#define SOFT_H
#include "../pch.h"
#include "CompoundTyre.h"
using namespace std;
/**
 * Created by Akil on 9/1/2020.
 */
class Soft : public CompoundTyre {

private:
    string TyreState;
public:
	Soft();

	Soft(string unnamed_1);
   virtual void handle();
    virtual string getCompoundTyreState();


	virtual CompoundTyre* changeCompoundTyre(string unnamed_1);
};

#endif
