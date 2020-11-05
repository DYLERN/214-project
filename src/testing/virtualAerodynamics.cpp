#include "virtualAerodynamics.h"

virtualAerodynamics::virtualAerodynamics(float rating, float pricing, string description, float weight, float safety){

    this->rating = rating;
    this->pricing = pricing;
    this->weight = weight;
    this->description = description;
    this->safetyRating = safety;

};

float virtualAerodynamics::getRating(){

    return rating;

}