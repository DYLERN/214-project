#ifndef __ENGINEERINGDEPARTMENT_H__
#define __ENGINEERINGDEPARTMENT_H__

#include "../testing/SimulatedCar.h"
#include "../core/RacingCarPart.h"

class EngineeringDepartment
{
    protected:
        SimulatedCar* simCar;
    
    public:
        EngineeringDepartment(){};
        ~EngineeringDepartment(){};
        virtual RacingCarPart* develop() = 0;
        virtual void research() = 0;
        virtual void test() = 0;
        virtual void analyze() = 0;
};

#endif