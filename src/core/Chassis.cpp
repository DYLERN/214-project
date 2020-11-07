#include "Chassis.h"

Chassis::Chassis(std::string type, std::string mat, float price, std::string desc, float weight, float rating)
 : RacingCarPart(type, mat, price, desc, weight)
{
    this->collisionRating = rating;
}

Chassis::~Chassis()
{
    
}

float Chassis::getRating(){

    return collisionRating;

}