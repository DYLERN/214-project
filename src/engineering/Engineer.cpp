#include "Engineer.h"

using namespace std;

Engineer::Engineer(RacingCarConstructor* carBlueprint)
{
    this->carBlueprint = carBlueprint;
}

Engineer::~Engineer(){}

FormulaOneCar* Engineer::constructCar()
{
    carBlueprint->addAerodynamics();
    carBlueprint->addChassis();
    carBlueprint->addElectronics();
    carBlueprint->addEngine();
    carBlueprint->addTyres();
    return carBlueprint->getCar();
}