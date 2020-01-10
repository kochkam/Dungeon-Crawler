/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        12/1/2019
 ** Description: This is the object class which is a type of space that contains an item for the player
 to pick up. 
 ***************************************************************************************************/
#ifndef OBJECT_HPP
#define OBJECT_HPP
#include "character.hpp"
#include "space.hpp"
#include "item.hpp"
#include "key.hpp"
#include <string>
using std::string; 

class Object: public Space
{
    protected:
        Item *random; 
        string c = "Armory";
        const int id = 1;
        bool won = false;


    public: 
        virtual ~Object(){;};
        virtual void specialEvent(); 
        string returnString(){return c;}
        void setString(string c){this->c = c;}
        virtual const int returnInt(){return id;}
        virtual bool returnBool(){return won;}



};

#endif