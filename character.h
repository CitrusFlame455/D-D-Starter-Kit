#ifndef CHARACTER
#define CHARACTER

#include <string>
#include <random>
using namespace std;
const int MAXNUMOFWEAPONS = 10;

class Character
{
    protected:
        string charName;
        int armorClass;
        int attackPower;
        int endurance ;
        int remainingHealth ;
        string weapons[MAXNUMOFWEAPONS];
        string weaponAction[MAXNUMOFWEAPONS];
        
    public:
        Character(string name = "");        
        void setName(string name);
        string getName();
        int attack(int weaponID, string opponent);
        int hitByOpponent(int hit);
        int selectWeapon();

};

#endif
