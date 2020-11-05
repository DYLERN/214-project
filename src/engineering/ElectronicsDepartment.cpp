#include "ElectronicsDepartment.h"
#include "VirtualElectronics.h"
#include <iostream>

using namespace std;

AerodynamicsDepartment::AerodynamicsDepartment(std::string type, std::string material, float pricing, std::string description, float weight, float volt, float amp, float power) : EngineeringDepartment()
{
    this->electronics = new Electronics(type, material, pricing, description, weight, volt, amp, power);
    this->simCar = new SimulatedCar();
    
    simCar->setElectronics(new VirtualElectronics(power, pricing, description, weight, 20));
}
ChassisDepartment::~ChassisDepartment(){}

Electronics* ChassisDepartment::develop()
{
    research();
    test();
    analyze();
    delete simCar;
    return chassis;
}

void ChassisDepartment::research()
{
    cout << "Research has been conducted and the electronics seem to be capable with the included power draw." << endl;
}

void ChassisDepartment::test()
{
    cout << "The electonic system is being sent for testing..." << endl << endl;
    simCar->testAero();
}

void ChassisDepartment::analyze()
{
    cout << "The electronics have been analyzed and the voltage and power is withing a good margin!" << endl;
}