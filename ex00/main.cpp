#include "Zombie.hpp"

int main()
{
    Zombie *zombie;
    zombie = newZombie("foo");
    zombie->get_name();
    randomChump("noura");
    delete zombie;
}
