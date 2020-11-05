#include "AerodynamicsDepartment.h"
#include "../testing/virtualAerodynamics.h"
#include <iostream>

using namespace std;

AerodynamicsDepartment::AerodynamicsDepartment(std::string type, std::string material, float pricing, std::string description, float weight, float SA, float rating) : EngineeringDepartment()
{
    this->aerodynamics = new Aerodynamics(type, material, pricing, description, weight, SA, rating);
    this->simCar = new SimulatedCar();
    
    simCar->setAero(new virtualAerodynamics(rating, pricing, description, weight, 14.0f));
}
AerodynamicsDepartment::~AerodynamicsDepartment(){}

Aerodynamics* AerodynamicsDepartment::develop()
{
    research();
    test();
    analyze();
    delete simCar;
    return aerodynamics;
}

void AerodynamicsDepartment::research()
{
    cout << "Research has been conducted and the aerodynamics provide a sustantial speed increase." << endl;
}

void AerodynamicsDepartment::test()
{
    cout << "The aerodynamics is being sent for testing..." << endl << endl;
    simCar->testAero();
}

void AerodynamicsDepartment::analyze()
{
    cout << "The aerodynamics are out of this world and will provide a competitive advantage!" << endl;
}