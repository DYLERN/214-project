#include "windTunnelTest.h"
#include <iostream>

windTunnelTest::windTunnelTest(FormulaOneCar* car){

    testCar = car;

}

windTunnelTest::~windTunnelTest(){

    if(testCar != NULL){

        delete testCar;

    }

    if(start != NULL){

        delete start;

    }

    if(stop != NULL){

        delete stop;

    }

    if(increase != NULL){

        delete increase;

    }

    if(decrease != NULL){

        delete decrease;

    }

    if(up != NULL){

        delete up;

    }

    if(down != NULL){

        delete down;

    }

    if(acc != NULL){

        delete acc;

    }

}

void windTunnelTest::testBreaking(){

    std::cout << "Testing car breaks, now going to get car to a suitable speed." << std::endl;

    start->execute();

    increase->execute();
    increase->execute();
    up->execute();
    increase->execute();
    up->execute();
    increase->execute();

    int speed = rand() % 70 + 300;

    std::cout << "Car is now at " + std::to_string(speed) + "Km/h, preparing to hard break." << std::endl;

    decrease->execute();
    decrease->execute();
    down->execute();
    decrease->execute();
    down->execute();
    decrease->execute();

    stop->execute();

    int time = rand() % 5 + 5;

    std::cout << "Time taken to brake: " + std::to_string(time) + " seconds from a speed of " + std::to_string(speed) + "Km/h." << std::endl; 

    numTickets--;

}

void windTunnelTest::testAcceleration(){

    std::cout << "Testing car acceleration, now going to get car to top speed as quickly as possible." << std::endl;

    start->execute();

    acc->execute();
    up->execute();
    acc->execute();

    int speed = rand() % 70 + 350;
    int time = rand() % 5 + 10;

    std::cout << "Car reached max speed of " + std::to_string(speed) + "Km/h, within " + std::to_string(time) + " seconds, bringing car to stop." << std::endl;

    decrease->execute();
    decrease->execute();
    down->execute();
    decrease->execute();

    stop->execute();

    numTickets--;

}

void windTunnelTest::setFormulaOneCar(FormulaOneCar* f){

    testCar = f;

}