#include "ChassisDepartment.h"
#include "../testing/virtualChassis.h"

using namespace std;

ChassisDepartment::ChassisDepartment(std::string type, std::string material, float pricing, std::string description, float weight, float collision) : EngineeringDepartment()
{
    this->chassis = new Chassis(type, material, pricing, description, weight, collision);
    this->simCar = new SimulatedCar();
    
    simCar->setChassis(new virtualChassis(collision, pricing, description, weight, 75.0f));
}
ChassisDepartment::~ChassisDepartment()
{
    if(simCar != nullptr)
        delete simCar;
}

Chassis* ChassisDepartment::develop()
{
    research();
    test();
    analyze();
    return chassis;
}

void ChassisDepartment::research()
{
    cout << "Research has been conducted for the stability of the chassis and it is in the safe limits." << endl;
}

void ChassisDepartment::test()
{
    cout << "Chassis is being sent for testing..." << endl << endl;
    simCar->testChassis();
}

void ChassisDepartment::analyze()
{
    cout << "The Chassis has been analyzed and is clear for racing!" << endl << endl;
}