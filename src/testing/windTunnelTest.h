#ifndef __WINDTUNNELTEST_H__
#define __WINDTUNNELTEST_H__

#include "../core/FormulaOneCar.h"
#include "startCar.h"
#include "stopCar.h"
#include "increaseThrottle.h"
#include "accelerate.h"
#include "decreaseThrottle.h"
#include "gearUp.h"
#include "gearDown.h"
#include "report.h"

/**
 * Invoker class of Command pattern and Memento Pattern
 * Class that is used to test ForumlaOneCar in a wind tunnel
 * Class holds instances of all Concrete Commands
 * @author Connor Mayston
 */
class windTunnelTest{

private:
int numTickets = 4;
FormulaOneCar* testCar;
startCar* start = new startCar();
stopCar* stop = new stopCar();
increaseThrottle* increase = new increaseThrottle();
accelerate* acc = new accelerate();
decreaseThrottle* decrease = new decreaseThrottle();
gearUp* up = new gearUp();
gearDown* down = new gearDown();

public:
windTunnelTest(FormulaOneCar*);
~windTunnelTest();
report testBreaking();
report testAcceleration();
void setFormulaOneCar(FormulaOneCar*);

};

#endif // __WINDTUNNELTEST_H__