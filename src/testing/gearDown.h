#ifndef __GEARDOWN_H__
#define __GEARDOWN_H__

#include "Command.h"
#include <iostream>

/**
 * ConcreteCommand class
 * Child of Command.h
 * Execute function changes car gear down and prints a statement
 * @author Connor Mayston
 */
class gearDown : public Command{

public:
void execute();

};

#endif // __GEARDOWN_H__