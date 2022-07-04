/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:36:25 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/04 13:36:41 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
