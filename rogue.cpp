#include "rogue.h"
#include <iostream>
using namespace std;
// When Rogue constructor is called, instantiate the Character
// constructor and pass the name from the Rogue constuctor into it
Rogue::Rogue(string name) :Character(name)
{
   armorClass= 11;
   endurance = 5;
   remainingHealth = endurance;
    // Assign the values for the weapon and weapon action arrays
    weapons[0] = "dagger";
    weapons[1] = "dual daggers";
    weapons[2] = "short sword";
    weapons[3] = "raiper";
    weapons[4] = "shortbow";
    weapons[5] = "longbow";
    weapons[6] = "light crossbow";
    weapons[7] = "sling";
    weapons[8] = "spear";
    weapons[9] = "sickle";
    
    weaponAction[0] = " stabbing ";
    weaponAction[1] = " slashing ";
    weaponAction[2] = " slashing ";    
    weaponAction[3] = " piercing ";
    weaponAction[4] = " shooting ";
    weaponAction[5] = " shooting ";
    weaponAction[6] = " shooting ";
    weaponAction[7] = " bludgeoning ";
    weaponAction[8] = " piercing ";
    weaponAction[9] = " slashing ";
    //cout << "Rogue constructor " << endl;
};



