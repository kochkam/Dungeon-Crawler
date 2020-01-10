/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        12/4/2019
 ** Description: This implementation file contains the Player class functions. 
 ***************************************************************************************************/
#include "player.hpp"
#include "item.hpp"
#include "longsword.hpp"
using std::cout; 
using std::vector; 

/************************************************************************************************
 *                                              Validation ::calculateDamage()
 * Description: calculates the damage done to Player (subtracts strrngth points).
 ************************************************************************************************/
void Player::calculateDamage(int attackRoll)
{
 
    damage = attackRoll - armor; 
    
    if(damage <= 0)
        strength = strength; 

    else
        strength = strength - damage; 
}
/************************************************************************************************
 *                                              Validation ::calculateAttack()
 * Description: calculates the attack of the Player
 ************************************************************************************************/
void Player::calculateAttack()
{
    int attack1; 

    attack1 = rand() % 6 + 1;

    for(int i = 0; i != inventory.size(); i++)
    {
        if(inventory[i].returnId() == 5)
        {   
            attack1 += inventory[i].returnAttack(); 
        }
        if(inventory[i].returnId() == 6)
        {
            attack1 += inventory[i].returnAttack(); 
        }

    }

    attack = attack1;
    
}
/************************************************************************************************
 *                                              Validation ::calculateDefense()
 * Description: calculates the defense roll of the Player
 ************************************************************************************************/
void Player::calculateDefense()
{
    int defense1; 

    defense1 = rand() % 4 + 1; 

    for(int i = 0; i != inventory.size(); i++)
    {
        if(inventory[i].returnId() == 4)
            defense1 += inventory[i].returnDefense(); 
        if(inventory[i].returnId() == 3)
            defense += inventory[i].returnDefense(); 

    }

    defense = defense1; 

}