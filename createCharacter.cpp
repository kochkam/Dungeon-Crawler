/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        11/7/2019
 ** Description: This header file contains prototype functions that control the flow of the game. 
 ***************************************************************************************************/
#include "createCharacter.hpp"
#include <iostream> 
#include <string>
using std::string; 
using std::cout; 
using std::endl;

/************************************************************************************************
 *                                              Validation ::createCharacter1()
 * Description: creates the character of player ones choice 
 ************************************************************************************************/
void Fantasy::createCharacter1(int player1)
{

   if(player1 == 1)
   {
       characterOnePtr = new Vampire; 
       playerOne.enqueue(characterOnePtr);
   }
   else if(player1 == 2)
   {
       characterOnePtr = new Barbarian; 
       playerOne.enqueue(characterOnePtr);
   }
   else if(player1 == 3)
   {

       characterOnePtr = new BlueMen;
       playerOne.enqueue(characterOnePtr); 
   }
   else if(player1 == 4)
   {
       characterOnePtr = new Medusa; 
       playerOne.enqueue(characterOnePtr);
   }
   else if(player1 == 5)
   {
       characterOnePtr = new HarryPotter;
       playerOne.enqueue(characterOnePtr); 
   }
   else
   {
       //nothing happens
   }
    
   


}

/************************************************************************************************
 *                                              Validation ::createCharacter2()
 * Description: creates the character of player twos choice
 ************************************************************************************************/
void Fantasy::createCharacter2(int player2)
{

   if(player2 == 1)
   {
       characterTwoPtr = new Vampire; 
       playerTwo.enqueue(characterTwoPtr);
   }
   else if(player2 == 2)
   {
       characterTwoPtr = new Barbarian; 
       playerTwo.enqueue(characterTwoPtr);
   }
   else if(player2 == 3)
   {
       characterTwoPtr = new BlueMen;
       playerTwo.enqueue(characterTwoPtr); 
   }
   else if(player2 == 4)
   {
       characterTwoPtr = new Medusa; 
       playerTwo.enqueue(characterTwoPtr);
   }
   else if(player2 == 5)
   {
       characterTwoPtr = new HarryPotter; 
       playerTwo.enqueue(characterTwoPtr);
   }
   else
   {
       //nothing happens
   }
}

/************************************************************************************************
 *                                              Validation ::seedGenerator()
 * Description: seed the random number generator
 ************************************************************************************************/
void Fantasy::seedGenerator()
{ 
    unsigned int seed = time(0);
    srand(seed);
}

/************************************************************************************************
 *                                              Validation ::deletePtrs()
 * Description: delete pointers
 ************************************************************************************************/
void Fantasy::deletePtrs()
{
    delete characterOnePtr; 
    delete characterTwoPtr; 
}

/************************************************************************************************
 *                                              Validation ::printRoundOne()
 * Description: simulate player one attacking and calculating defence and damage dealt to palyer two
 ************************************************************************************************/
void Fantasy::printRoundOne()
{
   characterOnePtr->calculateAttack(); 
   characterTwoPtr->calculateDefense(); 
   characterTwoPtr->calculateDamage(characterOnePtr->getAttack()); 
}
/************************************************************************************************
 *                                              Validation ::printRoundTwo()
 * Description: simulate player two attacking and calculating defence and damage dealt to palyer one
 ************************************************************************************************/
void Fantasy::printRoundTwo()
{
   characterTwoPtr->calculateAttack(); 
   characterOnePtr->calculateDefense(); 
   characterOnePtr->calculateDamage(characterTwoPtr->getAttack()); 
}
/************************************************************************************************
 *                                              Validation ::getPlayerOneStr()
 * Description: return the strength of player one
 ************************************************************************************************/
int Fantasy::getPlayerOneStr()
{
    return characterOnePtr->getStrength(); 
}
/************************************************************************************************
 *                                              Validation ::getPlayerTwoStr()
 * Description: return the strength of player two
 ************************************************************************************************/
int Fantasy::getPlayerTwoStr()
{
    return characterTwoPtr->getStrength(); 
}

/************************************************************************************************
 *                                              Validation ::checkWinner()
 * Description: Check to see if either player has won
 ************************************************************************************************/
