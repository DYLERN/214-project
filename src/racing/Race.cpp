#include "Race.h"

void Race::changeToQualify(){
RaceState* temp= state->changeState(false);
delete state;
state=temp;
state->handleChange();
}

void Race::changeToRacing(){
RaceState* temp=state->changeState(true);

//not sure for now 
delete state;
state=temp;
state->handleChange();
}

void Race::setState(RaceState* state){
this->state=state;
}

void Race::setTournamentName(string raceName){
this->raceName=raceName;
}

Race::Race(){


}

Race::~Race(){

}

void Race::testTimes(){
    for(int i=0; i<10; i++){
        int time= rand() % 200 + 300;
        times[i]=times[i]+time;
        cout << "Car " + to_string(i) + " completed the lap in " + to_string(time) + " seconds" << endl;
    }
}

results Race::commenceRace(){
//times/grid results
sort();

for(int i = 0; i < 10; i++){

    carList[i]->points += times[i];

}
//areodynamics
float tempAero[10];

for(int i = 0; i < 10; i++){

    tempAero[i] = carList[i]->getAerodynamics()->getRating();

}

int scoring = 10;
int maxPos = 0;

for(int i = 0; i < 10; i++){

    for(int j = 0; j < 10; j++){

        if(tempAero[j] > maxPos){

            maxPos = j;

        }

    }

    carList[maxPos]->points += scoring;
    scoring--;
    tempAero[maxPos] = 0;

}
//chassis
float tempChassis[10];
for(int i = 0; i < 10; i++){

    tempChassis[i] = carList[i]->getChassis()->getRating();

}
scoring =20;
maxPos=0;

for(int i = 0; i < 10; i++){

    for(int j = 0; j < 10; j++){

        if(tempChassis[j] > maxPos){

            maxPos = j;

        }

    }

    carList[maxPos]->points += scoring;
    scoring=scoring-2;
    tempChassis[maxPos] = 0;

}
//electronics
float tempElec[10];
for(int i = 0; i < 10; i++){

    tempElec[i] = carList[i]->getElectronics()->getRating();

}
scoring =10;
maxPos=0;

for(int i = 0; i < 10; i++){

    for(int j = 0; j < 10; j++){

        if(tempElec[j] > maxPos){

            maxPos = j;

        }

    }

    carList[maxPos]->points += scoring;
    scoring--;
    tempElec[maxPos] = 0;

}
//engine
float tempEngine[10];
for(int i = 0; i < 10; i++){

    tempEngine[i] = carList[i]->getEngine()->getRating();

}
scoring =20;
maxPos=0;

for(int i = 0; i < 10; i++){

    for(int j = 0; j < 10; j++){

        if(tempEngine[j] > maxPos){

            maxPos = j;

        }

    }

    carList[maxPos]->points += scoring;
    scoring=scoring-2;
    tempEngine[maxPos] = 0;

}
//tyres
float tempTyres[10];
for(int i = 0; i < 10; i++){

    tempTyres[i] = carList[i]->getTyres()->getRating();

}
scoring =10;
maxPos=0;

for(int i = 0; i < 10; i++){

    for(int j = 0; j < 10; j++){

        if(tempTyres[j] > maxPos){

            maxPos = j;

        }

    }

    carList[maxPos]->points += scoring;
    scoring--;
    tempTyres[maxPos] = 0;

}
//positions
float placement[10];
float holder[10];

for(int i = 0; i < 10; i++){

    holder[i] = carList[i]->points;

}

int pos = 0;
int temp = 0;
scoring = 1;

for(int i = 0; i < 10; i++){

    for(int j = 0; j < 10; j++){

        if(holder[j] > temp){

            temp = holder[j];
            pos = j;

        }

    placement[pos] = scoring;
    scoring++;
    holder[pos] = 0;
    temp = 0;

    }
//return a results array

}
results arr[10];
for(int i=0; i<10; i++){
    arr[i]=placement[i];
}
}

void Race::sort(){
    int i, j;
    for(i=0; i<10-1; i++){
        for(j=0; j<10-i-1; j++){
            if(times[j] > times[j+1]){

                int temp = times[j];
                times[j] = times[j+1];
                times[j+1] = temp;

            }
        }
    }
}