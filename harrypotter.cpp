/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        11/7/2019
 ** Description: This header file contains the functions for the harrpotter class. 
 ***************************************************************************************************/
#include "harrypotter.hpp"
using std::cout; 
/************************************************************************************************
 *                                              Validation ::calculateAttack()
 * Description: calculates the attack of the HarryPotter
 ************************************************************************************************/
void HarryPotter::calculateAttack()
{
    int attack1, attack2; 

    attack1 = rand() % 6 + 1;

    attack2 = rand() % 6 + 1;  

    attack = attack1 + attack2; 
    
}
/************************************************************************************************
 *                                              Validation ::calculateDefense()
 * Description: calculates the defense of  HarryPotter
 ************************************************************************************************/
void HarryPotter::calculateDefense()
{
    int defense1, defense2; 

    defense1 = rand() % 6 + 1; 
    defense2 = rand() % 6 + 1; 

    defense = defense1 + defense2; 

}
/************************************************************************************************
 *                                              Validation ::calculateDamage()
 * Description: calculates the damage dealt to HarryPotter & if he comes back to life or not with
 * more health or dies for good. 
 ************************************************************************************************/
void HarryPotter::calculateDamage(int attackRoll)
{
    damage = attackRoll - defense - armor; 

    if(damage <= 0)
        strength = strength; 

    else
    {
        strength = strength - damage; 
        if(strength <= 0 && life == 1)
        {
            strength = 20; 
            life = life - 1; 
        }
        else if(strength <= 0 and life == 0)
        {
           //harry dies for real
        }

    }
}


