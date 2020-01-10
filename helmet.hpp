/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        12/1/2019
 ** Description: This is the key class which is a class for an item in the game
 ***************************************************************************************************/
#ifndef HELMET_HPP
#define HELMET_HPP
#include "character.hpp"
#include "item.hpp"

class Helmet : public Item
{
    protected:
       

    public: 
    Helmet(){
        name = "Steel Helmet\n";
        description = "This helmet will increase your armor by 3.\n";
        id = 2; 
        defense = 3; 
    }
        ~Helmet(){;}


};

#endif