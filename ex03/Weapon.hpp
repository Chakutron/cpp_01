#pragma once

#include <string>
#include <iostream>

class   Weapon
{
    public:
        Weapon();
        Weapon(std::string weapontype);
        ~Weapon();
        const std::string   &getType(void);
        void                setType(std::string weapontype);
    private:
        std::string _type;
};