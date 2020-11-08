#include "TransportStrategy.h"

TransportStrategy::TransportStrategy(std::string destination) : destination(destination)
{
}

EuropeanTransport::EuropeanTransport(std::string destination) : TransportStrategy(destination)
{
}

void EuropeanTransport::transport(std::shared_ptr<Fleet> fleet)
{
    fleet->observeVehicles(
        [&](std::shared_ptr<TransportVehicle> vehicle, VehicleEvent event) -> void {
            lock.lock();
            switch(event)
            {
                case DEPARTED:
                    std::cout << vehicle->getIdentifier() << " has departed" << std::endl;
                    break;
                case DELAYED:
                    std::cout << vehicle->getIdentifier() << " is experiencing a delay" << std::endl;
                    break;
                case DESTINATION_REACHED:
                    std::cout << vehicle->getIdentifier() << " has arrived at " << destination << std::endl;
                    break;
            }
            lock.unlock();
        }
    );
    
    fleet->dispatchPlane(destination);
    fleet->dispatchTrucks(destination);
}

InternationalTransport::InternationalTransport(std::string destination, std::string port) : TransportStrategy(destination), port(port)
{
}

void InternationalTransport::transport(std::shared_ptr<Fleet> fleet)
{
    fleet->observeVehicles(
        [&](std::shared_ptr<TransportVehicle> vehicle, VehicleEvent event) -> void {
            lock.lock();
            switch(event)
            {
                case DEPARTED:
                    std::cout << vehicle->getIdentifier() << " has departed" << std::endl;
                    break;
                case DELAYED:
                    std::cout << vehicle->getIdentifier() << " is experiencing a delay" << std::endl;
                    break;
                case DESTINATION_REACHED:
                    if(vehicle->getTypeName() == "Truck")
                    {
                        std::cout << vehicle->getIdentifier() << " has arrived at " << port << " Port" << std::endl;
                        std::cout << "The ship will carry the containers to " << destination << std::endl;
                    }
                    else
                    {
                        std::cout << vehicle->getIdentifier() << " has arrived at " << destination << std::endl;
                    }
                    
                    break;
            }
            lock.unlock();
        }
    );
    
    fleet->dispatchPlane(destination);
    fleet->dispatchTrucks(port);
}