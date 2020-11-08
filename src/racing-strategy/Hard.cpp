#include "Hard.h"
#include "Soft.h"
#include "Medium.h"


Hard::Hard(string unnamed_1) {

    TyreState=unnamed_1;

}



CompoundTyre* Hard::changeCompoundTyre(string unnamed_1) {
    if(unnamed_1=="Soft" ){

        return new Soft("Soft");
    } else if (unnamed_1=="Medium") {
        return new Medium("Medium");

    }
}
string Hard::getCompoundTyreState() {

    return TyreState;
}
void Hard::handle() {
    cout<<"Tyre has been change to Hard"<<endl;
}