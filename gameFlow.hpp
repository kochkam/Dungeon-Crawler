/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        12/4/2019
 ** Description: This is the class that controls the games flow. 
 ***************************************************************************************************/
#ifndef GAME_HPP
#define GAME_HPP
#include "space.hpp"
#include "player.hpp"
#include "monster.hpp"
#include "cell.hpp"
#include "character.hpp"
#include "validation.hpp"
#include "item.hpp"
#include "exit.hpp"
#include "object.hpp"
#include <vector> 
#include <list> 
using std::vector;
using std::list; 

class Game
{
    protected:
        Player *prisoner = new Player;  
        vector <Space*> spaces; 
        Space *currentSpace; 
        int count = 0; 
        bool quitGame = false; 
        
    public: 
        ~Game(){;}
        void spaceEvent(); 
        void createSpaces(); 
        bool nextSpace();
        bool previousSpace(); 
        bool movePlayer(); 
        bool checkLoser(); 
        void printMap(); 
};

#endif