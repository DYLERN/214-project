#ifndef NAVIGATIONALAI_H
#define NAVIGATIONALAI_H

#include "../core/RacingCarPart.h"

class NavigationalAI : public RacingCarPart
{
    private:
        float speedIcrease;
        std::string ios;
    
    public:
        NavigationalAI(std::string, std::string, float, std::string, float, float, std::string);
        ~NavigationalAI();
};

#endif