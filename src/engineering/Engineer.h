#ifndef ENGINEER_H
#define ENGINEER_H

#include "RacingCarConstructor.h"
#include "../core/FormulaOneCar.h"

class Engineer
{

    private:
        RacingCarConstructor* carBlueprint;

    public:
        Engineer(RacingCarConstructor*);
        ~Engineer();
        FormulaOneCar* constructCar();
};

#endif