#ifndef FUTURERACINGCAR_H
#define FUTURERACINGCAR_H

#include "../core/FormulaOneCar.h"
#include "NavigationalAI.h"

class FutureRacingCar : public FormulaOneCar
{
    private:
        NavigationalAI* nav;

    public:
        FutureRacingCar();
        ~FutureRacingCar();
        NavigationalAI* getAI();
        void setAI(NavigationalAI*);
};

#endif