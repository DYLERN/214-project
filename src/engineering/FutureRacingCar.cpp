#include "FutureRacingCar.h"

FutureRacingCar::FutureRacingCar()
{

}

FutureRacingCar::~FutureRacingCar()
{
    delete nav;
}

NavigationalAI* FutureRacingCar::getAI()
{
    return nav;
}

void FutureRacingCar::setAI(NavigationalAI* AI)
{
    this->nav = AI;
}