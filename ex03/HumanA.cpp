#include "HumanA.hpp"

HumanA::HumanA(void)
{
    //constructor
}

HumanA::HumanA(std::string name, Weapon &weapon)
{
    //constructor parametrique
    _name = name;
    _weapon = &weapon;
}

HumanA::~HumanA(void)
{
    //destructor
    std::cout << _name << " leaves (destructor)" << std::endl;
}

void    HumanA::attack(void)
{
    std::cout << _name << " attacks with " << _weapon->getType() << std::endl;
}