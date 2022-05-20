//
// Created by Hersh Banthiya on 2022-05-20.
//

#include "HumanB.h"
HumanB::HumanB(const char *in_name) :
        name(in_name) {

}

HumanB::~HumanB() {

}

void HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->kind->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &inweapon) {
    this->kind = &inweapon;
}
