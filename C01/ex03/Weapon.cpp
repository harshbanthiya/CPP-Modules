//
// Created by Hersh Banthiya on 2022-05-20.
//

#include "Weapon.h"

Weapon::Weapon(const char *in_name) :
        type(in_name) {
}

Weapon::~Weapon() {

}

void Weapon::setType(const std::string &type) {
    Weapon::type = type;
}

const std::string &Weapon::getType() const {
    return type;
}
