#ifndef __WINDTUNNELTEST_H__
#define __WINDTUNNELTEST_H__

#include "core/FormulaOneCar.h"
#include "startCar.h"
#include "stopCar.h"
#include "increaseThrottle.h"
#include "accelerate.h"
#include "decreaseThrottle.h"
#include "gearUp.h"
#include "gearDown.h"

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
void testBreaking();
void testAcceleration();
void setFormulaOneCar(FormulaOneCar*);

};

#endif // __WINDTUNNELTEST_H__