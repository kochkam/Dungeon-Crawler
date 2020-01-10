/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        11/7/2019
 ** Description: This implementation file contains functions that calculate this characters attack
 defense and damage delt to it.  
 ***************************************************************************************************/
#include "barbarian.hpp"
using std::cout; 
/************************************************************************************************
 *                                              Validation ::calculateAttack()
 * Description: calculates the attack of the barbarian
 ************************************************************************************************/
void Barbarian::calculateAttack()
{
    int attack1, attack2; 

    attack1 = rand() % 6 + 1;

    attack2 = rand() % 6 + 1;  

    attack = attack1 + attack2; // calculate total attack 
    
}
/************************************************************************************************
 *                                              Validation ::calculateDefense()
 * Description: calculate total defense of the barbarian
 ************************************************************************************************/
void Barbarian::calculateDefense()
{
    int defense1, defense2; 

    defense1 = rand() % 6 + 1; 
    defense2 = rand() % 6 + 1; 

    defense = defense1 + defense2; //calculate total defense

}
/************************************************************************************************
 *                                              Validation ::calculateDamage()
 * Description: calculates the total strength after damage is inflicted
 ************************************************************************************************/
void Barbarian::calculateDamage(int attackRoll)
{
    damage = attackRoll - defense - armor; 

    if(damage <= 0)
        strength = strength; 

    else
        strength = strength - damage; 
}


