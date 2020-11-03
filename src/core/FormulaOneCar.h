#ifndef __FORMULAONECAR_H__
#define __FORMULAONECAR_H__

#include <memory>
#include <array>
#include <algorithm>

#include "Engine.h"
#include "Chassis.h"
#include "Tyre.h"

/**
 * @author Dylan Pfab
 * @version 1.0
 */
class FormulaOneCar {
private:
    std::shared_ptr<Engine> engine;
    std::shared_ptr<Chassis> chassis;
    std::array<std::shared_ptr<Tyre>, 4> tyres;

public:
    FormulaOneCar(Engine*, Chassis*, std::array<Tyre*, 4>);

    std::shared_ptr<Engine> getEngine();
    void setEngine(Engine*);

    std::shared_ptr<Chassis> getChassis();
    void setChassis(Chassis*);

    std::array<std::shared_ptr<Tyre>, 4> getTyres();
    std::shared_ptr<Tyre> getTyre(int);
    void setTyre(int, Tyre*);
};

#endif // __FORMULAONECAR_H__
