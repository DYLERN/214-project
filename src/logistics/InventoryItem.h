#ifndef __INVENTORYITEM_H__
#define __INVENTORYITEM_H__

#include "../pch.h"

#include "../core/RacingCarPart.h"

#include <sstream>
#include <iomanip>

/**
 * Base class to represent any item that the Formula One team might have in inventory.
 * @author Dylan Pfab
 * @version 1.0
 * @since 03-11-2020
 */
class InventoryItem {
protected:
    std::string name;
    double weight;
    double volume;

public:
    InventoryItem(std::string name, double weight, double volume);
    virtual ~InventoryItem();

    /**
     * Describes the InventoryItem in detail. Shows the type, name, weight, and volume.
     * @param showIndex if true, the description will include an index
     * @param index the index to show if showIndex is true
     * @return The description of the InventoryItem
     */
    virtual std::string describe(bool showIndex, int index) = 0;
    std::string getName();
    double getWeight();
    double getVolume();
};

/**
 * @author Dylan Pfab
 * @version 1.0
 * @since 04-11-2020
 */
class Equipment : public InventoryItem {
public:
    Equipment(std::string name, double weight, double volume);
    std::string describe(bool showIndex, int index);
};

/**
 * @author Dylan Pfab
 * @version 1.0
 * @since 04-11-2020
 */
class Part : public InventoryItem {
private:
    std::shared_ptr<RacingCarPart> adaptee;

public:
    Part(std::string name, double weight, double volume);
    Part(std::shared_ptr<RacingCarPart> part);
    std::string describe(bool showIndex, int index);
};

#endif // __INVENTORYITEM_H__
