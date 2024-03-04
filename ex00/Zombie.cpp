#include "Zombie.hpp"

Zombie::Zombie(void)
{
    //constructor
    _name = "A zombie";
}

Zombie::Zombie(std::string name)
{
    //constructor parametrique
    _name = name;
}

Zombie::~Zombie(void)
{
    //destructor
    std::cout << _name << " is destroyed." << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
