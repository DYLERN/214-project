#ifndef CHASSIS_H
#define CHASSIS_H

#include "RacingCarPart.h"

class Chassis : public RacingCarPart
{
    private:
        float collisionRating;

    public:
        Chassis(std::string, std::string, float, std::string, float, float);
        ~Chassis();
};

#endif