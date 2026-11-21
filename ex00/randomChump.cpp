#include "Zombie.hpp"

void randomChump( std::string name )
{
   Zombie stack_Zombie =  Zombie(name);
   stack_Zombie.announce();
}