#include "pch.h"

#include <random>

#include "core/FormulaOneCar.h"
#include "logistics/InventoryItem.h"
#include "logistics/Container.h"
#include "logistics/LogisticsManager.h"
#include "engineering/CurrentCarConstructor.h"
#include "engineering/Engineer.h"

int main() {
    std::srand(std::time(0));
    auto plane = std::make_shared<Plane>("ADZ-903");
    std::vector<std::shared_ptr<Truck> > trucks = {std::make_shared<Truck>("BG 64 UI"), std::make_shared<Truck>("WD 31 PD")};

    CurrentCarConstructor constructor;
    Engineer engineer(&constructor);

    auto car = std::shared_ptr<FormulaOneCar>(engineer.constructCar());

    std::shared_ptr<InventoryItem> drill = std::make_shared<Equipment>("Drill", 10000, 5);
    std::shared_ptr<InventoryItem> wrench = std::make_shared<Equipment>("Wrench", 10000, 6);
    std::shared_ptr<InventoryItem> jack = std::make_shared<Equipment>("Jack", 5000, 10);

    LogisticsManager manager(plane, trucks);
    manager.setDestination(std::make_shared<Destination>("Spain", EUROPEAN));
    manager.addCar(car);
    manager.addInventoryItem(drill);
    manager.addInventoryItem(wrench);
    manager.addInventoryItem(jack);
    manager.dispatch();

    // manager.joinAll();
    
    return 0;
}