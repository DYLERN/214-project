#pragma once
#include "../pch.h"
#include "../core/FormulaOneCar.h"
#include "results.h"
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
    void update();
    void testTimes();
    void practice();
};