/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        12/1/2019
 ** Description: This is the space  abstract class that tracks where the player is in the game and
 simulates different scenarios
 ***************************************************************************************************/
#ifndef SPACE_HPP
#define SPACE_HPP
#include "character.hpp"
#include "player.hpp"

class Space
{
    protected:



    public: 
        virtual ~Space(){;}
        virtual void specialEvent() = 0; 
        Space *up = nullptr; 
        Space *down = nullptr; 
        Space *next; 
        Space *previous;
        Player *player; 
        virtual string returnString() = 0; 
        virtual void setString(string a) = 0; 
        virtual const int returnInt() = 0;
        virtual bool returnBool() = 0;  
        
       
};

#endif