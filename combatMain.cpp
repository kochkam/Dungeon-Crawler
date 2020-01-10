/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        11/7/2019
 ** Description: This header file contains prototype functions that print the starting menu and 
  validates user input. 
 ***************************************************************************************************/
#include <iostream>
#include <string>
#include "validation.hpp"
#include "barbarian.hpp"
#include "createCharacter.hpp"
using std::endl; 
using std::cout; 
using std::cin; 

int main()
{
    int NumChar = 0; 
    int player1 = 0; 
    int player2 = 0;
    int selection = 1; 
    int count = 0;  

    playGameMenu(); 
    selection = validateIntegerAgain(); 

    if (selection == 1)
    {
        do
        {
            Fantasy game;
            game.seedGenerator();
            printTeam(); 
            NumChar = validateTeam(); 
            for (int count = 0; count < NumChar; count++)
            {
                printMenu1(); //prompt player one for type of character the want to create
                player1 = validateInteger();
                game.createCharacter1(player1);//create character
                game.setPlayerOneName(); //setplayer one characters name
            }
            for (int count = 0; count < NumChar; count++) //repeat the above for loop for player two
            {
                printMenu2();
                player2 = validateInteger();
                game.createCharacter2(player2);
                game.setPlayerTwoName(); 
            }
            while (game.playerOneLost() != true && game.playerTwoLost() != true)
            {
                game.nextCombatants(); 
                cout << "\n\nRound: " << count + 1 << endl << endl;
                while (game.getPlayerOneStr() > 0 && game.getPlayerTwoStr() > 0) //continue playing while both players have health greater then 0
                {
                    game.printRoundOne(); //print first attack and defence sequence

                    if (game.checkRoundWinner() != 1) //check if player two died if not
                        game.printRoundTwo();         //player two attacks

                    game.checkWinner(); //check if either player won
                }
                count++;
            }
            game.printResult(); 
            printList(); 
            selection = validateIntegerAgain(); 
            game.printLosers(selection); 
            game.deletePtrs();
            playAgain(); //print play again menu
            selection = validateIntegerAgain();
            player1 = 0;
            player2 = 0;
            count = 0;
        } while (selection == 1);
    }

    else
    {
        cout << "Goodbye!!!\n";
    }
    

    return 0; 
}