/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        12/1/2019
 ** Description: This is the cell class implementation file and it contains the cell class specifications
 and simulation for when the game starts. 
 ***************************************************************************************************/
#include "validation.hpp"
#include "cell.hpp"
using std::cout; 

/************************************************************************************************
 *                                              Validation ::specialEvent()
 * Description: Prints the games goal or objective to win and asks if you are ready to open the cell 
 * door to begin
 ************************************************************************************************/
void Cell::specialEvent()
{
        cout << "Today is the day you escape your cell and escape the dungeon.\n";
        cout << "To win you must make your way to the exit of the dungeon and find a key in one of the armories to unlock the door\n";
        cout << "Guards lay in wait at every corner and if your health reaches 0 you will lose.\n";
        cout << "You will find various items such as armor and weapons to help you through your journey.\n";
        cout << "You can only have three items equipped at one time so choose wisely!!!";

        cout << "\n\nWould you like to open the door and start your escape?\n";
        cout << "1. Yes\n";
        cout << "2. No\n";
        int selection; 
        selection = validateInteger(); //check if user would like to leave the cell

        while ( selection != 1)
        {
            cout << "\n\nLame! Are you ready to escape NOW!?\n";
            cout << "1. Yes\n";
            cout << "2. No\n";
            selection = validateInteger();
        }
}