#include "HumanB.hpp"

HumanB::HumanB(void)
{
    //constructor
}

HumanB::HumanB(std::string name)
{
    //constructor parametrique
    _name = name;
}

HumanB::~HumanB(void)
{
    //destructor
    std::cout << _name << " leaves (destructor)" << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}

void    HumanB::attack(void)
{
    std::cout << _name << " attacks with " << _weapon->getType() << std::endl;
}