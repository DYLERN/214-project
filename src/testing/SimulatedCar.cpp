#include "SimulatedCar.h"
#include <iostream>

SimulatedCar::SimulatedCar(){

    chassis = NULL;
    tyres = NULL;
    engine = NULL;
    aero = NULL;

}
SimulatedCar::~SimulatedCar(){

    delete chassis;
    delete tyres;
    delete engine;
    delete aero;
    delete electronics;

}

void SimulatedCar::setChassis(virtualChassis* chass){

    if(chassis != NULL){

        delete chassis;

    }

    chassis = chass;

}

void SimulatedCar::setTyres(virtualTyre* tyre){

    if(tyres != NULL){

        delete tyres;

    }

    tyres = tyre;

}

void SimulatedCar::setEngine(virtualEngine* eng){

    if(engine != NULL){

        delete engine;

    }

    engine = eng;

}

void SimulatedCar::setAero(virtualAerodynamics* aer){

    if(aero != NULL){

        delete aero;

    }

    aero = aer;

}

void SimulatedCar::setElectronics(virtualElectronics* elec){

    if(electronics != NULL){

        delete electronics;

    }

    electronics = elec;

}

void SimulatedCar::testCar(float maxPrice, float maxWeight, std::string weather){

    std::string result = "";

    if(chassis != NULL && tyres != NULL && engine != NULL && aero != NULL && electronics != NULL){

        float price = chassis->getPricing() + tyres->getPricing() + engine->getPricing() + aero->getPricing() + electronics->getPricing();
        float weight = chassis->getWeight() + tyres->getWeight() + engine->getWeight() + aero->getWeight() + electronics->getWeight();

        result += "Formula One Car has been tested for a full run within the virtual simluation. Details of parts used:\nEngine: " + engine->getDescription() + "\nChassis: " +
        chassis->getDescription() + "\nTyres: " + tyres->getDescription() + "\nAerodynamics: " + aero->getDescription() + "\nElectronics: " + electronics->getDescription() +
        "\n";

        if(price <= maxPrice){

            result += "Budget: Car is within budget.\n";

        }else{

            result += "Budget: Car is over budget.\n";

        }



        if(weight <= maxWeight){

            result += "Weight: Car is within weight limit.\n";

        }else{

            result += "Weight: Car is over weight limit.\n";

        }

        int time = rand() % 50 + 50;
        int temp = rand() % 100 + 2600;
        int speed = rand() % 70 + 300;

        result += "Lap Completed in: " + std::to_string(time) + " seconds during " + weather + " weather.\nMax engine temperature: " + std::to_string(temp) + "\nTop speed: " + std::to_string(speed) + 
        "\nCar safety check: Success\nFinal decision: Formula One Car is good to go.\n";

    }else{

        std::cout << "Not every part of the simulated racecar has been created and so a full test is not possible." << std::endl;

    }

    std::cout << result << std::endl;

}

void SimulatedCar::testChassis(){

    std::string result = "";

    if(chassis != NULL){

        if(chassis->getCollisionRating() > 50){

            result += "Chassis Testing has completed:\nChassis survived the collison test and is approved for use.\n\n";

        }else{

            result += "Chassis Testing has completed:\nChassis failed the collison test and is not approved for use.\n\n";

        }

        result += "Specifications of chassis:\nDescription: " + 
            chassis->getDescription() + "\nWeight: " + std::to_string(chassis->getWeight()) + "\nPricing: " + std::to_string(chassis->getPricing()) + "\n";

    }else{

        result += "The chassis has not been specified and so it cannot be tested.\n";

    }

    std::cout << result << std::endl;
    

}

void SimulatedCar::testTyre(){

    std::string result = "";

    if(tyres != NULL){

        if(tyres->getGrip() == 1){

            result += "Grip Testing has completed:\nSoft grip tyres worked well for rainy conditions and are approved for use.\n";

        }else if(tyres->getGrip() == 2){

            result += "Grip Testing has completed:\nHard grip tyres worked well for dry conditions and are approved for use.\n";

        }else{

            result += "Grip Testing has completed:\nGrip for tyres worked well for dry conditions and are approved for use.\n";

        }

        if(tyres->getThickness() < 20){

            result += "Tyre thickness too thin, replacement needed.\n\n";

        }else{

            result += "Tyre thickness in perfect condition, no replacement needed.\n\n";

        }

        result += "Specifications of Tyres:\nDescription: " + 
            tyres->getDescription() + "\nWeight: " + std::to_string(tyres->getWeight()) + "\nPricing: " + std::to_string(tyres->getPricing()) + "\n";

    }else{

        result += "The tyres have not been specified and so they cannot be tested.\n";

    }

    std::cout << result << std::endl;

}

void SimulatedCar::testEngine(){

    std::string result = "";

    if(engine != NULL){

        if(engine->getPower() < 600){

            result += "Engine Testing has completed:\nEngine didn't reach minimum threshold of 700 horse power, not suitable.\n\n";

        }else{

            result += "Engine Testing has completed:\nEngine did reach minimum threshold of 700 horse power, engine suitable for racing.\n\n";

        }

        result += "Specifications of Engine:\nDescription: " + 
            engine->getDescription() + "\nWeight: " + std::to_string(engine->getWeight()) + "\nPricing: " + std::to_string(engine->getPricing()) + "\n";

    }else{

        result += "The engine has not been specified and so it cannot be tested.";

    }

    std::cout << result << std::endl;

}

void SimulatedCar::testAero(){

    std::string result = "";

    if(aero != NULL){

        if(aero->getRating() < 6){

            result += "Aerodynamics Testing has completed:\nAerodynamics were not suitable for high speed racing, change recommended.\n\n";

        }else{

            result += "Aerodynamics Testing has completed:\nAerodynamics were suitable for high speed racing, approval granted.\n\n";

        }

        result += "Specifications of Aerodynamics:\nDescription: " + 
            aero->getDescription() + "\nWeight: " + std::to_string(aero->getWeight()) + "\nPricing: " + std::to_string(aero->getPricing()) + "\n";

    }else{

        result += "The aerodynamis has not been specified and so it cannot be tested.";

    }

    std::cout << result << std::endl;

}

void SimulatedCar::testElectronics(){

    std::string result = "";

    if(electronics != NULL){

        if(electronics->getDraw() < 20){

            result += "Electronics Testing has completed:\nElectronics were not functioning correctly, change recommended.\n\n";

        }else{

            result += "Electronics Testing has completed:\nElectronics were functioning correctly, approval granted.\n\n";

        }

        result += "Specifications of Aerodynamics:\nDescription: " + 
            electronics->getDescription() + "\nWeight: " + std::to_string(electronics->getWeight()) + "\nPricing: " + std::to_string(electronics->getPricing()) + "\n";

    }else{

        result += "The electronics has not been specified and so it cannot be tested.";

    }

    std::cout << result << std::endl;

}

