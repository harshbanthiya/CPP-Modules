//
// Created by Hersh Banthiya on 2022-05-20.
//

#ifndef UNNECESSARY_VIOLENCE_HUMANA_H
#define UNNECESSARY_VIOLENCE_HUMANA_H
#include "Weapon.h"

class HumanA {
private:
     const std::string name;
     Weapon     &kind;
public:
    HumanA(const char *name, Weapon &kind);
    virtual ~HumanA();
    void    attack();
    void	setWeapon(Weapon& kind);
};


#endif //UNNECESSARY_VIOLENCE_HUMANA_H
