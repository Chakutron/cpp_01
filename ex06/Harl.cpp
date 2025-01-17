#include "Harl.hpp"

Harl::Harl(void)
{
    //constructor
    _selector[0] = &Harl::debug;
    _selector[1] = &Harl::info;
    _selector[2] = &Harl::warning;
    _selector[3] = &Harl::error;
}

Harl::~Harl(void)
{
    //destructor
}

void    Harl::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int         i = 0;

    while (i < 4)
    {
        if (level == levels[i])
            break ;
        i++;
    }
    switch (i)
    {
        case 0:
            (this->*_selector[0])();
            // Intentional fallthrough
        case 1:
            (this->*_selector[1])();
            // Intentional fallthrough
        case 2:
            (this->*_selector[2])();
            // Intentional fallthrough
        case 3:
            (this->*_selector[3])();
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

void    Harl::debug(void)
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::endl;
}

void    Harl::info(void)
{
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void    Harl::error(void)
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}