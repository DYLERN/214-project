#ifndef RACINGCARPART_H
#define RACINGCARPART_H

#include <string>

class RacingCarPart
{
    protected:
        std::string type;
        std::string material;
        float pricing;
        std::string description;
        float weight;

    public:
        RacingCarPart(std::string type, std::string material, float pricing, std::string description, float weight)
        {
            this->type = type;
            this->material = material;
            this->pricing = pricing;
            this->description = description;
            this->weight = weight;
        }
        ~RacingCarPart(){};
};

#endif