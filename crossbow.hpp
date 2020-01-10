/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        12/1/2019
 ** Description: This is the key class which is a class for an item in the game
 ***************************************************************************************************/
#ifndef CROSSBOW_HPP
#define CROSSBOW_HPP
#include "character.hpp"
#include "item.hpp"

class Crossbow : public Item
{
    protected:
       

    public: 
    Crossbow(){
        name = "Crossbow\n";
        description = "This crossbow will increase your attack by 3.\n";
        id = 4; 
        attack = 3; 
    }
    ~Crossbow(){;}


};

#endif