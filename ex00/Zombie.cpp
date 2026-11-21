#include "Zombie.hpp"

void Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::~Zombie()
{
    std::cout << name << " destroyed" << std::endl;
}

Zombie::Zombie(std::string new_name)
{
    name = new_name;
}