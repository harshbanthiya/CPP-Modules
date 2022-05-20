//
// Created by Hersh Banthiya on 2022-05-19.
//

#ifndef ZOMBIE_ZOMBIE_H
#define ZOMBIE_ZOMBIE_H
#include <iostream>

class Zombie {
private:
     std::string name;
public:
    Zombie();
    void setName(const std::string &name);
    virtual ~Zombie();
    void announce();
};
Zombie* zombieHorde( int N, std::string name );


#endif //ZOMBIE_ZOMBIE_H
