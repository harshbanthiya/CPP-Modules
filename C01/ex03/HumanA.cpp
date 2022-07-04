/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:37:25 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/04 13:37:26 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
