#include <iostream>
#include <fstream>
#include <string>

void    search_and_replace(char **argv)
{
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::ifstream   ifs(filename.c_str());
    if (!ifs)
    {
        std::cerr << "ERROR - Cant open the file: " << filename << std::endl;
        return ;
    }
    std::string str;
    getline(ifs, str, '\0');
    ifs.close();
    filename = filename + ".replace";
    std::ofstream   ofs(filename.c_str());
    if (!ofs)
    {
        std::cerr << "ERROR - Cant open the file: " << filename << std::endl;
        ifs.close();
        return ;
    }
    std::size_t pos;
    do
    {
        pos = str.find(s1);
        if (pos != std::string::npos)
        {
            str.erase(pos, s1.length());
            str.insert(pos, s2);
        }
    } while (pos != std::string::npos);      
    ofs << str;  
    ofs.close();
}

int main(int argc, char **argv)
{
    if (argc == 4)
        search_and_replace(argv);
    else
        std::cout << "USAGE: ./ex04 <filename> <s1> <s2>" << std::endl;
    return (0);
}