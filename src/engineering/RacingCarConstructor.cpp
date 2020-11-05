#include "RacingCarConstructor.h"

RacingCarConstructor::RacingCarConstructor()
{
    aeroDepartment = new AerodynamicsDepartment("Aerodynamics", "alimunium", 200000,
     "Provides the car with a lightweight feeling and helps agianst the force of wind.",
    25, 130.23, 88.43);
    chassisDepartment = new ChassisDepartment("Chassis", "Carbon Fiber", 565327.87, "Provides structural support for the car.", 450.67, 93.5);
    tyreDepartment = new TyreDepartment("Tyres", "Rubber", 586793.26, "The wheels of the car.", 102.34, 20.3, 99.5);
    engineDepartment = new EngineDepartment("Engine", "Metal alloys", 1000200.95, "The core power of the car.", 230, 800);
    electronicsDepartment = new ElectonicsDepartment("Electronics", "Silicon", 200394.23, "The main motherboard and components of the car.", 5, 300, 200, 60000);
}

RacingCarConstructor::~RacingCarConstructor()
{
    delete aeroDepartment;
    delete chassisDepartment;
    delete tyreDepartment;
    delete engineDepartment;
    delete electronicsDepartment;
}