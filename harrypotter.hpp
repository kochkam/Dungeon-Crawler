/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        11/7/2019
 ** Description: This header file that contains the HarryPooter class. 
 ***************************************************************************************************/
#ifndef HARRYPOTTER_HPP
#define HARRYPOTTER_HPP
#include "character.hpp"
class HarryPotter : public Character
{
    protected:
        int life; 

    public: 
        HarryPotter(){
            type = "Harry Potter";
            armor = 0; 
            strength = 10; 
            life = 1; 
        } 
        virtual ~HarryPotter(){;}
        virtual void calculateAttack();
        virtual void calculateDefense();
        virtual void calculateDamage(int attackRoll); 


};
 
#endif