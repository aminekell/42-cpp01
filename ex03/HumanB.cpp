#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string _name) : name(_name), weapon(NULL)
{
}

void HumanB::attack(){
    if(!weapon)
    {
        std::cout << "he need a weapon" << std::endl;
        return ;
    }
    std::cout << name << " attacks with their " << weapon->getType();
}

void HumanB::setWeapon(Weapon& new_weapon)
{
    weapon = &new_weapon;
}