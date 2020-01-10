/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        12/4/2019
 ** Description: This header file contains the Player class. 
 ***************************************************************************************************/
#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "character.hpp"
#include "item.hpp"
#include <vector> 
using std::vector; 
class Player : public Character
{
    private:
      

    public: 
        Player(){
            type = "Prisoner";
            armor = 1; 
            strength = 30; 
        } 
        virtual ~Player(){;}
        virtual void calculateDamage(int attackRoll); 
        virtual void calculateAttack(); 
        virtual void calculateDefense();
        vector <Item> inventory; 
        Item *current; 
};
 
#endif