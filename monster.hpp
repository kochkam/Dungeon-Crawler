/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        12/1/2019
 ** Description: This is the monster (space) class that simulates a battle between the player and guard
 ***************************************************************************************************/
#ifndef MONSTER_HPP
#define MONSTER_HPP
#include "character.hpp"
#include "space.hpp"
#include "guard.hpp"
#include <string>
using std::string; 

class Monster: public Space
{
    protected:
        Guard *one = nullptr; 
        int status; 
        const int id = 2;
        string a = "Guard Room"; 
        bool won = false; 



    public: 
        virtual ~Monster(){;};
        virtual void specialEvent(); 
        int returnStatus(){return status;}
        string returnString(){return a;}
        void setString(string a){this->a = a;}
        virtual const int returnInt(){return id;}
        virtual bool returnBool(){return won;}



};

#endif