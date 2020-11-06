#include "virtualElectronics.h"

virtualElectronics::virtualElectronics(float draw, float pricing, std::string description, float weight, float safety){

    this->powerDraw = draw;
    this->pricing = pricing;
    this->weight = weight;
    this->description = description;
    this->safetyRating = safety;

}

float virtualElectronics::getDraw(){

    return powerDraw;

}
