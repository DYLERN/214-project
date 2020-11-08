#ifndef __GEARUP_H__
#define __GEARUP_H__

#include "Command.h"
#include "../pch.h"

/**
 * ConcreteCommand class
 * Child of Command.h
 * Execute function changes car gear up and prints a statement
 * @author Connor Mayston
 */
class gearUp : public Command{

public:
void execute();

};

#endif // __GEARUP_H__