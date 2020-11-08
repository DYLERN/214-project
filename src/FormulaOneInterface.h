#ifndef __FORMULAONEINTERFACE_H__
#define __FORMULAONEINTERFACE_H__

#include "pch.h"

#include "core/FormulaOneCar.h"
#include "engineering/CurrentCarConstructor.h"
#include "engineering/Engineer.h"

#include "testing/windTunnelTest.h"
#include "testing/reportCareTaker.h"

#include "logistics/LogisticsManager.h"

#include "racing-strategy/Context.h"
#include "racing-strategy/Medium.h"
#include "racing-strategy/Soft.h"
#include "racing-strategy/TyreBlast.h"
#include "racing-strategy/Hard.h"
#include "racing-strategy/HighTemperature.h"

#include "racing/Race.h"

class FormulaOneInterface
{
private:
    static constexpr int numCars = 10;
    std::shared_ptr<FormulaOneCar> car;
    std::array<std::shared_ptr<FormulaOneCar>, numCars> allCars;

public:
    void demoBuildAndTest();
    void demoLogistics();
    void demoRacingStrategy();
    void demoRacing();
};

#endif // __FORMULAONEINTERFACE_H__
