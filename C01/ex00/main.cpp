#include <iostream>
#include "Zombie.h"

int main() {
    Zombie stackz("stacky");
    stackz.announce();
    Zombie *heapy = newZombie("heapy");
    heapy->announce();
    randomChump("chumpstack");
    delete(heapy);
    std::cout << "Zombie deleted from heap" << std::endl;
    return 0;
}
