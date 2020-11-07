#pragma once
#include "RaceState.h"
#include <iostream>
#include <string>
using namespace std;
class Qualify:public RaceState{
private:

protected:
    int gridPos;

public:
    Qualify();
    void handleChange();
    RaceState* changeState(bool result);
    void setGridPos(int gridPos);
    int getGridPos();
};