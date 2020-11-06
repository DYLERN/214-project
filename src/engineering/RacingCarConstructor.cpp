#include "RacingCarConstructor.h"

RacingCarConstructor::RacingCarConstructor()
{
    aeroDepartment = new AerodynamicsDepartment("Aerodynamics", "alimunium", 200000.00f,
     "Provides the car with a lightweight feeling and helps agianst the force of wind.",
    25.0f, 130.23f, 88.43f);
    chassisDepartment = new ChassisDepartment("Chassis", "Carbon Fiber", 565327.87f, "Provides structural support for the car.", 450.67f, 93.5f);
    tyreDepartment = new TyreDepartment("Tyres", "Rubber", 586793.26f, "The wheels of the car.", 102.34, 20.3, 99.5);
    engineDepartment = new EngineDepartment("Engine", "Metal alloys", 1000200.95f, "The core power of the car.", 230.0f, 800.0f);
    electronicsDepartment = new ElectronicsDepartment("Electronics", "Silicon", 200394.23f, "The main motherboard and components of the car.", 5.0f, 300.0f, 200.0f, 60000.0f);
}

RacingCarConstructor::~RacingCarConstructor()
{
    delete aeroDepartment;
    delete chassisDepartment;
    delete tyreDepartment;
    delete engineDepartment;
    delete electronicsDepartment;
}