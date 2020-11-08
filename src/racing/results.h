#pragma once
#include <iostream>

/**
 * Class is used as a struct mostly to store all the results from the race and then a print() method to format the results nicely to display.
 * @author Joshua Reddy
 */
class results{
  private:
  std::string raceName;
  std::string driverName;
  std::string team;
  std::string location;
  std::string carModel;
  int positionInGrid;
  int finalPlace;
  float timeTaken;
  public:
  results(std::string,std::string,std::string,std::string,std::string,int,int,float);
  void print();
  int getPlace();
  void setTime(int);
};