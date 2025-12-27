#include "Zombie.h"

int main()
{
    Zombie *zombie;
    randomChump("noura");
    zombie = newZombie("foo");
    zombie->get_name();
    delete zombie;
}