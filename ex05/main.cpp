#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl    crazybot;

    if (argc == 2)
        crazybot.complain(argv[1]);
    else
        std::cout << "USAGE: ./ex05 <level>" << std::endl;
    return (0);
}