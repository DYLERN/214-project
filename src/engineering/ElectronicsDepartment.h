#ifndef __ELECTRONICSDEPARTMENT_H__
#define __ELECTRONICSDEPARTMENT_H__

#include "EngineeringDepartment.h"
#include "Electronics.h"

class ElectonicsDepartment : public EngineeringDepartment
{
    private:
        Electronics* electronics;

    public:
        ElectonicsDepartment(std::string, std::string, float, std::string, float, float, float, float);
        ~ElectonicsDepartment();
        Electronics* develop();
        void research();
        void test();
        void analyze();
};

#endif