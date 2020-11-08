#ifndef __INCREASETHROTTLE_H__
#define __INCREASETHROTTLE_H__

#include "Command.h"
#include "../pch.h"

/**
 * ConcreteCommand class
 * Child of Command.h
 * Execute function increases speed of car and prints a statement
 * @author Connor Mayston
 */
class increaseThrottle : public Command{

public:
void execute();

};

#endif // __INCREASETHROTTLE_H__