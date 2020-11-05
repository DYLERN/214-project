#ifndef __TYREDEPARTMENT_H__
#define __TYREDEPARTMENT_H__

#include "EngineeringDepartment.h"
#include "Tyre.h"

class TyreDepartment : public EngineeringDepartment
{
    private:
        Tyre* tyre;

    public:
        TyreDepartment(std::string, std::string, float, std::string, float, float, float);
        ~TyreDepartment();
        Tyre* develop();
        void research();
        void test();
        void analyze();
};

#endif