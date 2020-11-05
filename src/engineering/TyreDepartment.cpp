#include "TyreDepartment.h"
#include "../testing/virtualTyre.h"
#include <iostream>

using namespace std;

TyreDepartment::TyreDepartment(std::string type, std::string material, float pricing, std::string description, float weight, float thickness, float grip) : EngineeringDepartment()
{
    this->tyre = new Tyre(type, material, pricing, description, weight, thickness, grip);
    this->simCar = new SimulatedCar();
    
    simCar->setTyres(new virtualTyre(thickness, grip, pricing, description, weight, 22));
}
TyreDepartment::~TyreDepartment(){}

Tyre* TyreDepartment::develop()
{
    research();
    test();
    analyze();
    delete simCar;
    return tyre;
}

void TyreDepartment::research()
{
    cout << "Research has been conducted and the tyres are made of amazing material with good grip." << endl;
}

void TyreDepartment::test()
{
    cout << "The tyres are being sent for testing..." << endl << endl;
    simCar->testAero();
}

void TyreDepartment::analyze()
{
    cout << "The tyresd have been analyzed and they have good grip!" << endl;
}