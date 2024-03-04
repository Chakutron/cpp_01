#include "Zombie.hpp"
#include <string>

Zombie* zombieHorde(int N, std::string name);

int main(void)
{
    Zombie  *tmp;
    int     N = 10;
    int     i = 0;

    tmp = zombieHorde(N, "Troriolus");

    while (i < N)
    {
        tmp[i].announce();
        i++;
    }
    delete [] tmp;
    return (0);
}