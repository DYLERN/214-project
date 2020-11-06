#ifndef __TRANSPORTVEHICLE_H__
#define __TRANSPORTVEHICLE_H__

#include "../pch.h"

#include <random>

#include "../core/FormulaOneCar.h"
#include "Container.h"

enum VehicleEvent
{
    DEPARTED,
    DESTINATION_REACHED,
    DELAYED
};

class TransportVehicle : public std::enable_shared_from_this<TransportVehicle>
{
private:
    std::list<std::function<void(std::shared_ptr<TransportVehicle>, VehicleEvent)> > observers;
    std::string uniqueId;

protected:
    std::shared_ptr<std::thread> lifecycle;

public:
    TransportVehicle(std::string uniqueId);
    virtual ~TransportVehicle();

    void observe(std::function<void(std::shared_ptr<TransportVehicle>, VehicleEvent)> callback);
    void notify(VehicleEvent);
    virtual void dispatch(std::string destination) = 0;

    std::string getIdentifier();
    std::string getUniqueId();
    virtual std::string getTypeName() = 0;

    void join();
};

class Plane : public TransportVehicle
{
private:
    std::shared_ptr<FormulaOneCar> car;

public:
    Plane(std::string callSign);
    void load(std::shared_ptr<FormulaOneCar> car);
    std::shared_ptr<FormulaOneCar> unload();
    void dispatch(std::string destination);
    std::string getTypeName();
};

class Truck : public TransportVehicle
{
private:
    std::shared_ptr<Container> container;

public:
    Truck(std::string numberPlate);
    bool isLaden();
    void load(std::shared_ptr<Container> container);
    std::shared_ptr<Container> unload();
    void dispatch(std::string destination);
    std::string getTypeName();
};

#endif // __TRANSPORTVEHICLE_H__
