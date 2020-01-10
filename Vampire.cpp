/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        11/7/2019
 ** Description: This implementation file contains the Vampire class functions. 
 ***************************************************************************************************/
#include "Vampire.hpp"
using std::cout; 
/************************************************************************************************
 *                                              Validation ::calculateAttack()
 * Description: calculates the attack of the Vampire
 ************************************************************************************************/
void Vampire::calculateAttack()
{
    int attack1; 

    attack1 = rand() % 12 + 1;

    attack = attack1;
    
}
/************************************************************************************************
 *                                              Validation ::calculateDefense()
 * Description: calculates the defense roll of the vampire
 ************************************************************************************************/
void Vampire::calculateDefense()
{
    int defense1; 

    defense1 = rand() % 6 + 1; 

    defense = defense1; 

}
/************************************************************************************************
 *                                              Validation ::calculateDamage()
 * Description: calculates the damage done to vampire (subtracts strrngth points) and if the charm ability goes into effect.
 ************************************************************************************************/
void Vampire::calculateDamage(int attackRoll)
{
    int charm = rand() % 2 + 1; 

    if(charm == 1)
    {
        damage = attackRoll - defense - armor; 
    }
    else 
    {
        damage = 0; 
    }

    if(damage <= 0)
        strength = strength; 

    else
        strength = strength - damage; 
}
