/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        12/4/2019
 ** Description: This implementation file contains the Guard class functions. 
 ***************************************************************************************************/
#include "guard.hpp"
using std::cout; 

/************************************************************************************************
 *                                              Validation ::calculateDamage()
 * Description: calculates the damage done to Guard (subtracts strength points).
 ************************************************************************************************/
void Guard::calculateDamage(int attackRoll)
{
 
    damage = attackRoll - armor; 
    
    if(damage <= 0)
        strength = strength; 

    else
        strength = strength - damage; 
}
/************************************************************************************************
 *                                              Validation ::calculateAttack()
 * Description: calculates the attack of the Guard
 ************************************************************************************************/
void Guard::calculateAttack()
{
    int attack1; 

    attack1 = rand() % 8 + 1;

    attack = attack1;
    
}
/************************************************************************************************
 *                                              Validation ::calculateDefense()
 * Description: calculates the defense roll of the Guard
 ************************************************************************************************/
void Guard::calculateDefense()
{
    int defense1; 

    defense1 = rand() % 2 + 1; 

    defense = defense1; 

}