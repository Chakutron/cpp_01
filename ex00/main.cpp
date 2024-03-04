#include "Zombie.hpp"
#include <string>

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(void)
{
    Zombie  *z1;
    Zombie  *z2;

    z1 = newZombie("Trorioll");
    z2 = newZombie("Chaku");
    z1->announce();
    z2->announce();
    randomChump("Adriano");
    randomChump("Theouche");
    delete(z1);
    delete(z2);
    return (0);
}