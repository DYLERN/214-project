#include "Electronics.h"

Electronics::Electronics(std::string type, std::string mat, float price, std::string desc, float weight, float volt, float amp, float power)
 : RacingCarPart(type, mat, price, desc, weight)
 {
     this->voltage = volt;
     this->amp = amp;
     this->power = power;
 }

 Electronics::~Electronics(){}

float Electronics::getRating(){

    return power;

}