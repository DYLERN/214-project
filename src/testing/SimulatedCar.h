#ifndef __SIMULATEDCAR_H__
#define __SIMULATEDCAR_H__

#include <string>
#include "reportCareTaker.h"
#include "virtualTyre.h"
#include "virtualChassis.h"
#include "virtualEngine.h"
#include "virtualAerodynamics.h"
#include "virtualElectronics.h"
#include "report.h"


class SimulatedCar{

private:
reportCareTaker* careTaker;
virtualChassis* chassis;
virtualTyre* tyres;
virtualEngine* engine;
virtualAerodynamics* aero;
virtualElectronics* electronics;

public:
SimulatedCar();
~SimulatedCar();
void setChassis(virtualChassis*);
void setTyres(virtualTyre*);
void setEngine(virtualEngine*);
void setAero(virtualAerodynamics*);
void setElectronics(virtualElectronics*);
void setElectronics();

report testCar(float, float, std::string);
void testChassis();
void testTyre();
void testEngine();
void testAero();
void testElectronics();


};

#endif // __SIMULATEDCAR_H__


