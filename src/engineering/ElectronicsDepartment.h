#ifndef __ELECTRONICSDEPARTMENT_H__
#define __ELECTRONICSDEPARTMENT_H__

#include "EngineeringDepartment.h"
#include "../core/Electronics.h"

class ElectronicsDepartment : public EngineeringDepartment
{
    private:
        Electronics* electronics;

    public:
        ElectronicsDepartment(std::string, std::string, float, std::string, float, float, float, float);
        ~ElectronicsDepartment();
        Electronics* develop();
        void research();
        void test();
        void analyze();
};

#endif