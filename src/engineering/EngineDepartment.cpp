#include "EngineDepartment.h"
#include "../testing/virtualEngine.h"
#include <iostream>

using namespace std;

EngineDepartment::EngineDepartment(std::string type, std::string material, float pricing, std::string description, float weight, float horsePower) : EngineeringDepartment()
{
    this->engine = new Engine(type, material, pricing, description, weight, horsePower);
    this->simCar = new SimulatedCar();
    
    simCar->setEngine(new virtualEngine(horsePower, pricing, description, weight, 100.0f));
}
EngineDepartment::~EngineDepartment(){}

Engine* EngineDepartment::develop()
{
    research();
    test();
    analyze();
    delete simCar;
    return engine;
}

void EngineDepartment::research()
{
    cout << "Research has been conducted for the engine to produce greater horsepower." << endl;
}

void EngineDepartment::test()
{
    cout << "Engine is being sent for testing..." << endl << endl;
    simCar->testChassis();
}

void EngineDepartment::analyze()
{
    cout << "The engine's horsepower is fenominal!" << endl;
}