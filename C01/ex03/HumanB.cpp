/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:37:11 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/04 13:37:12 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
