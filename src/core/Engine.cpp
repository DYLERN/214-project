#include "Engine.h"

Engine::Engine(std::string type, std::string mat, float price, std::string desc, float weight, float hp)
 : RacingCarPart(type, mat, price, desc, weight)
 {
     this->horsePower = hp;
 }

 Engine::~Engine()
 {
     
 }