#include "Tyre.h"

Tyre::Tyre(std::string type, std::string mat, float price, std::string desc, float weight, float thick, float grip)
 : RacingCarPart(type, mat, price, desc, weight)
{
    this->thickness = thick;
    this->grip = grip;
}

Tyre::~Tyre()
{
    
}

float Tyre::getRating(){

    return thickness;

}