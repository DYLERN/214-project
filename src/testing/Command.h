#ifndef __COMMAND_H__
#define __COMMAND_H__

/**
 * Command class
 * Parent of concrete commands
 * Abstract class with one execute method.
 * @author Connor Mayston
 */
class Command{

public:
virtual void execute() = 0;

};

#endif // __COMMAND_H__
