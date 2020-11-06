#include "FormulaOneCar.h"

FormulaOneCar::FormulaOneCar()
{

}

FormulaOneCar::~FormulaOneCar()
{
    delete chassis;
    delete engine;
    delete electronics;
    delete aerodynamics;
    delete tyres;
}

Chassis* FormulaOneCar::getChassis()
{
    return chassis;
}

void FormulaOneCar::setChassis(Chassis* c)
{
    this->chassis = c;
}

Engine* FormulaOneCar::getEngine()
{
    return engine;
}

void FormulaOneCar::setEngine(Engine* e)
{
    this->engine = e;
}

Electronics* FormulaOneCar::getElectronics()
{
    return electronics;
}

void FormulaOneCar::setElectronics(Electronics* e)
{
    this->electronics = e;
}

Aerodynamics* FormulaOneCar::getAerodynamics()
{
    return aerodynamics;
}

void FormulaOneCar::setAerodynamics(Aerodynamics* a)
{
    this->aerodynamics = a;
}

Tyre* FormulaOneCar::getTyres()
{
    return tyres;
}

void FormulaOneCar::setTyres(Tyre* t)
{
    this->tyres = t;
}