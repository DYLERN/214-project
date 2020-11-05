#include "FutureCarConstructor.h"
#include "NavigationalAI.h"

FutureCarConstructor::FutureCarConstructor() : RacingCarConstructor(){}
FutureCarConstructor::~FutureCarConstructor(){}

void FutureCarConstructor::addAerodynamics()
{
    car->setAerodynamics(aeroDepartment->develop());
}

void FutureCarConstructor::addChassis()
{
    car->setChassis(chassisDepartment->develop());
}

void FutureCarConstructor::addElectronics()
{
    car->setElectronics(electronicsDepartment->develop());
}

void FutureCarConstructor::addEngine()
{
    car->setEngine(engineDepartment->develop());
}

void FutureCarConstructor::addTyres()
{
    car->setTyres(tyreDepartment->develop());
}

void FutureCarConstructor::addAI()
{
    car->setAI(new NavigationalAI("AI", "N/A", 2398482.54f, "Extremely expensive experimental AI.", 0.0f, 60.2f, "NewHorizons IOS"));
}

FutureRacingCar* FutureCarConstructor::getCar()
{
    return car;
}