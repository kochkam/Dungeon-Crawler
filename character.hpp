/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        12/4/2019
 ** Description: This header file contains prototype functions for the character class. 
 ***************************************************************************************************/
#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <string>
#include <iostream> 
#include <cstdlib>
#include <ctime> 
using std::string; 
class Character
{
    protected:
        string type;
        int armor; 
        int strength; 
        int attack; 
        int damage; 
        int defense;

    public: 
        virtual ~Character(){;}
        string getType(){return type;}
        int getStrength(){return strength;}
        int getAttack(){return attack;}
        int getDefense(){return defense;}
        int getArmor(){return armor;}
        int getDamage(){return damage;}
        virtual void calculateAttack() = 0; 
        virtual void calculateDefense() = 0; 
        virtual void calculateDamage(int attackRoll) = 0; 
};





#endif