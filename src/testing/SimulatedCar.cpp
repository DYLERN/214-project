#include "SimulatedCar.h"
#include <iostream>

SimulatedCar::SimulatedCar(){

    chassis = NULL;
    tyres = NULL;
    engine = NULL;
    aero = NULL;
    currentWeather = sunny;

}

SimulatedCar::SimulatedCar(weather w, float mPrice, float mWeight){

    currentWeather = w;

}

void SimulatedCar::setChassis(virtualChassis* chass){

    chassis = chass;

}

void SimulatedCar::setTyres(virtualTyre* tyre){

    tyres = tyre;

}

void SimulatedCar::setEngine(virtualEngine* eng){

    engine = eng;

}

void SimulatedCar::setAero(virtualAerodynamics* aer){

    aero = aer;

}

void SimulatedCar::setElectronics(virtualElectronics* elec){

    electronics = elec;

}

void SimulatedCar::setWeather(weather w){

    currentWeather = w;

}

void SimulatedCar::testCar(float maxPrice, float maxWeight){

    string result = "";

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

        result += "Lap Completed in: " + to_string(time) + " seconds.\nMax engine temperature: " + to_string(temp) + "\nTop speed: " + to_string(speed) + 
        "\nCar safety check: Success\nFinal decision: Formula One Car is good to go.\n";

    }else{

        cout << "Not every part of the simulated racecar has been created and so a full test is not possible." << endl;

    }

    cout << result << endl;

}

void SimulatedCar::testChassis(){

    string result = "";

    if(chassis != NULL){

        if(chassis->getCollisionRating() < 50){

            result += "Chassis Testing has completed:\nChassis survived the collison test and is approved for use.\n\n";

        }else{

            result += "Chassis Testing has completed:\nChassis failed the collison test and is not approved for use.\n\n";

        }

        result += "Specifications of chassis:\nDescription: " + 
            chassis->getDescription() + "\nWeight: " + to_string(chassis->getWeight()) + "\nPricing: " + to_string(chassis->getPricing()) + "\n";

    }else{

        result += "The chassis has not been specified and so it cannot be tested.\n";

    }

    cout << result << endl;
    

}

void SimulatedCar::testTyre(){

    string result = "";

    if(tyres != NULL){

        if(tyres->getGrip() == 1){

            result += "Grip Testing has completed:\nSoft grip tyres worked well for rainy conditions and are approved for use.\n";

        }else if(tyres->getGrip() == 2){

            result += "Grip Testing has completed:\nHard grip tyres worked well for dry conditions and are approved for use.\n";

        }

        if(tyres->getThickness() < 20){

            result += "Tyre thickness too thin, replacement needed.\n\n";

        }else{

            result += "Tyre thickness in perfect condition, no replacement needed.\n\n";

        }

        result += "Specifications of Tyres:\nDescription: " + 
            tyres->getDescription() + "\nWeight: " + to_string(tyres->getWeight()) + "\nPricing: " + to_string(tyres->getPricing()) + "\n";

    }else{

        result += "The tyres have not been specified and so they cannot be tested.\n";

    }

    cout << result << endl;

}

void SimulatedCar::testEngine(){

    string result = "";

    if(engine != NULL){

        if(engine->getPower() < 600){

            result += "Engine Testing has completed:\nEngine didn't reach minimum threshold of 700 horse power, not suitable.\n\n";

        }else{

            result += "Engine Testing has completed:\nEngine did reach minimum threshold of 700 horse power, engine suitable for racing.\n\n";

        }

        result += "Specifications of Engine:\nDescription: " + 
            engine->getDescription() + "\nWeight: " + to_string(engine->getWeight()) + "\nPricing: " + to_string(engine->getPricing()) + "\n";

    }else{

        result += "The engine has not been specified and so it cannot be tested.";

    }

    cout << result << endl;

}

void SimulatedCar::testAero(){

    string result = "";

    if(aero != NULL){

        if(aero->getRating() < 6){

            result += "Aerodynamics Testing has completed:\nAerodynamics were not suitable for high speed racing, change recommended.\n\n";

        }else{

            result += "Aerodynamics Testing has completed:\nAerodynamics were suitable for high speed racing, approval granted.\n\n";

        }

        result += "Specifications of Aerodynamics:\nDescription: " + 
            aero->getDescription() + "\nWeight: " + to_string(aero->getWeight()) + "\nPricing: " + to_string(aero->getPricing()) + "\n";

    }else{

        result += "The aerodynamis has not been specified and so it cannot be tested.";

    }

    cout << result << endl;

}

void SimulatedCar::testElectronics(){

    string result = "";

    if(electronics != NULL){

        if(electronics->getDraw() < 20){

            result += "Electronics Testing has completed:\nElectronics were not functioning correctly, change recommended.\n\n";

        }else{

            result += "Electronics Testing has completed:\nElectronics were functioning correctly, approval granted.\n\n";

        }

        result += "Specifications of Aerodynamics:\nDescription: " + 
            electronics->getDescription() + "\nWeight: " + to_string(electronics->getWeight()) + "\nPricing: " + to_string(electronics->getPricing()) + "\n";

    }else{

        result += "The electronics has not been specified and so it cannot be tested.";

    }

    cout << result << endl;

}

