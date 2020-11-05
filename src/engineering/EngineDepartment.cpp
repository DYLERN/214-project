#include "EngineDepartment.h"
#include "VirtualEngine.h"
#include <iostream>

using namespace std;

EngineDepartment::EngineDepartment(std::string type, std::string material, float pricing, std::string description, float weight, float horsePower) : EngineeringDepartment()
{
    this->engine = new Engine(type, material, pricing, description, weight, horsePower);
    this->simCar = new SimulatedCar();
    
    simCar->setEngine(new VirtualChassis(horsePower, pricing, description, weight, 100));
}
ChassisDepartment::~ChassisDepartment(){}

Engine* ChassisDepartment::develop()
{
    research();
    test();
    analyze();
    delete simCar;
    return chassis;
}

void ChassisDepartment::research()
{
    cout << "Research has been conducted for the engine to produce greater horsepower." << endl;
}

void ChassisDepartment::test()
{
    cout << "Engine is being sent for testing..." << endl << endl;
    simCar->testChassis();
}

void ChassisDepartment::analyze()
{
    cout << "The engine's horsepower is fenominal!" << endl;
}