/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        12/4/2019
 ** Description: This header file contains the Guard class. 
 ***************************************************************************************************/
#ifndef GUARD_HPP
#define GUARD_HPP
#include "character.hpp"
class Guard : public Character
{
    private:

    public: 
        Guard(){
            type = "Guard";
            armor = 1; 
            strength = 6; 
        } 
        virtual ~Guard(){;}
        virtual void calculateDamage(int attackRoll); 
        virtual void calculateAttack(); 
        virtual void calculateDefense();


};
 
#endif