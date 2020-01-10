/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        12/4/2019
 ** Description: This is the main function for the final project
 ***************************************************************************************************/
#include <iostream>
#include <string>
#include "gameFlow.hpp"
#include "validation.hpp"
using std::endl; 
using std::cin; 
using std::cout; 

int main()
{
    int selection; 
    string name; 
    bool quitGame = false; 
    srand(time(0));
    printMenu1(); 
    selection = validateInteger(); 
    if(selection == 1)
    {
        do
        {
            printMenu2();
            Game dungeon;
            dungeon.createSpaces(); //links spaces together and creates them
            dungeon.spaceEvent(); // run the spaces event
            dungeon.printMap(); //print map 
            do
            {
                quitGame = dungeon.movePlayer(); //prints prompt to move player and moves them
                if(quitGame == false)
                {
                    dungeon.spaceEvent();
                    quitGame = dungeon.checkLoser(); //check if player lost 
                    if(quitGame != true)
                    {
                        dungeon.printMap(); 
                    }
                }
            } while (quitGame == false);
            playAgain(); 
            selection = validateInteger(); 
        } while (selection == 1);
    }
    else
    {
        cout << "Goodbye!\n";
    }
    

    return 0; 
}