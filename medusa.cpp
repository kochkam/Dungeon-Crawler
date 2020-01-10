/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        11/7/2019
 ** Description: This implementation file contains the medusa class functions. 
 ***************************************************************************************************/
#include "medusa.hpp"
using std::cout; 
/************************************************************************************************
 *                                              Validation ::calculateAttack()
 * Description: calculates the attack of the Medusa and implements glare ability
 ************************************************************************************************/
void Medusa::calculateAttack()
{
    int attack1, attack2; 

    attack1 = rand() % 6 + 1;

    attack2 = rand() % 6 + 1;  

    attack = attack1 + attack2; 

    if(attack == 12)
    {
        attack = 10000; 
    }
    
}
/************************************************************************************************
 *                                              Validation ::calculateDefense()
 * Description: calculates the defense of the Medusa
 ************************************************************************************************/
void Medusa::calculateDefense()
{
    int defense1; 

    defense1 = rand() % 6 + 1; 

    defense = defense1; 

}
/************************************************************************************************
 *                                              Validation ::calculateAttack()
 * Description: calculates the damage done to Medusa
 ************************************************************************************************/
void Medusa::calculateDamage(int attackRoll)
{
    damage = attackRoll - defense - armor; 

    if(damage <= 0)
        strength = strength; 

    else
        strength = strength - damage; 
}
