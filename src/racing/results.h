#pragma once
#include <iostream>
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