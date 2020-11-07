#ifndef __DESTINATION_H__
#define __DESTINATION_H__

#include "../pch.h"

enum DestinationType
{
    EUROPEAN,
    INTERNATIONAL
};

/**
 * Wrapper for a destination. Includes the destination name, and the type (European/International)
 * @author Dylan Pfab
 */
struct Destination
{
    std::string name;
    DestinationType type;
    Destination(std::string name, DestinationType type) : name(name), type(type) {}
};

#endif // __DESTINATION_H__
