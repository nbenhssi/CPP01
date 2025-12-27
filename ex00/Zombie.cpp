#include "Zombie.h"

void Zombie::announce(void)
{
    std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::get_name()
{
    return(name);
}

void Zombie::set_name(std::string name)
{
    this->name = name;
}