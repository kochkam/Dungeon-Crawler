/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        12/1/2019
 ** Description: This is the exit class which is a type of space that contains runs the simualtion for
 the player to escape and checks if they have the right item to escape. 
 ***************************************************************************************************/
#ifndef EXIT_HPP
#define EXIT_HPP
#include "character.hpp"
#include "space.hpp"
#include <string>
using std::string; 

class Exit: public Space
{
    protected:
        string b = "Dungeon Exit";
        const int id = 4; 


    public: 
        virtual ~Exit(){;};
        virtual void specialEvent(); 
        bool won = false; 
        virtual bool returnBool(){return won;}
        string returnString(){return b;}
        void setString(string b){this->b = b;}
        virtual const int returnInt(){return id;}

};

#endif