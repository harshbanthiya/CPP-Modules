//
// Created by Hersh Banthiya on 2022-05-20.
//

#ifndef UNNECESSARY_VIOLENCE_HUMANB_H
#define UNNECESSARY_VIOLENCE_HUMANB_H
#include "Weapon.h"

class HumanB {
private:
    std::string name;
    Weapon  *kind;
public:
    HumanB(const char *name);
    virtual ~HumanB();
    void attack();
    void	setWeapon(Weapon& kind);
};


#endif //UNNECESSARY_VIOLENCE_HUMANB_H
