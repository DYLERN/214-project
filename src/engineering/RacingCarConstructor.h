#ifndef __RACINGCARCONSTRUCTOR_H__
#define __RACINGCARCONSTRUCTOR_H__

#include "AerodynamicsDepartment.h"
#include "ChassisDepartment.h"
#include "TyreDepartment.h"
#include "EngineDepartment.h"
#include "ElectronicsDepartment.h"
#include "../core/FormulaOneCar.h"

class RacingCarConstructor
{
    private:
    float getRand();

    protected:
        AerodynamicsDepartment* aeroDepartment;
        ChassisDepartment* chassisDepartment;
        TyreDepartment* tyreDepartment;
        EngineDepartment* engineDepartment;
        ElectronicsDepartment* electronicsDepartment;

    public:
        RacingCarConstructor();
        virtual ~RacingCarConstructor();
        virtual void addAerodynamics() = 0;
        virtual void addChassis() = 0;
        virtual void addTyres() = 0;
        virtual void addEngine() = 0;
        virtual void addElectronics() = 0;
        virtual FormulaOneCar* getCar() = 0;
};

#endif