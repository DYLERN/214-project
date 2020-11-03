#include "FormulaOneCar.h"

FormulaOneCar::FormulaOneCar(Engine *engine, Chassis *chassis, std::array<Tyre *, 4> tyres): 
    engine(engine),
    chassis(chassis),
    tyres({
        std::shared_ptr<Tyre>(tyres[0]),
        std::shared_ptr<Tyre>(tyres[1]),
        std::shared_ptr<Tyre>(tyres[2]),
        std::shared_ptr<Tyre>(tyres[3])
    })
{
}

std::shared_ptr<Engine> FormulaOneCar::getEngine() { return engine; }

void FormulaOneCar::setEngine(Engine* engine) { this->engine = std::shared_ptr<Engine>(engine); }

std::shared_ptr<Chassis> FormulaOneCar::getChassis() { return chassis; }

void FormulaOneCar::setChassis(Chassis* chassis) { this->chassis = std::shared_ptr<Chassis>(chassis); }

std::array<std::shared_ptr<Tyre>, 4> FormulaOneCar::getTyres() { return tyres; }

std::shared_ptr<Tyre> FormulaOneCar::getTyre(int index) { return tyres.at(index); }

void FormulaOneCar::setTyre(int index, Tyre* tyre) { tyres[index] = std::shared_ptr<Tyre>(tyre); }