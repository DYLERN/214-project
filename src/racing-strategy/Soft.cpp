#include "Soft.h"
#include "Medium.h"
#include "Hard.h"


Soft::Soft(string unnamed_1) {
TyreState=unnamed_1;
}
void Soft::handle() {
    cout<<"Tyre has been change to soft"<<endl;
}


CompoundTyre* Soft::changeCompoundTyre(string unnamed_1) {
    if(unnamed_1=="Hard" ){

        return new Hard("Hard");
    } else if (unnamed_1=="Medium") {
        return new Medium("Medium");

    }

}
string Soft::getCompoundTyreState() {
    return TyreState;
}