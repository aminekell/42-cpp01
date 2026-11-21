#include "Zombie.hpp"
int main()
{
    //stack
    randomChump("Stack Zombie");

    //heap
    Zombie *new_zombie = newZombie("Heap zombie");
    new_zombie->announce();
    delete(new_zombie);
    return 0;
}