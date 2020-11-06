#include "Fleet.h"

void Fleet::dispatchTrucks(std::string destination)
{
    for(auto it = trucks.begin(); it != trucks.end(); it++)
    {
        (*it)->dispatch(destination);
    }
}

void Fleet::dispatchPlane(std::string destination)
{
    plane->dispatch(destination);
}

void Fleet::addTruck(std::shared_ptr<Truck> t)
{
    trucks.push_back(t);
}

void Fleet::setPlane(std::shared_ptr<Plane> p)
{
    plane = p;
}

std::vector<std::shared_ptr<Container> >& Fleet::loadTrucks(std::vector<std::shared_ptr<Container> >& containers)
{
    int numEmptyTrucks = 0;
    for(auto it = trucks.cbegin(); it != trucks.cend(); it++)
    {
        if(!(*it)->isLaden()) { numEmptyTrucks++; }
    }

    while(numEmptyTrucks > 0)
    {
        std::shared_ptr<Truck> emptyTruck = *(std::find_if(trucks.begin(), trucks.end(), [](const std::shared_ptr<Truck>& t) -> bool { return !t->isLaden(); }));
        std::shared_ptr<Container> container = containers.back();
        emptyTruck->load(container);
        containers.pop_back();
    }

    return containers;
}

void Fleet::loadPlane(std::shared_ptr<FormulaOneCar> car)
{
    plane->load(car);
}

void Fleet::observeVehicles(std::function<void(std::shared_ptr<TransportVehicle>, VehicleEvent)> callback)
{
    plane->observe(callback);
    for(auto it = trucks.begin(); it != trucks.end(); it++)
    {
        (*it)->observe(callback);
    }
}

void Fleet::joinAll()
{
    plane->join();
    for(auto it = trucks.begin(); it != trucks.end(); it++)
    {
        (*it)->join();
    }
}