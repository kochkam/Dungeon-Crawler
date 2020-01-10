/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        12/1/2019
 ** Description: This is the key class which is a class for an item in the game
 ***************************************************************************************************/
#ifndef KEY_HPP
#define KEY_HPP
#include "character.hpp"
#include "item.hpp"

class Key : public Item
{
    protected:
        

    public: 
    Key(){
        name = "Dungeon Key\n";
        description = "This key will unlock the door to the dungeons exit\n";
        id = 1; 
    }
        ~Key(){;}


};

#endif