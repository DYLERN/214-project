#ifndef __CONTAINER_H__
#define __CONTAINER_H__

#include "../pch.h"

#include "InventoryItem.h"


/**
 * Base class to represent a container of InventoryItems
 * @author Dylan Pfab
 * @version 1.0
 * @since 04-11-2020
 */
class Container {
private:
    double weightLimit;
    double innerVolume;

    double currentWeight();
    double currentVolume();

protected:
    Container();
    std::vector<std::shared_ptr<InventoryItem> > contents;
    bool addItem(std::shared_ptr<InventoryItem> item);

public:
    static constexpr double STANDARD_WEIGHT_LIMIT = 25000;
    static constexpr double STANDARD_INNER_VOLUME = 33.2;

    /**
     * Generates a manifest of the container's contents.
     * @return The container manifest as a std::string
     */
    std::string generateManifest();
};

/**
 * A container of Equipment. 
 * The container owns the items within it until they are unloaded, and is responsible for their destruction.
 * @author Dylan Pfab
 * @version 1.0
 * @since 04-11-2020
 */
class EquipmentContainer : public Container {
public:
    EquipmentContainer();

    /**
     * Adds an Equipment item to the container. 
     * If the item was successfully added, the container will take ownership of the item.
     * @param item The item to add
     * @return true if the item was added, false otherwise
     */
    bool addItem(std::shared_ptr<Equipment> item);
};

/**
 * A container of Parts. 
 * The container owns the items within it until they are unloaded, and is responsible for their destruction.
 * @author Dylan Pfab
 * @version 1.0
 * @since 04-11-2020
 */
class PartsContainer : public Container {
public:
    PartsContainer();

    /**
     * Adds a Part item to the container. 
     * If the item was successfully added, the container will take ownership of the item.
     * @param item The item to add
     * @return true if the item was added, false otherwise
     */
    bool addItem(std::shared_ptr<Part> item);
};

#endif // __CONTAINER_H__
