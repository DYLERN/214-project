#include <iostream>
#include "Context.h"
#include "Medium.h"
#include "Soft.h"
#include "TyreBlast.h"
#include "Hard.h"
#include "HighTemperature.h"
int main() {


    Context * Australia=new Context("Mercedes");
    Australia->setStateAndStrategy(new Soft("Soft"), new TyreBlast);
 Australia->takeAction();
    Australia->changeTyreState("Hard");

    Context * Dubai=new Context("Ferrarie");
    Dubai->setStateAndStrategy(new Medium("Medium"), new HighTemperature);
    Dubai->takeAction();
    Dubai->changeTyreState("Soft");
    delete Australia;
    delete Dubai;
    return 0;
}