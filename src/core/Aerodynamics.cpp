#include "Aerodynamics.h"

Aerodynamics::Aerodynamics(std::string type, std::string mat, float price, std::string desc, float weight, float SA, float rating)
 : RacingCarPart(type, mat, price, desc, weight)
{
    this->exposedSurfaceArea = SA;
    this->aerodynamicRating = rating;
}

Aerodynamics::~Aerodynamics(){}

float Aerodynamics::getRating(){

    return aerodynamicRating;

}