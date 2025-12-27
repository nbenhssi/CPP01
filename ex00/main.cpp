#include "Zombie.h"
#include <cstdlib>
int main()
{
    Zombie *zombie;
    randomChump("noura");
    zombie = newZombie("foo");
    zombie->get_name();
    delete zombie;
}