//
// Created by Hersh Banthiya on 2022-05-19.
//

#include "Zombie.h"

Zombie::Zombie(const std::string &strname): name(strname) {
    std::cout << "Zombie instance created on stack" << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Zombie instance destroyed from stack" << std::endl;
}

Zombie *newZombie(std::string strname)
{
    Zombie *new_zombie;
    new_zombie = new Zombie(strname);
    std::cout << "Zombie instance created on the heap" << std::endl;
    return (new_zombie);
}
void Zombie::announce() {
    std::cout << name << ": : BraiiiiiiinnnzzzZ..." << std::endl;
}

void randomChump(std::string str) {
    Zombie stack(str);
    stack.announce();
}
