#include "results.h"

results::results(std::string raceName,std::string driverName,std::string team,std::string location,std::string carModel,int pos,int place,float time){

    this->raceName = raceName;
    this->driverName = driverName;
    this->team = team;
    this->location = location;
    this->carModel = carModel;
    positionInGrid = pos;
    finalPlace = place;
    timeTaken = time;

}

void results::print(){
    


}

int results::getPlace(){

    return finalPlace;

}