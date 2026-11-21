#include "Zombie.hpp"

int main()
{
    int number_of_zombie = 20;

    Zombie *horde = zombieHorde(number_of_zombie, "Hord");

     for(int i = 0;  i < number_of_zombie; i++)
        horde[i].announce();
        
    delete[] horde;
    return 0;
}