void Fantasy::checkWinner()
{
    if(characterTwoPtr->getStrength() <= 0)
    {
        cout << "Player One's " << characterOnePtr-> getType() << ", " << characterOnePtr->getName() << ", WON!\n";
        cout << "Player Two's " << characterTwoPtr->getType() << ", " << characterTwoPtr->getName() << ", LOST!\n\n"; 
        characterOnePtr->healCharacter(); //if player one has won they get healed
        playerOne.dequeue();//delete the character at the head of the queue for player one and two
        playerTwo.dequeue(); 
        playerOne.enqueue(characterOnePtr); //put the winner at the back of the queue for player one
        list.addHead(characterTwoPtr); //add player twos character to the loser pile
        player1Points +=1; //add one point to player ones total score

    }
    else if(characterOnePtr->getStrength() <= 0)
    {
        cout << "Player Two's " << characterTwoPtr->getType() << ", " <<characterTwoPtr->getName() << ", WON!\n";
        cout << "Player One's " << characterOnePtr->getType() << ", " <<characterOnePtr->getName() << ", LOST!\n\n";
        characterTwoPtr->healCharacter(); //if player one has won they get healed
        playerOne.dequeue();// delete the character at the head of the queue for player one and two
        playerTwo.dequeue(); 
        playerTwo.enqueue(characterTwoPtr); //put the winner at the back of the queue for player two
        list.addHead(characterOnePtr);//add player ones chracter to the loser pile
        player2Points +=1; //add one point to player twos total score

    }
}
/************************************************************************************************
 *                                              Validation ::checkRoundWinner()
 * Description: check if player two is dead before he attacks
 ************************************************************************************************/
int Fantasy::checkRoundWinner()
{
    if(characterTwoPtr->getStrength() <= 0)
        return 1; 

    else 
        return 0; 
}
/************************************************************************************************
 *                                              Validation ::setPlayerOneName()
 * Description: set the name of player ones characters
 ************************************************************************************************/
 void Fantasy::setPlayerOneName()
 {
    cout << "Please enter a name for your " << characterOnePtr->getType() << ": \n"; 
    string name; 
    name = validateName(); 
    characterOnePtr->setName(name);

 }
 /************************************************************************************************
 *                                              Validation ::setPlayerTwoName()
 * Description: set the name of player twos characters 
 ************************************************************************************************/
void Fantasy::setPlayerTwoName()
{
    cout << "Please enter a name for your " << characterTwoPtr->getType() << ": \n"; 
    string name; 
    name = validateName(); 
    characterTwoPtr->setName(name);
}
/************************************************************************************************
 *                                              Validation ::checkRoundWinner()
 * Description: get the name of the character for player one
 ************************************************************************************************/
string Fantasy::getPlayerOneName()
{
    return characterOnePtr->getName();
}
/************************************************************************************************
 *                                              Validation ::getPlayerTwoName()
 * Description: get the name of the character for player two
 ************************************************************************************************/
string Fantasy::getPlayerTwoName()
{
    return characterTwoPtr->getName(); 
}
/************************************************************************************************
 *                                              Validation ::isEmpty()
 * Description: check if player one queue is empty and if they lost
 ************************************************************************************************/
bool Fantasy::playerOneLost()
{
    if(playerOne.isEmpty() == true)
        return true; 
    
    else 
        return false; 
}
/************************************************************************************************
 *                                              Validation ::playerTwoLost()
 * Description: check if player two queue is empty and if they lost
 ************************************************************************************************/
bool Fantasy::playerTwoLost()
{
    if(playerTwo.isEmpty() == true)
        return true; 
    
    else 
        return false; 
}

/************************************************************************************************
 *                                              Validation ::nextCombatants()
 * Description: Gets the next character in each queue of characters 
 ************************************************************************************************/
void Fantasy::nextCombatants()
{
    characterOnePtr = playerOne.getFront();
    characterTwoPtr = playerTwo.getFront(); 

}

/************************************************************************************************
 *                                              Validation ::printResult()
 * Description: Prints the final score of each palyer and who won
 ************************************************************************************************/
void Fantasy::printResult()
{
    if(playerOne.isEmpty() == true)
    {
        cout << "Final Result:\n";
        cout << "Player Ones score was: " << player1Points << endl; 
        cout << "Player Twos score was: " << player2Points << endl; 
        cout << "Player Two Won!!!\n\n";
    }
    else
    {
        cout << "Final Result:\n";
        cout << "Player Ones score was: " << player1Points << endl; 
        cout << "Player Twos score was: " << player2Points << endl; 
        cout << "Player One Won!!!\n\n";
    }
    player1Points = 0; 
    player2Points = 0; 

}
/************************************************************************************************
 *                                              Validation ::printLosers()
 * Description: Print queue of characters that lost the game
 ************************************************************************************************/
void Fantasy::printLosers(int selection)
{
    if(selection == 1)
    {
        list.printQueue(); 
    }
    else
    {
        cout << "You have decided not to print the list of losers. Good choice!\n";
    }
}
    

