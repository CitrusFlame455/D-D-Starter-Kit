#include "warrior.h"
#include <iostream>
using namespace std;
// When Warrior constructor is called, instantiate the Character
// constructor and pass the name from the Warrior constuctor into it
Warrior::Warrior(string name) :Character(name)
{
   armorClass= 13;
   endurance = 5;
   remainingHealth = endurance;
    // Assign the values for the weapon and weapon action arrays
    weapons[0] = "great axe";
    weapons[1] = "long sword";
    weapons[2] = "short sword";
    weapons[3] = "mace";
    weapons[4] = "axe";
    weapons[5] = "fists";
    weapons[6] = "iron knuckles";
    weapons[7] = "light crossbow";
    weapons[8] = "spear";
    weapons[9] = "sickle";
    
    weaponAction[0] = " slashing ";
    weaponAction[1] = " slashing ";
    weaponAction[2] = " slashing ";    
    weaponAction[3] = " bludgeoning ";
    weaponAction[4] = " slashing ";
    weaponAction[5] = " bludgeoning ";
    weaponAction[6] = " bludgeoning ";
    weaponAction[7] = " shooting  ";
    weaponAction[8] = " piercing ";
    weaponAction[9] = " slashing ";
    //cout << "Warrior constructor " << endl;
};



