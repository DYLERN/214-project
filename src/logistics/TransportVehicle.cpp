#include "TransportVehicle.h"

TransportVehicle::TransportVehicle(std::string uniqueId) : uniqueId(uniqueId)
{
}

TransportVehicle::~TransportVehicle()
{
}

void TransportVehicle::observe(std::function<void(std::shared_ptr<TransportVehicle>, VehicleEvent)> callback)
{
    observers.push_front(callback);
}

void TransportVehicle::notify(VehicleEvent event)
{
    for (auto it = observers.rbegin(); it != observers.rend(); it++)
    {
        (*it)(shared_from_this(), event);
    }
}

std::string TransportVehicle::getUniqueId()
{
    return uniqueId;
}

std::string TransportVehicle::getIdentifier()
{
    return getTypeName() + " - " + getUniqueId();
}

void TransportVehicle::join()
{
    if(lifecycle)
    {
        lifecycle->join();
    }
}

Plane::Plane(std::string callSign) : TransportVehicle(callSign)
{
}

void Plane::load(std::shared_ptr<FormulaOneCar> car)
{
    this->car = car;
}

std::shared_ptr<FormulaOneCar> Plane::unload()
{
    return car;
}

void Plane::dispatch(std::string destination)
{
    auto fun = [&]() -> void {
        notify(DEPARTED);
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        float rng = (std::rand() % 10000) / 100.f;
        if (rng < 20)
        {
            notify(DELAYED);
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        }
        notify(DESTINATION_REACHED);
    };

    lifecycle = std::make_shared<std::thread>(fun);
}

std::string Plane::getTypeName()
{
    return "Plane";
}

Truck::Truck(std::string numberPlate) : TransportVehicle(numberPlate)
{
}

bool Truck::isLaden()
{
    return container != nullptr;
}

void Truck::load(std::shared_ptr<Container> container)
{
    this->container = container;
}

std::shared_ptr<Container> Truck::unload()
{
    return container;
}

void Truck::dispatch(std::string destination)
{
    auto fun = [&]() -> void {
        notify(DEPARTED);
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        float rng = (std::rand() % 10000) / 100.f;
        if (rng < 40)
        {
            notify(DELAYED);
            std::this_thread::sleep_for(std::chrono::milliseconds(2000));
        }
        notify(DESTINATION_REACHED);
    };
    
    lifecycle = std::make_shared<std::thread>(fun);
}

std::string Truck::getTypeName()
{
    return "Truck";
}