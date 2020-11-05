#include "virtualEngine.h"

virtualEngine::virtualEngine(float horsepower, float pricing, std::string description, float weight, float safety){

    this->horsepower = horsepower;
    this->pricing = pricing;
    this->weight = weight;
    this->description = description;
    this->safetyRating = safety;

}

float virtualEngine::getPower(){

    return horsepower;

}
