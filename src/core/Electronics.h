#ifndef ELECTRONICS_H
#define ELECTRONICS_H

#include "RacingCarPart.h"

class Electronics : public RacingCarPart
{
    private:
        float voltage;
        float amp;
        float power;

    public:
        Electronics(std::string, std::string, float, std::string, float, float, float, float);
        ~Electronics();
};

#endif