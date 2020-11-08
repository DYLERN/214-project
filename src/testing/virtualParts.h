#ifndef __VIRTUALPARTS_H__
#define __VIRTUALPARTS_H__

#include "../pch.h"

/**
 * Not part of a design pattern
 * Parent of virtual parts.
 * @author Connor Mayston
 */
class virtualParts{

protected:
float pricing;
std::string description;
float weight;
float safetyRating;

public:
float getPricing();
std::string getDescription();
float getWeight();
float getSafetyRating();

};

#endif // __VIRTUALPARTS_H__



