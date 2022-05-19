//
// Created by Hersh Banthiya on 2022-05-19.
//

#ifndef ZOMBIE_ZOMBIE_H
#define ZOMBIE_ZOMBIE_H
#include <iostream>

class Zombie {
private:
    const std::string name;
public:
    Zombie(const std::string &zombie_name);
    virtual ~Zombie();
    void announce();
};
Zombie *newZombie(std::string str);
void randomChump(std::string str);

#endif //ZOMBIE_ZOMBIE_H
