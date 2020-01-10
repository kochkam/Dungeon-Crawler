/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        12/1/2019
 ** Description: This is the key class which is a class for an item in the game
 ***************************************************************************************************/
#ifndef ARMOR_HPP
#define ARMOR_HPP
#include "character.hpp"
#include "item.hpp"

class Armor : public Item
{
    protected:
        int armor = 5; 

    public: 
    Armor(){
        name = "Steel Breastplate\n";
        description = "This breastplate will increase your armor by 5.\n";
        id = 3; 
    }
        ~Armor(){;}


};

#endif