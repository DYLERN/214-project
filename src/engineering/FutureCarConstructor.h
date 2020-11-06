#ifndef FUTURECARCONSTRUCTOR_H
#define FUTURECARCONSTRUCTOR_H

#include "RacingCarConstructor.h"
#include "FutureRacingCar.h"

class FutureCarConstructor : public RacingCarConstructor
{
    private:
        FutureRacingCar* car;

    public:
        FutureCarConstructor();
        ~FutureCarConstructor();
        void addAerodynamics();
        void addChassis();
        void addTyres();
        void addEngine();
        void addElectronics();
        void addAI();
        FutureRacingCar* getCar();
};

#endif