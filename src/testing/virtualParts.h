#ifndef __VIRTUALPARTS_H__
#define __VIRTUALPARTS_H__

#include <string>


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



