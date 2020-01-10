/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        12/1/2019
 ** Description: This is the cell space class that runs the cell simulation.
 ***************************************************************************************************/
#ifndef CELL_HPP
#define CELL_HPP
#include "character.hpp"
#include "space.hpp"
#include "guard.hpp"
#include <string>
using std::string; 

class Cell: public Space
{
    protected:
        string d = "Cell"; 
        const int id = 3;
        bool won = false; 
        


    public: 
        virtual ~Cell(){;};
        virtual void specialEvent(); 
        string returnString(){return d;}
        void setString(string d){this->d = d;}
        virtual const int returnInt(){return id;}
        virtual bool returnBool(){return won;}


};

#endif