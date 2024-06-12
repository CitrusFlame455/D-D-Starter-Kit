#include <iostream>
#include <cstdlib>

#include "wizard.h"
#include "rogue.h"
#include "warrior.h"
//#include "engineer.h"
#include "character.h"

using namespace std;

void createCharacter(string charName, Character*& one);

// NOTE!!!
/* 
    If you do not want to use std:: everytime you want to use cout or cin
    you can type the statement "using namespace std;" at the top of the
    Character class. Then you can use the find/replace feature in each
    file to replace all instances of "std::" with "". That should remove  
    all the instances of "std::" in the code.
*/
int main()
 {
    // variable declaration and initialization
    string myName, yourName;
    Character *player, *opponent;
    int weaponID = 0, hit = 1;

   cout << "\n Welcome to CSCI 220 - Gametime!"
        << endl;
         
    createCharacter(myName, player);
    createCharacter(yourName, opponent);

    // call createCharacter for your character
    // call createCharacter for your opponent's character   
    
    
    // loop until either character "dies"
    cout << "***** Combat Time ***** \n" << endl;

 
    while(hit == 1)
    {
		cout << "----- " << player->getName() << "'s turn -----\n " << endl;
		weaponID = player->selectWeapon();
		player->attack(weaponID,yourName);
		hit = opponent->hitByOpponent(hit);
		
		if (hit == 0)
		{
			cout << "***** Game Over " << player->getName() << " Wins *****\n\n";
			break;
		}
		
		cout << "----- " << opponent->getName() << "'s turn -----\n " << endl;
		weaponID = opponent->selectWeapon();
		opponent->attack(weaponID,myName);
		hit = player->hitByOpponent(hit);
		
		if (hit == 0)
		{
			cout << "***** Game Over " << opponent->getName() << " Wins *****\n\n";
			break;
		}
		
		
	// my character calls the attack member function
        
	// if my attack was a success
	//    display "Good Hit for ME!"
	//    update hit - call hitByOpponent for other character       
        
         // 0.0if (hit points not 0)
         // 0.0{
			// 0.0std::cout << "pog";
	    // my opponent calls the attack member function           
          
           // if my opponent's attack was a success
	   //    display "Good Hit for my opponent!"
	   //    update hit - call hitByOpponent for my character  
         // 0.0}// if I am still alive       
        
     } // if either player dies, the while loop breaks
    
}

// I implemented a createCharacter() function to create the character for me
// other than repeating the same lines of code in my main function
void createCharacter(string charName, Character*& one)
{
    int charChoice;
    string className;

    // Ask the user for character type and name
    cout << "1. Wizard\n2. Rogue\n3. Warrior" << endl;
    cout << "Choose a character type: ";
    cin >> charChoice;
    cout << "Enter your character's name: ";
    cin >> charName;
    
    // instantiate character object based on the specified character type
    // and use charName as the name of the character.
    if (charChoice == 1) 
    {
		className = "Wizard";
		one = new Wizard(charName);
	// dynamically allocate the Wizard Character and assign it to one
        
    }
    else if (charChoice == 2) 
    {
		className = "Rogue";
		one = new Rogue(charName);
		
        // dynamically allocate the Rogue Character and assign it to one
    }
    else if (charChoice == 3) 
    {
		className = "Warrior";
		one = new Warrior(charName);
		
        // dynamically allocate the ?? Character and assign it to one      
    }
    
    cout << "\n A " << className << " named " << charName << " has been created \n " << endl;
    
}



