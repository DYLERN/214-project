#ifndef __FLEET_H__
#define __FLEET_H__

#include "../pch.h"

#include "TransportVehicle.h"

class Fleet
{
private:
    std::vector<std::shared_ptr<Truck> > trucks;
    std::shared_ptr<Plane> plane;

public:
    void dispatchTrucks(std::string destination);
    void dispatchPlane(std::string destination);

    void addTruck(std::shared_ptr<Truck> t);
    void setPlane(std::shared_ptr<Plane> p);

    std::vector<std::shared_ptr<Container> >& loadTrucks(std::vector<std::shared_ptr<Container> >& containers);
    void loadPlane(std::shared_ptr<FormulaOneCar> car);

    void observeVehicles(std::function<void(std::shared_ptr<TransportVehicle>, VehicleEvent)> callback);

    void joinAll();
};

#endif // __FLEET_H__
