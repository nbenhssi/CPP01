#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::~Zombie()
{
    std::cout << "Zombie " << name << " is being destroyed!" << std::endl;
}

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