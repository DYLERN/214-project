#pragma once
#include "RaceState.h"
#include "RaceTeam.h"
#include <string>
#include <vector>
#include <iostream>
#include "../core/FormulaOneCar.h"
#include "results.h"
using namespace std;
class Race{
private:
    FormulaOneCar* carList[10];
    int times[10];
    RaceState* state;
    //RaceTeam* observerList;
    string raceName;
    void sort();
public:
    Race();
    ~Race();
    results commenceRace();
    void changeToQualify();//decrease
    void changeToRacing();//increase
    void testTimes();
    //string getDay();
    void setState(RaceState* state);
    void setTournamentName(string raceName);
};