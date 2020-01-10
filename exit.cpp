/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        12/1/2019
 ** Description: This is the main function for the final project
 ***************************************************************************************************/
#include "exit.hpp"
#include "validation.hpp"
using std::cout; 


/************************************************************************************************
 *                                              Validation ::specialEvent()
 * Description: runs the exit simualtion and determines if you win and have the key or not to 
 * escape
 ************************************************************************************************/
void Exit::specialEvent()
{
    cout << "You have reached the dungeons exit!\n";
    cout << "But wait!!! The door is locked.....\n";

    cout << "Would you like to try and open the door or go back and explore the dungeon?\n";
    cout << "1. Try to unclock the exit.\n";
    cout << "2. Go back and explore the dungeon further.\n";
    int selection; 
    selection = validateInteger(); //validate input

    if (selection == 1)
    {
        for (int i = 0; i != player->inventory.size(); i++) //checks if player has the correct inventory item
        {
            if (player->inventory[i].returnId() == 1) //check for key
            {
                cout << "Thank Goodness you have a key that unlocks the door!\n";
                cout << "Congratualtions! You have escaped the dungeon and won the game!\n";
                won = true; 
                break; 
            }
            else
            {
                won = false; 
            }
        }
        if(won == false) //if player did not have key
        {
            cout << "Oh NOOO! You dont have the dungeon key! You must go back into the dungeon to find it\n";
            won = false;
        }
    }
}