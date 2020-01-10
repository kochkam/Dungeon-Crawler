/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        11/7/2019
 ** Description: This header file contains the bluemen class.
 ***************************************************************************************************/
#ifndef BLUEMEN_HPP
#define BLUEMEN_HPP
#include "character.hpp"
class BlueMen : public Character
{
    private:

    public: 
        BlueMen(){
            type = "Blue Men";
            armor = 3; 
            strength = 12; 
        } 
        virtual ~BlueMen(){;}
        virtual void calculateAttack();
        virtual void calculateDefense();
        virtual void calculateDamage(int attackRoll); 


};
 
#endif