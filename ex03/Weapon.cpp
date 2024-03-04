#include "Weapon.hpp"

Weapon::Weapon(void)
{
    //constructor
    std::cout << "A weapon is created. (constructor)" << std::endl;
}

Weapon::Weapon(std::string weapontype)
{
    //constructor parametrique
    _type = weapontype;
    std::cout << _type << " is created. (constructor parametrique)" << std::endl;
}

Weapon::~Weapon(void)
{
    //destructor
    std::cout << _type << " is destroyed. (destructor)" << std::endl;
}

const std::string    &Weapon::getType(void)
{
    return (_type);
}

void    Weapon::setType(std::string weapontype)
{
    _type = weapontype;
}
