/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        12/2/2019
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
 * Description: prints starting menu
 ************************************************************************************************/
void printMenu1()
{
        cout << "Lets play a dungeon crawler game!\n"; 
        cout << "Please enter one of the integers below and press enter to select one of the below menu options\n";
        cout << "1. Play Game\n";
        cout << "2. Quit Game\n";

}
/************************************************************************************************
 *                                              Validation ::printMenu2()
 * Description: prints starting menu
 ************************************************************************************************/
void printMenu2()
{
        
        cout << "You wake up suddenly in a dungeon cell ...\n";
        
        
}
/************************************************************************************************
 *                                              Validation ::playAgain()
 * Description: prints starting menu
 ************************************************************************************************/
void playAgain()
{
    cout << "Would you like to play again?\n";
    cout << "1. Play Again\n";
    cout << "2. Quit Game\n";
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
        else if(userInput > 3 || userInput < 1)
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