#ifndef ENGINE_H
#define ENGINE_H

#include "RacingCarPart.h"

class Engine : public RacingCarPart
{
    private:
        float horsePower;

    public:
        Engine(std::string, std::string, float, std::string, float, float);
        ~Engine();
};

#endif