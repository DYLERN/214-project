#include "core/FormulaOneCar.h"
#include "engineering/Engineer.h"
#include "engineering/CurrentCarConstructor.h"
#include "engineering/RacingCarConstructor.h"

#include <iostream>

using namespace std;

int main() {

    int numCars = 4;

    RacingCarConstructor* bluePrints[numCars];
    Engineer* engineers[numCars];
    FormulaOneCar* cars[numCars];

    for(int i = 0; i < numCars; i++)
    {
        bluePrints[i] = new CurrentCarConstructor();
        engineers[i] = new Engineer(bluePrints[i]);
        cars[i] = engineers[i]->constructCar();
    }


    for(int i = 0; i < numCars; i++)
    {
        delete cars[i];
        delete engineers[i];
        delete bluePrints[i];
    }

    return 0;
}