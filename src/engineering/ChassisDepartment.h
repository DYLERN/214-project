#ifndef __CHASSISDEPARTMENT_H__
#define __CHASSISDEPARTMENT_H__

#include "EngineeringDepartment.h"
#include "../core/Chassis.h"

class ChassisDepartment : public EngineeringDepartment
{
    private:
        Chassis* chassis;

    public:
        ChassisDepartment(std::string, std::string, float, std::string, float, float);
        ~ChassisDepartment();
        Chassis* develop();
        void research();
        void test();
        void analyze();
};

#endif