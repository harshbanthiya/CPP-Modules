#include <iostream>
#include "Zombie.h"

int main() {

    Zombie *a;
    a = zombieHorde(5, "Mexican frank");
    delete[] a;
    return 0;
}
