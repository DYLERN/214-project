#include <random>

#include "FormulaOneInterface.h"

int main() {

    std::srand(std::time(0));

    FormulaOneInterface facade;
    facade.demoBuildAndTest();

    std::cout << "=======================\n" << std::endl;

    std::cin.get();

    facade.demoLogistics();

    std::cout << "\n\n=======================\n" << std::endl;

    std::cin.get();

    facade.demoRacingStrategy();

    std::cout << "\n\n=======================\n" << std::endl;

    std::cin.get();

    facade.demoRacing();

    std::cin.get();
    
    return 0;
}