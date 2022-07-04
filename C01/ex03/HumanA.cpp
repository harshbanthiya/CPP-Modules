/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:37:25 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/04 15:57:42 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.h"

HumanA::HumanA(const char *in_name, Weapon& in_weapon) :
        name(in_name), kind(in_weapon) {
    std::cout << GREEN  << name << ": HumanA constructor called with weapon: " << kind.getType() << RESET << '\n';
}

HumanA::~HumanA() {
    std::cout << RED <<  name << ": HumanA destructor called" << RESET << '\n';
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->kind.getType() << '\n';
}

void HumanA::setWeapon(Weapon &inweapon) {
    this->kind = inweapon;
}
