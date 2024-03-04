#include <string>
#include <iostream>

int main(void)
{
    std::string stringSTR = "HI THIS IS BRAIN";
    std::string *stringPTR = &stringSTR;
    std::string &stringREF = *stringPTR;
    std::cout << &stringSTR << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
    std::cout << stringSTR << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
    return (0);
}