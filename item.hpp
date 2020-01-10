/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        12/1/2019
 ** Description: This is the item class which is an abstract class for items in the game
 ***************************************************************************************************/
#ifndef ITEM_HPP
#define ITEM_HPP
#include "character.hpp"

class Item
{
    protected:
        string name; 
        string description; 
        int id; 
        int attack; 
        int defense; 


    public: 
        ~Item(){;}
        string returnName(){return name;} 
        string returnDescription(){return description;}
        int returnId(){return id;}
        int returnAttack(){return attack;}
        int returnDefense(){return defense;}


};

#endif