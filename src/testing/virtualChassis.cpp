#include "virtualChassis.h"

virtualChassis::virtualChassis(float collisionRating, float pricing, string description, float weight, float safety){

    this->collisionRating = collisionRating;
    this->pricing = pricing;
    this->weight = weight;
    this->description = description;
    this->safetyRating = safety;

}

float virtualChassis::getCollisionRating(){

    return collisionRating;

}

