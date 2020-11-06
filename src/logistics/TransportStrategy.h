#ifndef __TRANSPORTSTRATEGY_H__
#define __TRANSPORTSTRATEGY_H__

#include "../pch.h"

#include "Container.h"
#include "../core/FormulaOneCar.h"
#include "Destination.h"
#include "Fleet.h"

class TransportStrategy
{
protected:
    std::string destination;
    std::mutex lock;

public:
    TransportStrategy(std::string destination);
    virtual void transport(std::shared_ptr<Fleet> fleet) = 0;
};

class EuropeanTransport : public TransportStrategy
{
public:
    EuropeanTransport(std::string destination);
    void transport(std::shared_ptr<Fleet> fleet);
};

class InternationalTransport : public TransportStrategy
{
private:
    std::string port;
public:
    InternationalTransport(std::string destination, std::string port);
    void transport(std::shared_ptr<Fleet> fleet);
};

#endif // __TRANSPORTSTRATEGY_H__
