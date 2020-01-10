/***************************************************************************************************
 ** Author:      Michael Kochka
 ** Date:        11/7/2019
 ** Description: This is the implementation file for the character class. 
 ***************************************************************************************************/
#include "character.hpp"

/************************************************************************************************
 *                                              Validation ::healCharacter()
 * Description: creates the character of player ones choice 
 ************************************************************************************************/
void Character::healCharacter()
{
  int heal = 0;

  heal = strength * .25; //heal .25% of the remaining health of the chracter that won

  strength = heal + strength; 

}


/*
      virtual ~Character(){;}
        string getType(){return type;}
        int getStrength(){return strength;}
        int getAttack(){return attack;}
        int getDefense(){return defense;}
        int getArmor(){return armor;}
        int getDamage(){return damage;}
        virtual void calculateAttack() = 0; 
        virtual void calculateDefense() = 0; 
        virtual void calculateDamage(int attackRoll) = 0;




*/

