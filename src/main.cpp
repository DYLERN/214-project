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

int main() {


    SimulatedCar* car = new SimulatedCar();
    car->setAero(new virtualAerodynamics(1,1,"aero",1,1));
    car->setChassis(new virtualChassis(1,1,"chassis",1,1));
    car->setElectronics(new virtualElectronics(1,1,"electronics",1,1));
    car->setEngine(new virtualEngine(1,1,"engine",1,1));
    car->setTyres(new virtualTyre(1,1,1,"tyre",1,1));

    car->testCar(10,10,"rainy");



    return 0;
}