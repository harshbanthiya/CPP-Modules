#include "Zombie.h"

Zombie *newZombie(std::string strname)
{
    Zombie *new_zombie;
    new_zombie = new Zombie(strname);
    std::cout << "Zombie instance created on the heap" << '\n';
    return (new_zombie);
}