#include "LogisticsManager.h"

LogisticsManager::LogisticsManager(std::shared_ptr<Plane> plane, const std::vector<std::shared_ptr<Truck>> &trucks)
{
    fleet = std::make_shared<Fleet>();
    fleet->setPlane(plane);
    for (auto it = trucks.cbegin(); it != trucks.cend(); it++)
    {
        fleet->addTruck(*it);
    }
}

void LogisticsManager::addTruck(std::shared_ptr<Truck> truck)
{
    fleet->addTruck(truck);
}

void LogisticsManager::setDestination(std::shared_ptr<Destination> destination, std::string port)
{
    if (destination->type == INTERNATIONAL)
    {
        if(port == "")
        {
            throw "Port required for international shipping.";
        }
        transportStrategy = std::make_shared<InternationalTransport>(destination->name, port);
    }
    else
    {
        transportStrategy = std::make_shared<EuropeanTransport>(destination->name);
    }
}

void LogisticsManager::addCar(std::shared_ptr<FormulaOneCar> car)
{
    fleet->loadPlane(car);
}

void LogisticsManager::addInventoryItem(std::shared_ptr<InventoryItem> item)
{
    if (item->getVolume() > Container::STANDARD_INNER_VOLUME || item->getWeight() > Container::STANDARD_WEIGHT_LIMIT)
    {
        std::cout << item->getName() << " cannot fit inside a container." << std::endl;
        return;
    }

    if (std::shared_ptr<Equipment> equipmentItem = std::dynamic_pointer_cast<Equipment>(item))
    {
        for (auto it = equipmentContainers.begin(); it != equipmentContainers.end(); it++)
        {
            if ((*it)->addItem(equipmentItem))
            {
                std::cout << equipmentItem->getName() << " was packed into one of the containers." << std::endl;
                return;
            }
        }
        // If code reaches here, it was not added, and a container must be created.
        auto container = std::make_shared<EquipmentContainer>();
        container->addItem(equipmentItem);
        std::cout << equipmentItem->getName() << " was packed into one of the containers." << std::endl;
        equipmentContainers.push_back(container);
    }
    else if (std::shared_ptr<Part> part = std::dynamic_pointer_cast<Part>(item))
    {
        for (auto it = partsContainers.begin(); it != partsContainers.end(); it++)
        {
            if ((*it)->addItem(part))
            {
                std::cout << part->getName() << " was packed into one of the containers." << std::endl;
                return;
            }
        }
        // If code reaches here, it was not added, and a container must be created.
        auto container = std::make_shared<PartsContainer>();
        container->addItem(part);
        std::cout << part->getName() << " was packed into one of the containers." << std::endl;
        partsContainers.push_back(container);
    }
}

void LogisticsManager::dispatch()
{
    transportStrategy->transport(fleet);
}

void LogisticsManager::joinAll()
{
    fleet->joinAll();
}