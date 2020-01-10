/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        11/7/2019
 ** Description: This implemenation file contains functions that print the starting menu and 
  validates user input. 
 ***************************************************************************************************/
#include <iostream> 
#include "validation.hpp"
#include <string> 
#include<limits>
using std::numeric_limits;
using std::cin; 
using std::cout; 
using std::streamsize; 

/************************************************************************************************
 *                                              Validation ::printMenu1()
 * Description: prints character options menu
 ************************************************************************************************/
void printMenu1()
{
    cout << "Player 1 select a character from the below options by typing 1, 2, 3, 4 or 5 and press enter.\n";
    cout << "1. Vampire: Suave, debonair, but vicious and surprisingly resilient.\n";
    cout << "2. Barbarian: Big sword, big muscles, big ego.\n";
    cout << "3. Blue Men: They are small, 6 inch tall, but fast and tough.\n";
    cout << "4. Medusa: Scrawny lady with snakes for hair which helps her during combat.\n";
    cout << "5. Harry Potter: Slayer of Voldemort and wizard extrodinaire.\n";
}

/************************************************************************************************
 *                                              Validation ::printMenu1()
 * Description: prints character options menu
 ************************************************************************************************/
void printList()
{
    cout << "Please select one of the options below by entering 1 or 2 and pressing enter\n";
    cout << "1. Print list of characters that lost\n";
    cout << "2. Skip printing the list\n";

}
/************************************************************************************************
 *                                              Validation ::printMenu2()
 * Description: prints starting menu
 ************************************************************************************************/
void printMenu2()
{
        
        cout << "Player 2 select a character from the below options by typing 1, 2, 3, 4 or 5 and press enter.\n";
        cout << "1. Vampire: Suave, debonair, but vicious and surprisingly resilient.\n";
        cout << "2. Barbarian: Big sword, big muscles, big ego.\n";
        cout << "3. Blue Men: They are small, 6 inch tall, but fast and tough.\n";
        cout << "4. Medusa: Scrawny lady with snakes for hair which helps her during combat.\n";
        cout << "5. Harry Potter: Slayer of Voldemort and wizard extrodinaire.\n";
        
}
/************************************************************************************************
 *                                              Validation ::playAgain()
 * Description: prints starting menu
 ************************************************************************************************/
void playAgain()
{
    cout << "Please select one of the options below by entering 1 or 2 and pressing enter\n";
    cout << "1. Play Again\n";
    cout << "2. Quit Game\n";
}
/************************************************************************************************
 *                                              Validation ::playGameMenu()
 * Description: prints starting menu
 ************************************************************************************************/
void playGameMenu()
{
    cout << "Welcome to tournament style combat! Please select one of the below options by entering 1 or 2 and pressing enter\n";
    cout << "1. Play Game\n";
    cout << "2. Exit Game\n";
}
/************************************************************************************************
 *                                              Validation ::playGameMenu()
 * Description: prints starting menu
 ************************************************************************************************/
void printTeam()
{
    cout << "Please enter a positive integer no greater the 20 for the number of players you would like on each team:\n";


}

/************************************************************************************************
 *                                              Validation ::validateIntegerAgain()
 * Description: Validates users integer input
 ************************************************************************************************/
int validateIntegerAgain()
{
    bool validEntry;  //Loop control variable
    int userInput; 
    do{
        cin  >> userInput; 

        if(cin.fail()) //If user input fails, the user is reprompted
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            validEntry = false;

            cout << "Invalid Entry. Try again.\n";
        }
        else if(cin.peek() != '\n')  //If user input has trailing characters, the flags are cleared and the stream is cleared.

        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            validEntry = false;

            cout << "Entry was not an integer. Please try again.\n";
        }
        //If user input is outside expected range, the user is reprompted
        else if(userInput > 2 || userInput < 1)
        {
            validEntry = false;

            cout << "Entry was not in expected range. Please try again.\n";
        }
        else
        {
            validEntry = true;
        }

    }while(validEntry == false);

    return userInput; 

}

/************************************************************************************************
 *                                              Validation ::validateInteger()
 * Description: Validates users integer input
 ************************************************************************************************/
int validateInteger()
{
    bool validEntry;  //Loop control variable
    int userInput; 
    do{
        cin  >> userInput; 

        if(cin.fail()) //If user input fails, the user is reprompted
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            validEntry = false;

            cout << "Invalid Entry. Try again.\n";
        }
        else if(cin.peek() != '\n')  //If user input has trailing characters, the flags are cleared and the stream is cleared.

        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            validEntry = false;

            cout << "Entry was not an integer. Please try again.\n";
        }
        //If user input is outside expected range, the user is reprompted
        else if(userInput > 5 || userInput < 1)
        {
            validEntry = false;

            cout << "Entry was not in expected range. Please try again.\n";
        }
        else
        {
            validEntry = true;
        }

    }while(validEntry == false);

    return userInput; 
}
/************************************************************************************************
 *                                              Validation ::validateTeam()
 * Description: Validates users integer input
 ************************************************************************************************/
int validateTeam()
{
    bool validEntry;  //Loop control variable
    int userInput; 
    do{
        cin  >> userInput; 

        if(cin.fail()) //If user input fails, the user is reprompted
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            validEntry = false;

            cout << "Invalid Entry. Try again.\n";
        }
        else if(cin.peek() != '\n')  //If user input has trailing characters, the flags are cleared and the stream is cleared.

        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            validEntry = false;

            cout << "Entry was not an integer. Please try again.\n";
        }
        //If user input is outside expected range, the user is reprompted
        else if(userInput > 20 || userInput < 1)
        {
            validEntry = false;

            cout << "Entry was not in expected range. Please try again.\n";
        }
        else
        {
            validEntry = true;
        }

    }while(validEntry == false);

    return userInput; 

}

/************************************************************************************************
 *                                              Validation ::validateTeam()
 * Description: Validates users integer input
 ************************************************************************************************/
string validateName()
{
    bool validEntry;  //Loop control variable
    string userInput; 
    do{
        cin  >> userInput; 

        if(cin.fail()) //If user input fails, the user is reprompted
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            validEntry = false;

            cout << "Invalid Entry. Try again.\n";
        }
        else if(cin.peek() != '\n')  //If user input has trailing characters, the flags are cleared and the stream is cleared.

        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            validEntry = false;

            cout << "Entry was not valid. Please try again.\n";
        }
        else
        {
            validEntry = true;
        }

    }while(validEntry == false);

    return userInput; 

}
