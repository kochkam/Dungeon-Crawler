/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        11/7/2019
 ** Description: This header file contains the vampire class. 
 ***************************************************************************************************/
#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP
#include "character.hpp"
class Vampire : public Character
{
    private:

    public: 
        Vampire(){
            type = "Vampire";
            armor = 1; 
            strength = 18; 
        } 
        virtual ~Vampire(){;}
        virtual void calculateAttack();
        virtual void calculateDefense();
        virtual void calculateDamage(int attackRoll); 


};
 
#endif