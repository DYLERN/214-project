#ifndef __ACCELERATE_H__
#define __ACCELERATE_H__

#include "Command.h"
#include <iostream>

/**
 * ConcreteCommand class
 * Child of Command.h
 * Execute function performs acceleration of car using cout
 * @author Connor Mayston
 */
class accelerate : public Command{

public:
void execute();

};

#endif // __ACCELERATE_H__