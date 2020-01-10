/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        12/1/2019
 ** Description: This is the key class which is a class for an item in the game
 ***************************************************************************************************/
#ifndef LONGSWORD_HPP
#define LONGSWORD_HPP
#include "character.hpp"
#include "item.hpp"

class Longsword : public Item
{
    protected:

    public: 
    Longsword(){
        name = "Longsword\n";
        description = "This Longsword will increase your attack by 5.\n";
        id = 5; 
        attack = 5; 
    }
        ~Longsword(){;}


};

#endif