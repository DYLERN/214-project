#include "core/FormulaOneCar.h"
#include "engineering/Engineer.h"
#include "engineering/CurrentCarConstructor.h"
#include "engineering/RacingCarConstructor.h"
#include "testing/SimulatedCar.h"
#include "testing/virtualAerodynamics.h"
#include "testing/virtualChassis.h"
#include "testing/virtualElectronics.h"
#include "testing/virtualEngine.h"
#include "testing/virtualParts.h"
#include "testing/virtualTyre.h"

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

    SimulatedCar* car = new SimulatedCar();
    car->setAero(new virtualAerodynamics(1,1,"aero",1,1));
    car->setChassis(new virtualChassis(1,1,"chassis",1,1));
    car->setElectronics(new virtualElectronics(1,1,"electronics",1,1));
    car->setEngine(new virtualEngine(1,1,"engine",1,1));
    car->setTyres(new virtualTyre(1,1,1,"tyre",1,1));

    car->testCar(10,10,"rainy");

    


    for(int i = 0; i < numCars; i++)
    {
        delete cars[i];
        delete engineers[i];
        delete bluePrints[i];
    }



    return 0;
}