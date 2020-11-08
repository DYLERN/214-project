#ifndef __STARTCAR_H__
#define __STARTCAR_H__

#include "Command.h"
#include "../pch.h"

/**
 * ConcreteCommand class
 * Child of Command.h
 * Execute function turns car on and prints a statement
 * @author Connor Mayston
 */
class startCar : public Command{

public:
void execute();

};

#endif // __STARTCAR_H__
