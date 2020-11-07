#pragma once
#include <string>
using namespace std;
class RaceState{
private:
    string day;
public:
    virtual void handleChange()=0;
    virtual RaceState* changeState(bool result)=0;
    string getDay();

protected:
    RaceState(string);
};