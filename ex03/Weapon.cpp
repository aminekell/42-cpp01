#include "Weapon.hpp"

//Constructor 
Weapon::Weapon(std::string init_type)
    : type(init_type)
{
}
//getter
const std::string &Weapon::getType()
{
    return type;
}
//setter
void Weapon::setType(std::string new_type)
{
    type = new_type;  
}
