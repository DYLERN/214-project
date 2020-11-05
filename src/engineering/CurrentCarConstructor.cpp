#include "CurrentCarConstructor.h"

CurrentCarConstructor::CurrentCarConstructor() : RacingCarConstructor(){}
CurrentCarConstructor::~CurrentCarConstructor(){}

void CurrentCarConstructor::addAerodynamics()
{
    car->setAerodynamics(aeroDepartment->develop());
}

void CurrentCarConstructor::addChassis()
{
    car->setChassis(chassisDepartment->develop());
}

void CurrentCarConstructor::addElectronics()
{
    car->setElectronics(electronicsDepartment->develop());
}

void CurrentCarConstructor::addEngine()
{
    car->setEngine(engineDepartment->develop());
}

void CurrentCarConstructor::addTyres()
{
    car->setTyres(tyreDepartment->develop());
}

FormulaOneCar* CurrentCarConstructor::getCar()
{
    return car;
}