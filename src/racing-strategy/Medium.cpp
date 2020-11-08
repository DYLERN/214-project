#include "Medium.h"
#include "Hard.h"
#include "Soft.h"

Medium::Medium(string unnamed_1) {
    TyreState=unnamed_1;

}


CompoundTyre* Medium::changeCompoundTyre(string unnamed_1) {
    if(unnamed_1=="Soft" ){

        return new Soft("Soft");
    } else if (unnamed_1=="Hard") {
        return new Hard("Hard");

    }

}
string Medium::getCompoundTyreState() {
    return TyreState;

}
void Medium::handle() {
  cout<<"Tyre has been change to Medium"<<endl;
}
