#pragma once
#include "../pch.h"
#include "../core/FormulaOneCar.h"
#include "results.h"

/**
 * Class is used to store all the cars and uses 2 methods to either get test times or actually race the cars against eachother.
 * @author Joshua Reddy
 */
class Race{
private:
    FormulaOneCar* carList[10];
    int times[10];
    std::string location;
    std::string raceName;
    void update();
public:
    Race(FormulaOneCar**, std::string, std::string);
    ~Race();
    std::array<std::shared_ptr<results>,10> commenceRace();
    void testTimes();
    void practice();
};