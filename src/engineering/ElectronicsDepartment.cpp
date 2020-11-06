#include "ElectronicsDepartment.h"
#include "../testing/virtualElectronics.h"
#include <iostream>

using namespace std;

ElectronicsDepartment::ElectronicsDepartment(std::string type, std::string material, float pricing, std::string description, float weight, float volt, float amp, float power) : EngineeringDepartment()
{
    this->electronics = new Electronics(type, material, pricing, description, weight, volt, amp, power);
    this->simCar = new SimulatedCar();
    
    simCar->setElectronics(new virtualElectronics(power, pricing, description, weight, 20.0f));
}
ElectronicsDepartment::~ElectronicsDepartment()
{
    if(simCar != nullptr)
        delete simCar;
}

Electronics* ElectronicsDepartment::develop()
{
    research();
    test();
    analyze();
    return electronics;
}

void ElectronicsDepartment::research()
{
    cout << "Research has been conducted and the electronics seem to be capable with the included power draw." << endl;
}

void ElectronicsDepartment::test()
{
    cout << "The electonic system is being sent for testing..." << endl << endl;
    simCar->testElectronics();
}

void ElectronicsDepartment::analyze()
{
    cout << "The electronics have been analyzed and the voltage and power is withing a good margin!" << endl << endl;
}