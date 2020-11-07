#include "Racing.h"
#include "Qualify.h"
#include <cstdlib>
#include <ctime>

Qualify::Qualify():RaceState("saturday"){

}

void Qualify::handleChange(){
    cout<<"The racing tournament is currently in the qualifications state"<<endl;
}

RaceState* Qualify::changeState(bool result){
    RaceState* decision;
    if(result ==true){
        decision= new Racing();
        return decision;
    }
    else{
        decision=new Qualify();
        cout<<"it is already in the qualifying stage"<<endl;
        return decision;
    }
}

void Qualify::setGridPos(int gridPos){
    //create time var and use random times in an array and work out grid position 
    /*srand((unsigned) time(0));//generate random num every time exe occurs
    int arr[20];
    for(int i=0; i<21; i++){
        arr[i]=rand() %100;
        for(int j=0; j<21; j++){
            if(arr[i]=arr[j]){
                arr[i]=rand() %100 +1;
            }
        }
    }
    for(int k=0; k<21; k++){
        for(int p=0; p<21; p++){
            if(arr[k]>arr[p]){
                int temp[]=arr[p];
            }
        }
    }
    */
    //or just give it a grid position to start off 
    this->gridPos=gridPos;
}

int Qualify::getGridPos(){
    return gridPos;
}