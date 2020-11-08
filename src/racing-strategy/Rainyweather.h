#ifndef RAINYWEATHER_H
#define RAINYWEATHER_H
#include "../pch.h"
#include "PitStopStrategy.h"
using namespace std;
/**
 * Created by Akil on 9/1/2020.
 */
class Rainyweather : public PitStopStrategy {


private:
	virtual string takeAction();

	~Rainyweather();
};

#endif
