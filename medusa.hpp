/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        11/7/2019
 ** Description: This header file contains the medusa class.
 ***************************************************************************************************/
#ifndef MEDUSA_HPP
#define MEDUSA_HPP
#include "character.hpp"
class Medusa : public Character
{
    private:

    public: 
        Medusa(){
            type = "Medusa";
            armor = 3; 
            strength = 8; 
        } 
        virtual ~Medusa(){;}
        virtual void calculateAttack();
        virtual void calculateDefense();
        virtual void calculateDamage(int attackRoll); 


};
 
#endif