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

#include <random>

#include "core/FormulaOneCar.h"
#include "logistics/InventoryItem.h"
#include "logistics/Container.h"
#include "logistics/LogisticsManager.h"
#include "engineering/CurrentCarConstructor.h"
#include "engineering/Engineer.h"
#include "testing/windTunnelTest.h"

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

    windTunnelTest* test = new windTunnelTest(cars[0]);

    test->testAcceleration();
    test->testBreaking();

    delete test;


    for(int i = 0; i < numCars; i++)
    {
        delete cars[i];
        delete engineers[i];
        delete bluePrints[i];
    }

    return 0;
}