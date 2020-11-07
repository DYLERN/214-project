#ifndef __LOGISTICSMANAGER_H__
#define __LOGISTICSMANAGER_H__

#include "../pch.h"

#include "../core/FormulaOneCar.h"
#include "InventoryItem.h"
#include "Fleet.h"
#include "TransportStrategy.h"
#include "Destination.h"

/**
 * Logistics Manager class. Has a reference to the fleet, and a transport strategy.
 * @author Dylan Pfab
 */
class LogisticsManager
{
private:
    std::shared_ptr<Fleet> fleet;
    std::shared_ptr<TransportStrategy> transportStrategy;

    std::vector<std::shared_ptr<EquipmentContainer> > equipmentContainers;
    std::vector<std::shared_ptr<PartsContainer> > partsContainers;

public:
    LogisticsManager(std::shared_ptr<Plane> plane, const std::vector<std::shared_ptr<Truck> >& trucks);

    void addTruck(std::shared_ptr<Truck> truck);

    void setDestination(std::shared_ptr<Destination> destination, std::string port = "");
    void addCar(std::shared_ptr<FormulaOneCar> car);
    void addInventoryItem(std::shared_ptr<InventoryItem> inventoryItem);

    /**
     * Dispatches the fleet to the race location.
     */
    void dispatch();
    
private:
    void joinAll();
};

#endif // __LOGISTICSMANAGER_H__
