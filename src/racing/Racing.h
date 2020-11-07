#pragma once
#include "RaceState.h"
#include <iostream>
#include <string>
using namespace std;
class Racing:public RaceState{
private:

protected:
int finishPos;

public:
    Racing();
    void handleChange();
    RaceState* changeState(bool result);
    void setFinishPos(int finishPos);
    int getFinishPos();
};