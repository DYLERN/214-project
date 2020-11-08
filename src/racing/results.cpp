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
    
    std::string sentence = "Details about competitor:\nRace Name: " + raceName + "\nLocation: " + location + "\nPosition in race: " + std::to_string(finalPlace) + "\nDriver Name:" +
    driverName + "\nCar Model: " + carModel + "\nTeam Name: " + team + "\nStarting position in grid: " + std::to_string(positionInGrid) + "\nTime Taken to complete race: " +
    std::to_string(timeTaken) + "\n";

    std::cout << sentence << std::endl;

}

int results::getPlace(){

    return finalPlace;

}

void results::setTime(int time){

    timeTaken = time;

}