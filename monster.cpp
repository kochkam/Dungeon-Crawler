/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        12/1/2019
 ** Description: This is the main function for the final project
 ***************************************************************************************************/
#include "monster.hpp"
#include "validation.hpp"
using std::cout; 

/************************************************************************************************
 *                                              Validation ::specialEvent()
 * Description: calculates who goes first and runs the simualtion for the player fighting the guard
 ************************************************************************************************/
void Monster::specialEvent() 
{
    one = new Guard; //create guard object to fight
    int choice; 
    cout << "As you enter the room you see an armor clad guard enjoying a meal....\n";
    cout << "Would you like to ambush him or warn him and have an honorable fight?\n";
    cout << "1. To attack first and ambush the guard\n";
    cout << "2. Defend first and fight the guard on even terms\n";
    choice = validateInteger(); //select who attacks first 

    if (choice == 1)
    {

        while (player->getStrength() > 0 && one->getStrength() > 0)
        {
            player->calculateAttack(); //player attacks first
            one->calculateDefense();
            one->calculateDamage(player->getAttack());

            if (one->getStrength() > 0) //check if guard was defeated 
            {
                one->calculateAttack(); 
                player->calculateDefense(); 
                player->calculateDamage(one->getAttack()); 
            }

            if (player->getStrength() <= 0) //check if player has died
            {
                cout << "Your ambush failed and the guard killed you while you were sneaking up on him.\n";
                cout << "Game Over!!!\n";
                status = 0;
            }
            else if (one->getStrength() <= 0) //check if guard died
            {
                cout << "Your ambush worked and the guard was defeated\n";
                cout << "You have " << player->getStrength() << " strength points remaining.\n";
                status = 1;
            }
        
        }
    }
    else //guard attack first
    {
        while (player->getStrength() > 0 && one->getStrength() > 0)
        {
            one->calculateAttack();
            player->calculateDefense();
            player->calculateDamage(one->getAttack());

            if (player->getStrength() > 0) // check if player was defearted
            {
                player->calculateAttack();
                one->calculateDefense();
                one->calculateDamage(player->getAttack());
            }

            if (player->getStrength() <= 0)
            {
                cout << "Your ambush failed and the guard killed you while you were sneaking up on him.\n";
                cout << "Game Over!!!\n";
                status = 0;
            }
            else if (one->getStrength() <= 0)
            {
                cout << "Your ambush worked and the guard was defeated\n";
                cout << "You have " << player->getStrength() << " strength points remaining.\n";
                status = 1;
            }
            
        }
    }
    delete one; 
    one = nullptr; 
    
}