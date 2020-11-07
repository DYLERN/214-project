#ifndef __SIMULATEDCAR_H__
#define __SIMULATEDCAR_H__

#include <string>
#include "virtualTyre.h"
#include "virtualChassis.h"
#include "virtualEngine.h"
#include "virtualAerodynamics.h"
#include "virtualElectronics.h"
#include "report.h"

/**
 * Class acts as invoker in Memento Pattern
 * Class contains all virtual parts nessecary for a SimulatedCar to run.
 * There are seperate methods to test every part of the car individually in the simulation
 * There is a method to test the entire car at once as well.
 * @author Connor Mayston
 */
class SimulatedCar{

private:
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

report testCar(float, float, std::string);
void testChassis();
void testTyre();
void testEngine();
void testAero();
void testElectronics();


};

#endif // __SIMULATEDCAR_H__


