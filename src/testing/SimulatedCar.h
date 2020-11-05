#ifndef __SIMULATEDCAR_H__
#define __SIMULATEDCAR_H__

#include <string>
#include "virtualTyre.h"
#include "virtualChassis.h"
#include "virtualEngine.h"
#include "virtualAerodynamics.h"
#include "virtualElectronics.h"


class SimulatedCar{

private:
virtualChassis* chassis;
virtualTyre* tyres;
virtualEngine* engine;
virtualAerodynamics* aero;
virtualElectronics* electronics;

public:
SimulatedCar();
void setChassis(virtualChassis*);
void setTyres(virtualTyre*);
void setEngine(virtualEngine*);
void setAero(virtualAerodynamics*);
void setElectronics(virtualElectronics*);
void setElectronics();

void testCar(float, float, std::string);
void testChassis();
void testTyre();
void testEngine();
void testAero();
void testElectronics();


};

#endif // __SIMULATEDCAR_H__


