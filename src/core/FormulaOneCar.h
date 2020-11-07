#ifndef FORMULAONECAR_H
#define FORMULAONECAR_H

#include "Chassis.h"
#include "Aerodynamics.h"
#include "Engine.h"
#include "Electronics.h"
#include "Tyre.h"

class FormulaOneCar
{
    protected:
        Chassis* chassis;
        Aerodynamics* aerodynamics;
        Engine* engine;
        Electronics* electronics;
        Tyre* tyres;

    public:
        int points = 0;
        FormulaOneCar();
        ~FormulaOneCar();
        Chassis* getChassis();
        void setChassis(Chassis*);
        Aerodynamics* getAerodynamics();
        void setAerodynamics(Aerodynamics*);
        Engine* getEngine();
        void setEngine(Engine*);
        Electronics* getElectronics();
        void setElectronics(Electronics*);
        Tyre* getTyres();
        void setTyres(Tyre*);
};

#endif