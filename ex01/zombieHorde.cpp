#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if(N <= 0)
        return NULL;
    Zombie *Hord = new Zombie[N];
    for(int i = 0; i < N; i++)
        Hord[i].set_name(name);
    return Hord;
}