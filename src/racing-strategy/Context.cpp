#include "Context.h"
#include <iostream>
Context::Context() {

}

Context::Context(string type) {
    name=type;

}

Context::~Context() {
    delete Tyre;

}

void Context::takeAction() {

    string value=name + strategy->takeAction();
    cout<<value<<endl;

}

void Context::setStateAndStrategy(CompoundTyre* unnamed_1, PitStopStrategy* unnamed_2) {
 Tyre=unnamed_1;
 strategy=unnamed_2;
 cout<<name +" Using " + Tyre->getCompoundTyreState()+" Tyre"<<endl;

}
void Context::changeTyreState(string tyretype) {

    if(Tyre->getCompoundTyreState()==tyretype) {
        cout << "Cant change tyre select diffrent tyre" << endl;
    }
        else
        {
           Tyre= Tyre->changeCompoundTyre(tyretype);
           Tyre->handle();
        }
        return;


}