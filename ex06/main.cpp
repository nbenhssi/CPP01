#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr<<"Usage : ./harlFilter <level>" <<std::endl;
        return (1);
    }
    std::string level = av[1];
    Harl h;
    h.complain(level);
}