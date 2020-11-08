#include "windTunnelTest.h"
#include <iostream>

windTunnelTest::windTunnelTest(FormulaOneCar* car){

    testCar = car;

}

windTunnelTest::~windTunnelTest(){

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


/**
 * Function check if there are available tickets then tests the car by slowly getting up to speed and then hard breaking using commands.
 * Funcion is an invoker in memento pattern as it returns a report object.
 */
report windTunnelTest::testBreaking(){

    if(numTickets > 0){

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

        std::cout << "Time taken to brake: " + std::to_string(time) + " seconds from a speed of " + std::to_string(speed) + "Km/h." << std::endl << std::endl; 

        numTickets--;

        std::string result = "Formula one breaking report:\nComponents Tested:\nAeroDynamics: " + testCar->getAerodynamics()->getDescription() + "\nChassis: " + testCar->getChassis()->getDescription() +
        "\nEngine: " + testCar->getEngine()->getDescription() + "\nElectronics: " + testCar->getElectronics()->getDescription() + "\nTyres: " + testCar->getTyres()->getDescription() +
        "\n\nTime taken to brake: " + std::to_string(time) + " seconds from a speed of " + std::to_string(speed) + "Km/h.\nResult : Success";  

        return report(result);

    }else{

        std::cout << "Cannot perform wind tunnel breaking test, no tickets remaining." << std::endl;

        return report("Failed windTunnel Test, not enough tickets.");

    }

}

/**
 * Function check if there are available tickets then tests the car by quickly getting to max speed using commands.
 * Funcion is an invoker in memento pattern as it returns a report object.
 */
report windTunnelTest::testAcceleration(){

    if(numTickets > 0){

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

        std::cout << std::endl;

        numTickets--;

        std::string result = "Formula one acceleration report:\nComponents Tested:\nAeroDynamics: " + testCar->getAerodynamics()->getDescription() + "\nChassis: " + testCar->getChassis()->getDescription() +
        "\nEngine: " + testCar->getEngine()->getDescription() + "\nElectronics: " + testCar->getElectronics()->getDescription() + "\nTyres: " + testCar->getTyres()->getDescription() +
        "\n\nCar reached max speed of " + std::to_string(speed) + "Km/h, within " + std::to_string(time) + " seconds.\nResult : Success";

        return report(result);

    }else{

        std::cout << "Cannot perform wind tunnel acceleration test, no tickets remaining." << std::endl;

        return report("Failed windTunnel Test, not enough tickets.");

    }

}

void windTunnelTest::setFormulaOneCar(FormulaOneCar* f){

    testCar = f;

}