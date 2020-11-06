#ifndef __DESTINATION_H__
#define __DESTINATION_H__

#include "../pch.h"

enum DestinationType
{
    EUROPEAN,
    INTERNATIONAL
};

struct Destination
{
    std::string name;
    DestinationType type;
    Destination(std::string name, DestinationType type) : name(name), type(type) {}
};

#endif // __DESTINATION_H__
