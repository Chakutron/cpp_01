#pragma once

#include "Weapon.hpp"
#include <string>
#include <iostream>

class   HumanB
{
    public:
        HumanB(std::string name);
        ~HumanB();
        void    setWeapon(Weapon &weapon);
        void    attack(void);
    private:
        HumanB();
        Weapon  *_weapon;
        std::string _name;
};