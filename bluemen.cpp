/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        11/7/2019
 ** Description: This implementation file contains functions for the bluemen class. 
 ***************************************************************************************************/
#include "bluemen.hpp"
using std::cout; 
/************************************************************************************************
 *                                              Validation ::calculateAttack()
 * Description: calculates the attack of the BlueMen
 ************************************************************************************************/
void BlueMen::calculateAttack()
{
    int attack1, attack2; 

    attack1 = rand() % 10 + 1;

    attack2 = rand() % 10 + 1;  

    attack = attack1 + attack2; 
    
}
/************************************************************************************************
 *                                              Validation ::calculateDefense()
 * Description: calculates the defense of the BlueMen and # of dice go down as bleumens health 
 * decreases. 
 ************************************************************************************************/
void BlueMen::calculateDefense()
{
    int defense1, defense2, defense3; 

    if(strength > 8)
    {
        defense1 = rand() % 6 + 1; 
        defense2 = rand() % 6 + 1; 
        defense3 = rand() % 6 + 1; 

        defense = defense1 + defense2 + defense3; 
    }
    else if(strength > 4 && strength < 8)
    {
        defense1 = rand() % 6 + 1; 
        defense2 = rand() % 6 + 1;
        defense = defense1 + defense2;
    }
    else
    {
        defense1 = rand() % 6 + 1;
        defense = defense1;  
    }
    

}
/************************************************************************************************
 *                                              Validation ::calculateDamage()
 * Description: calculates the damage of the BlueMen
 ************************************************************************************************/
void BlueMen::calculateDamage(int attackRoll)
{
    damage = attackRoll - defense - armor; 

    if(damage <= 0)
        strength = strength; 

    else
        strength = strength - damage; 
}
