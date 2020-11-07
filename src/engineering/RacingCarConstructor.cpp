#include "RacingCarConstructor.h"

RacingCarConstructor::RacingCarConstructor()
{
    aeroDepartment = new AerodynamicsDepartment("Aerodynamics", "alimunium", getRand(),
     "Provides the car with a lightweight feeling and helps agianst the force of wind.",
    getRand(), getRand(), getRand());
    chassisDepartment = new ChassisDepartment("Chassis", "Carbon Fiber", getRand(), "Provides structural support for the car.", getRand(), getRand());
    tyreDepartment = new TyreDepartment("Tyres", "Rubber", getRand(), "The wheels of the car.", getRand(), getRand(), getRand());
    engineDepartment = new EngineDepartment("Engine", "Metal alloys", getRand(), "The core power of the car.", getRand(), getRand());
    electronicsDepartment = new ElectronicsDepartment("Electronics", "Silicon", getRand(), "The main motherboard and components of the car.", getRand(), getRand(), getRand(), getRand());
}

RacingCarConstructor::~RacingCarConstructor()
{
    delete aeroDepartment;
    delete chassisDepartment;
    delete tyreDepartment;
    delete engineDepartment;
    delete electronicsDepartment;
}

float RacingCarConstructor::getRand(){

    return (float)(rand() % 10000 + 100);

}