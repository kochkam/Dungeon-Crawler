/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        12/4/2019
 ** Description: This is the main function for the final project
 ***************************************************************************************************/
#include "gameFlow.hpp"
using std::cout; 
using std::endl; 

/************************************************************************************************
 *                                              Validation ::createSpace()
 * Description: creates the spaces in the game and links them
 ************************************************************************************************/
void Game::createSpaces()
{
    for(int i = 0; i <= 7; i++)
    {
        Space* x; //fill the vector with space pointers 
        spaces.push_back(x);
    }
    spaces.push_back(spaces[0] = new Cell); //create object spaces and have the pointers point to them
    spaces.push_back(spaces[1] = new Object);
    spaces.push_back(spaces[2] = new Monster);
    spaces.push_back(spaces[3] = new Object);
    spaces.push_back(spaces[4] = new Monster);
    spaces.push_back(spaces[5] = new Object);
    spaces.push_back(spaces[6] = new Monster);
    spaces.push_back(spaces[7] = new Object);
    spaces.push_back(spaces[8] = new Exit);

    for(int i = 0; i <= 8; i++) //links all the spaces
    {
        if(i==0)
        {
            spaces[i]->previous = nullptr; 
            spaces[i]->next = spaces[i+1];
            currentSpace = spaces[i];
            currentSpace->player = prisoner; 
            currentSpace->setString("Prisoner");
        }
        else if(i==8)
        {
            spaces[i]->previous = spaces[7];
            spaces[i]->next = nullptr; 
        }
        else
        {
            spaces[i]->next = spaces[i+1];
            spaces[i+1]->previous = spaces[i];
        }
    }
}
/************************************************************************************************
 *                                              Validation ::nextSpace()
 * Description: Moves player to the next space
 ************************************************************************************************/
bool Game::nextSpace()
{
    if(currentSpace->next == nullptr)
    {
        cout << "You should not see this as you would have exited the game since you won.\n";
        return false; 
    }
    else
    {
        currentSpace = currentSpace->next; 
        currentSpace->player = prisoner;
        currentSpace->setString("Prisoner");
        if(currentSpace == spaces[1])
            currentSpace->previous = spaces[0];
        if (currentSpace->previous != nullptr)
        {
            if (currentSpace->previous->returnInt() == 1)//updates the previous space the player was on to its previous name
                currentSpace->previous->setString("Armory");
            else if (currentSpace->previous->returnInt() == 2)
                currentSpace->previous->setString("Guard Room");
            else if (currentSpace->previous->returnInt() == 3)
                currentSpace->previous->setString("Cell");
            else if (currentSpace->previous->returnInt() == 4)
                currentSpace->previous->setString("Dungeon Exit");
        }

        return true; 
    }
}

/************************************************************************************************
 *                                              Validation ::previousSpace()
 * Description: Moves player to the previous space
 ************************************************************************************************/
bool Game::previousSpace()
{
   if(currentSpace->previous == nullptr)
    {
        cout << "You have hit the back of the dungeon and cannot go any further back.\n";
        return false; 
    }
    else if(3 == currentSpace->previous->returnInt())
    {
        cout << "You cannot go back into your cell! The guards have locked it.\n";
        cout << "You have been returned to the Armory!\n";
        return false; 
    }
    else
    {
        currentSpace = currentSpace->previous; 
        currentSpace->player = prisoner;
        currentSpace->setString("Prisoner");
        if (currentSpace->next != nullptr)
        {
            if (currentSpace->next->returnInt() == 1)//updates the previous space the player was on to its previous name
                currentSpace->next->setString("Armory");
            else if (currentSpace->next->returnInt() == 2)
                currentSpace->next->setString("Guard Room");
            else if (currentSpace->next->returnInt() == 3)
                currentSpace->next->setString("Cell");
            else if (currentSpace->next->returnInt() == 4)
                currentSpace->next->setString("Dungeon Exit");
        }      
        return true; 
    }
}
/************************************************************************************************
 *                                              Validation ::printMap()
 * Description: Prints the map for the game
 ************************************************************************************************/
void Game::printMap()
{
    cout << "Here is a map of the dungeon the word 'Prisoner' marks your current space:\n";

    for(int i = 0; i <= 8; i++)
    {
        if(i == 0)
            cout <<"------------------------------------------------------------------------------------\n";

         cout << "||" << spaces[i]->returnString() << "||" << endl; //prints the name of the space

        if(i == 8)
            cout <<"------------------------------------------------------------------------------------\n";
    }


}

/************************************************************************************************
 *                                              Validation ::spaceEvent()
 * Description: runs the spaces event.
 ************************************************************************************************/
void Game::spaceEvent()
{
    currentSpace->specialEvent(); 

}
/************************************************************************************************
 *                                              Validation ::movePlayer()
 * Description: Prints the prompt to move the player and validates the move. 
 ************************************************************************************************/
bool Game::movePlayer()
{
    bool check = false;
    do
    {
        cout << "Would you like to go down a room in the dungeon or go back up way you came?\n";
        cout << "1. Go down a room\n";
        cout << "2. Go back up the way you came\n";
        cout << "3. Quit the current Session\n";
        int selection;
        selection = validateIntegerAgain();
        if (selection == 1)
        {
            check = nextSpace();
            return quitGame; 
        }
        else if(selection == 2)
        {
            check = previousSpace();
            return quitGame; 
        }
        else 
        {
            check = true; 
            quitGame = true; 
            return quitGame; 
        }
    } while (check == false);
}
/************************************************************************************************
 *                                              Validation ::checkLoser()
 * Description: check if palyer lost.
 ************************************************************************************************/
bool Game::checkLoser()
{

    if(currentSpace->player->getStrength() <= 0 || currentSpace->returnBool() == true) //if player has zero or less health or the player won the game the game will quit
        return quitGame = true;

    else
    {
        return quitGame = false; 
    }
     
}






