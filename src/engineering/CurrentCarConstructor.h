#ifndef CURRENTCARCONSTRUCTOR_H
#define CURRENTCARCONSTRUCTOR_H

#include "RacingCarConstructor.h"
#include "FormulaOneCar.h"

class CurrentCarConstructor : public RacingCarConstructor
{
    private:
        FormulaOneCar* car;

    public:
        CurrentCarConstructor();
        ~CurrentCarConstructor();
        void addAerodynamics();
        void addChassis();
        void addTyres();
        void addEngine();
        void addElectronics();
        FormulaOneCar* getCar();
};

#endif