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
#include "racing/Race.h"
#include "racing/results.h"

int main() {

    std::srand(std::time(0));

    const int numCars = 10;

    RacingCarConstructor* bluePrints[numCars];
    Engineer* engineers[numCars];
    FormulaOneCar* cars[numCars];
    std::string names[numCars] = {"Alan", "Connor", "Liam", "Dylan", "Nic", "Josh", "Alex", "Ben", "Billy", "Rob"};
    std::string teams[numCars] = {"RedBull", "Redbull", "Mercedez", "Mercedez", "Ford", "Ford", "Lamborghini", "Lamborghini", "Ferrari", "Ferrari"};
    std::string models[numCars] = {"FX04", "FX05", "FX06", "FX07", "FX08", "FX09", "FX10", "FX11", "FX12", "FX13"};

    for(int i = 0; i < numCars; i++)
    {
        bluePrints[i] = new CurrentCarConstructor();
        engineers[i] = new Engineer(bluePrints[i]);
        cars[i] = engineers[i]->constructCar();
        cars[i]->carModel = models[i];
        cars[i]->driverName = names[i];
        cars[i]->team = teams[i];
    }



    windTunnelTest* test = new windTunnelTest(cars[0]);

    test->testAcceleration();
    test->testBreaking();



    delete test;

    Race *race = new Race(cars, "GrandPrix", "Europe");

    race->testTimes();
    race->testTimes();
    race->testTimes();

    std::array<std::shared_ptr<results>,10> reports = race->commenceRace();

    for(int i = 0; i < 10; i++){

        reports[i]->print();

    }

    delete race;

    for(int i = 0; i < numCars; i++)
    {
        delete cars[i];
        delete engineers[i];
        delete bluePrints[i];
    }

    // manager.joinAll();
    
    return 0;
}