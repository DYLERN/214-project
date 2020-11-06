#include "InventoryItem.h"

#include "TransportVehicle.h"

InventoryItem::InventoryItem(std::string name, double weight, double volume):
    name(name),
    weight(weight),
    volume(volume)
{
}

InventoryItem::~InventoryItem()
{
}

std::string InventoryItem::getName()
{
    return name;
}

double InventoryItem::getWeight()
{
    return weight;
}

double InventoryItem::getVolume()
{
    return volume;
}

Equipment::Equipment(std::string name, double weight, double volume) : InventoryItem(name, weight, volume)
{
}

std::string Equipment::describe(bool showIndex, int index)
{
    std::stringstream ss;
    ss << "Equipment: " << (showIndex ? std::to_string(index) : "") << "\n";
    ss << "\tName: " << name << "\n";
    ss << "\tWeight: " << std::fixed << std::setprecision(2) << weight << " kg\n";
    ss << "\tVolume: " << std::fixed << std::setprecision(2) << volume << " m3\n";
    return ss.str();
}

Part::Part(std::string name, double weight, double volume) : InventoryItem(name, weight, volume)
{
}

std::string Part::describe(bool showIndex, int index)
{
    std::stringstream ss;
    ss << "Part: " << (showIndex ? std::to_string(index) : "") << "\n";
    ss << "\tName: " << name << "\n";
    ss << "\tWeight: " << std::fixed << std::setprecision(2) << weight << " kg\n";
    ss << "\tVolume: " << std::fixed << std::setprecision(2) << volume << " m3\n";
    return ss.str();
}