#include "Racing.h"
#include "Qualify.h"

Racing::Racing():RaceState("sunday"){

}

void Racing::handleChange(){
    cout<<"The racing tournament is currently in the racing state"<<endl;
}

RaceState* Racing::changeState(bool result){
    RaceState* decision;
    if(result ==true){
        decision= new Qualify();
        return decision;
    }
    else{
        decision=new Racing();
        cout<<"it is already in the racing stage"<<endl;
        return decision;
    }
}

void Racing::setFinishPos(int finishPos){
    this->finishPos=finishPos;
}

int Racing::getFinishPos(){
    return finishPos;
}

