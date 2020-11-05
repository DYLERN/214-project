#ifndef AERODYNAMICS_H
#define AERODYNAMICS_H

#include "RacingCarPart.h"

class Aerodynamics : public RacingCarPart
{
    private:
        float exposedSurfaceArea;
        float aerodynamicRating;

    public:
        Aerodynamics(std::string, std::string, float, std::string, float, float, float);
        ~Aerodynamics();
};

#endif