#include "TyreDepartment.h"
#include "VirtualTyre.h"
#include <iostream>

using namespace std;

TyreDepartment::TyreDepartment(std::string type, std::string material, float pricing, std::string description, float weight, float thickness, float grip) : EngineeringDepartment()
{
    this->electronics = new Electronics(type, material, pricing, description, weight, thickness, grip);
    this->simCar = new SimulatedCar();
    
    simCar->setTyre(new VirtualTyre(thickness, grip, pricing, description, weight, 22));
}
ChassisDepartment::~ChassisDepartment(){}

Tyre* ChassisDepartment::develop()
{
    research();
    test();
    analyze();
    delete simCar;
    return chassis;
}

void ChassisDepartment::research()
{
    cout << "Research has been conducted and the tyres are made of amazing material with good grip." << endl;
}

void ChassisDepartment::test()
{
    cout << "The tyres are being sent for testing..." << endl << endl;
    simCar->testAero();
}

void ChassisDepartment::analyze()
{
    cout << "The tyresd have been analyzed and they have good grip!" << endl;
}