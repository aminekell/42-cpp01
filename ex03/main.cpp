#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    //reference :)
    {
        Weapon club = Weapon("crude spiked club\n");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club\n");
        bob.attack();
    }
    
    //pointer :)
    {
        Weapon club = Weapon("crude spiked club\n");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club\n");
        jim.attack();
    }
    return 0;
}