#include "Race.h"

Race::Race(FormulaOneCar** cars, std::string r, std::string l)
{

    for(int i = 0; i < 10; i++){

        carList[i] = cars[i];

    }

    raceName = r;
    location = l;

}

Race::~Race()
{
}

void Race::testTimes()
{
    for (int i = 0; i < 10; i++)
    {
        int time = rand() % 200 + 300;
        times[i] = times[i] + time;
        std::cout << "Car " + std::to_string(i) + " completed the lap in " + std::to_string(time) + " seconds" << std::endl;
    }
}

std::array<std::shared_ptr<results>,10> Race::commenceRace()
{
    //times/grid results

    int scoring = 10;
    int maxPos = 0;

    for(int i = 0; i < 10; i++){

        for(int j = 0; j < 10; j++){

            if(times[j] < times[maxPos]){

                maxPos = j;

            }

        }

        carList[maxPos]->points += scoring;
        times[maxPos] = 0;
        scoring--;

    }

    scoring = 10;
    maxPos = 0;

    update();
    //areodynamics
    float tempAero[10];

    for (int i = 0; i < 10; i++)
    {

        tempAero[i] = carList[i]->getAerodynamics()->getRating();
    }

    for (int i = 0; i < 10; i++)
    {

        for (int j = 0; j < 10; j++)
        {

            if (tempAero[j] > tempAero[maxPos])
            {

                maxPos = j;

            }
        }

        carList[maxPos]->points += scoring;
        scoring--;
        tempAero[maxPos] = 0;
    }

    update();

    //chassis
    float tempChassis[10];
    for (int i = 0; i < 10; i++)
    {

        tempChassis[i] = carList[i]->getChassis()->getRating();
    }
    scoring = 20;
    maxPos = 0;

    for (int i = 0; i < 10; i++)
    {

        for (int j = 0; j < 10; j++)
        {

            if (tempChassis[j] > tempChassis[maxPos])
            {

                maxPos = j;
            }
        }

        carList[maxPos]->points += scoring;
        scoring = scoring - 2;
        tempChassis[maxPos] = 0;
    }

    update();

    //electronics
    float tempElec[10];
    for (int i = 0; i < 10; i++)
    {

        tempElec[i] = carList[i]->getElectronics()->getRating();
    }
    scoring = 10;
    maxPos = 0;

    for (int i = 0; i < 10; i++)
    {

        for (int j = 0; j < 10; j++)
        {

            if (tempElec[j] > tempElec[maxPos])
            {

                maxPos = j;
            }
        }

        carList[maxPos]->points += scoring;
        scoring--;
        tempElec[maxPos] = 0;
    }
    //engine
    float tempEngine[10];
    for (int i = 0; i < 10; i++)
    {

        tempEngine[i] = carList[i]->getEngine()->getRating();
    }
    scoring = 20;
    maxPos = 0;

    for (int i = 0; i < 10; i++)
    {

        for (int j = 0; j < 10; j++)
        {

            if (tempEngine[j] > tempEngine[maxPos])
            {

                maxPos = j;
            }
        }

        carList[maxPos]->points += scoring;
        scoring = scoring - 2;
        tempEngine[maxPos] = 0;
    }
    //tyres
    float tempTyres[10];
    for (int i = 0; i < 10; i++)
    {

        tempTyres[i] = carList[i]->getTyres()->getRating();
    }
    scoring = 10;
    maxPos = 0;

    for (int i = 0; i < 10; i++)
    {

        for (int j = 0; j < 10; j++)
        {

            if (tempTyres[j] > tempTyres[maxPos])
            {

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

    for (int i = 0; i < 10; i++)
    {

        holder[i] = carList[i]->points;
    }

    int pos = 0;
    scoring = 1;

    for (int i = 0; i < 10; i++)
    {

        for (int j = 0; j < 10; j++)
        {

            if (holder[j] > holder[pos])
            {

                pos = j;
            }


        }

            placement[pos] = scoring;
            scoring++;
            holder[pos] = 0;
        //return a results array
    }

    std::array<std::shared_ptr<results>,10> result;

    int timeTaken = rand() % 100 +500;

    for(int i = 0; i < 10; i++){

        int add = rand() % 10;

        result[i] = std::shared_ptr<results>(new results(raceName, carList[i]->driverName, carList[i]->team, location, carList[i]->carModel, i+1, placement[i], (timeTaken + (i*add))));

    }

    // for (int i = 0; i < 10 - 1; i++)
    // {
    //     for (int j = 0; j < 10 - i - 1; j++)
    //     {
    //         if (result[j]->getPlace() > result[j+1]->getPlace())
    //         {

    //             results temp = *result[j];
    //             result[j] = result[j + 1];
    //             *result[j + 1] = temp;

    //             result.swap()

    //         }
    //     }
    // }

    std::sort(result.begin(),result.end(),[](const std::shared_ptr<results>& a, const std::shared_ptr<results>& b) -> bool {return a->getPlace() < b->getPlace();});

    return result;

}

void Race::update(){

    int topPos = 0;
    int prevMax = 0;

    for(int i = 0; i < 10; i++){

        if(carList[i]->points > prevMax){

            prevMax = carList[i]->points;
            topPos = i;

        }

    }

    std::cout << "Currently driver " + carList[topPos]->driverName + " is in the lead for team " + carList[topPos]->team + "!" << std::endl;

}