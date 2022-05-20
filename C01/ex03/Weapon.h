//
// Created by Hersh Banthiya on 2022-05-20.
//

#ifndef UNNECESSARY_VIOLENCE_WEAPON_H
#define UNNECESSARY_VIOLENCE_WEAPON_H
#include <iostream>

class Weapon {
private:
    std::string type;
public:
    void setType(const std::string &type);
    const std::string &getType() const;
    Weapon(const char *type);
    virtual ~Weapon();
};


#endif //UNNECESSARY_VIOLENCE_WEAPON_H
