/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        11/7/2019
 ** Description: This header file contains prototype functions for the character class. 
 ***************************************************************************************************/
#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP
#include "character.hpp"
class Barbarian : public Character
{
    private:

    public: 
        Barbarian(){
            type = "Barbarian";
            armor = 0; 
            strength = 12; 
        } 
        virtual ~Barbarian(){;}
        virtual void calculateAttack();
        virtual void calculateDefense();
        virtual void calculateDamage(int attackRoll); 


};
 
#endif