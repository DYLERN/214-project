#include "testing/virtualTyre.h"
#include "testing/SimulatedCar.h"
#include "testing/virtualAerodynamics.h"
#include "testing/virtualChassis.h"
#include "testing/virtualElectronics.h"
#include "testing/virtualEngine.h"
#include "testing/virtualParts.h"

int main() {

    float thickness = 1000;
    float grip = 1000;
    float pricing = 1000;
    std::string description = "Soft Tyres";
    float weight = 1000;
    float safety = 1000;

    virtualTyre* tyre = new virtualTyre(thickness, grip, pricing, description, weight, safety);
    SimulatedCar* car = new SimulatedCar();
    car->setTyres(tyre);
    car->testTyre();

    return 0;
}