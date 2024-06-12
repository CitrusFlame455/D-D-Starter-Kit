#include "character.h"
#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

// character constuctor takes in the name of the character
Character::Character(std::string name)
{
    charName = name;
    //cout << "character constructor" << endl;
}


// setName function can be used to change the character's name
void Character::setName(std::string name) 
{
    charName = name;
    //cout << "setName member function" << endl;
}

// get name can be used to retrive the character's name
std::string Character::getName() 
{
    return charName;
}

int Character::selectWeapon() 
{
    int weaponID;
    // loop through all the weapons a character has and print them out
    for (int i=0; i < MAXNUMOFWEAPONS; i++) 
        std::cout << i+1 << ". " << weapons[i] << std::endl;

    // get a weapon based on the users choice
    do
    {
       std::cout << "Select a weapon: ";
       std::cin >> weaponID;

       //std::cout << std::endl;
    } 
    while (weaponID < 1 || weaponID > 10);
		

    // return the ID of that weapon
    return (weaponID);
}

int Character::attack(int weaponID, std::string opponent) 
{

    
    srand((unsigned)time(0)); 
    int percentDie = (rand()%20)+1; // A d20, a dice with 20 sides
    int damageDie = (rand()%3)+1;	// A d3, a dice with 3 sides
    
    
    std::cout << "\nYou rolled a " << percentDie << endl;
    
    if (percentDie > armorClass)
    {
		
		std::cout << charName << " used a " << weapons[weaponID - 1] << weaponAction[weaponID - 1]
				  << "their opponent\n" << charName << " dealt " << damageDie
				  << " damage "  << endl;
			 
			 return 0;
	}
	
	else 
	{
		std::cout << charName << " used a " << weapons[weaponID - 1] << " but unfortunately missed." << endl;
			 
			 return 0;
	}
    
    
    
    // calls the selectWeapon function and make the character select a weapon
    
    // tenSidedDiceRoll = a random value between 0 and 1 and multiply by 20
    
    // print out what number was rolled
    
    // print out the character name, weapon used and the weapon's action
        
    // if the roll number was greater than armor class display a message
    // indicating the hit results and the opponent name return a 1

    // if the roll was not greater than the armor class
    // display the non hit results and the opponent's name, return 0
}


int Character::hitByOpponent(int hit)
{

	srand((unsigned)time(0));
	int percentDie = (rand()%20)+1; // A d20, a dice with 20 sides
	int damageDie = (rand()%3)+1;	// A d3, a dice with 3 sides

	
	if (endurance - damageDie > 0 && percentDie > armorClass)
	{
		std::cout << charName << " now has " << endurance - damageDie << " health left \n" << endl;
		endurance = endurance - damageDie;
		return hit;
	}
	
	else if (endurance - damageDie <= 0 && percentDie > armorClass)
	{
		std::cout << "\n" << charName << " died\n\n" << endl;
		hit = 0;
		return hit;

	}
	
	else
	{
		std::cout << charName << " still has " << endurance << " health left\n " << endl;
		return hit;
	}

			
	
    // reduce the remaining health points by the hit point
        
    // checks if the character has any health points left 
	// if yes, display hit was success and current health points return 1
	// if no, display character name, "End of Character" message, return 0 
   
}
