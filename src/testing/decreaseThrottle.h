#ifndef __DECREASETHROTTLE_H__
#define __DECREASETHROTTLE_H__

#include "Command.h"
#include <iostream>

/**
 * ConcreteCommand class
 * Child of Command.h
 * Execute function slows car down using cout
 * @author Connor Mayston
 */
class decreaseThrottle : public Command{

public:
void execute();

};

#endif // __DECREASETHROTTLE_H__
