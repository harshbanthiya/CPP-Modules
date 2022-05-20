//
// Created by Hersh Banthiya on 2022-05-20.
//

#include "HumanA.h"

HumanA::HumanA(const char *in_name, Weapon& in_weapon) :
        name(in_name), kind(in_weapon) {

}

HumanA::~HumanA() {

}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->kind.getType() << std::endl;
}

void HumanA::setWeapon(Weapon &inweapon) {
    this->kind = inweapon;
}
