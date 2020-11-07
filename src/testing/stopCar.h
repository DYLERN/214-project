#ifndef __STOPCAR_H__
#define __STOPCAR_H__

#include "Command.h"
#include <iostream>

/**
 * ConcreteCommand class
 * Child of Command.h
 * Execute function changes car gear down and prints a statement
 * @author Connor Mayston
 */
class stopCar : public Command{

public:
void execute();

};

#endif // __STOPCAR_H__
