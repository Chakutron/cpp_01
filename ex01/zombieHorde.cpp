#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie  *tmp = new Zombie[N];
    int     i = 0;

    while (i < N)
    {
        tmp[i].setName(name);
        i++;
    }
    return (tmp);
}