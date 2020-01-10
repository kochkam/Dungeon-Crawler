/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        11/24/2019
 ** Description: This header file contains prototype functions that control the flow of the game. 
 ***************************************************************************************************/
#ifndef CREATECHARACTER_HPP
#define CREATECHARACTER_HPP
#include "character.hpp"
#include "medusa.hpp"
#include "barbarian.hpp"
#include "Vampire.hpp"
#include "harrypotter.hpp"
#include "bluemen.hpp"
#include "validation.hpp"
#include "playerOneQueue.hpp"
#include "playerTwoQueue.hpp"
#include "loserQueue.hpp"

class Fantasy
{
    private: 
        Character *characterOnePtr; 
        Character *characterTwoPtr; 
        PlayerOneQueue playerOne; 
        PlayerTwoQueue playerTwo; 
        LoserQueue list; 
        int player1Points = 0; 
        int player2Points = 0; 
    
    public:
        void createCharacter1(int player1);
        void createCharacter2(int player2);  
        void seedGenerator(); 
        void deletePtrs(); 
        void printRoundOne(); 
        void printRoundTwo(); 
        int getPlayerOneStr(); 
        int getPlayerTwoStr(); 
        int checkRoundWinner(); 
        void checkWinner(); 
        void setPlayerOneName(); 
        void setPlayerTwoName(); 
        string getPlayerOneName(); 
        string getPlayerTwoName(); 
        bool playerOneLost(); 
        bool playerTwoLost(); 
        void nextCombatants();      
        void printResult(); 
        void printLosers(int selection); 
};


#endif