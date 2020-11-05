#include "NavigationalAI.h"

NavigationalAI::NavigationalAI(std::string type, std::string mat, float price, std::string desc, float weight, float increase, std::string ios)
 : RacingCarPart(type, mat, price, desc, weight)
{
    this->speedIcrease = increase;
    this->ios = ios;
}

NavigationalAI::~NavigationalAI(){}