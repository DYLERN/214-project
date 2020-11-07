#ifndef HARD_H
#define HARD_H
#include <iostream>
#include "CompoundTyre.h"
using namespace std;
/**
 * Created by Akil on 9/1/2020.
 */
class Hard : public CompoundTyre {
public:
    string TyreState;

public:
	Hard();

	Hard(string unnamed_1);


  virtual void handle();
	virtual CompoundTyre* changeCompoundTyre(string unnamed_1);
    virtual string getCompoundTyreState();
};

#endif
