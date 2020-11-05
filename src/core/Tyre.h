#ifndef TYRE_H
#define TYRE_H

#include "RacingCarPart.h"

class Tyre : public RacingCarPart
{
    private:
        float thickness;
        float grip;

    public:
        Tyre(std::string, std::string, float, std::string, float, float, float);
        ~Tyre();
};

#endif