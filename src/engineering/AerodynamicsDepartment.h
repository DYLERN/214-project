#ifndef __AERODYNAMICSDEPARTMENT_H__
#define __AERODYNAMICSDEPARTMENT_H__

#include "EngineeringDepartment.h"
#include "../core/Aerodynamics.h"
#include "../pch.h"

class AerodynamicsDepartment : public EngineeringDepartment
{
    private:
    Aerodynamics* aerodynamics;

    public:
        AerodynamicsDepartment(std::string, std::string, float, std::string, float, float, float);
        ~AerodynamicsDepartment();
        Aerodynamics* develop();
        void research();
        void test();
        void analyze();
};

#endif