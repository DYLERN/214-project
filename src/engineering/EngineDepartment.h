#ifndef __ENGINEDEPARTMENT_H__
#define __ENGINEDEPARTMENT_H__

#include "EngineeringDepartment.h"
#include "Engine.h"

class EngineDepartment : public EngineeringDepartment
{
    private:
        Engine* engine;

    public:
        EngineDepartment(std::string, std::string, float, std::string, float, float);
        ~EngineDepartment();
        Engine* develop();
        void research();
        void test();
        void analyze();
};

#endif