#include "Container.h"

Container::Container():
    weightLimit(Container::STANDARD_WEIGHT_LIMIT),
    innerVolume(Container::STANDARD_INNER_VOLUME)
{
}

double Container::currentWeight()
{
    double returnVal = 0.0;
    for(auto it = contents.cbegin(); it != contents.cend(); it++)
    {
        returnVal += (*it)->getWeight();
    }
    return returnVal;
}

double Container::currentVolume()
{
    double returnVal = 0.0;
    for(auto it = contents.cbegin(); it != contents.cend(); it++)
    {
        returnVal += (*it)->getVolume();
    }
    return returnVal;
}

bool Container::addItem(std::shared_ptr<InventoryItem> item)
{
    if(currentVolume() + item->getVolume() <= innerVolume && currentWeight() + item->getWeight() <= weightLimit) {
       contents.push_back(item);
       return true;
    } else {
        return false;
    }
}


std::string Container::generateManifest()
{
    std::string manifest;
    int index = 0;
    for(auto it = contents.cbegin(); it != contents.cend(); it++)
    {
        manifest += (*it)->describe(true, index++);
    }
    return manifest;
}

EquipmentContainer::EquipmentContainer() : Container()
{
}

bool EquipmentContainer::addItem(std::shared_ptr<Equipment> item)
{
    return Container::addItem(item);
}

PartsContainer::PartsContainer() : Container()
{
}

bool PartsContainer::addItem(std::shared_ptr<Part> item)
{
    return Container::addItem(item);
}