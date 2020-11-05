#include "virtualTyre.h"

virtualTyre::virtualTyre(float thickness, float grip, float pricing, std::string description, float weight, float safety){

    this->thickness = thickness;
    this->grip = grip;
    this->pricing = pricing;
    this->weight = weight;
    this->description = description;
    this->safetyRating = safety;

}

float virtualTyre::getThickness(){

    return thickness;

}

float virtualTyre::getGrip(){

    return grip;

}