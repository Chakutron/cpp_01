#pragma once

#include <string>
#include <iostream>

class   Zombie
{
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void    announce(void);
    private:
        std::string _name;
};