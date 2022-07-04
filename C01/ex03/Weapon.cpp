/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:36:25 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/04 15:57:30 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.h"

Weapon::Weapon(const char *in_name) :
        type(in_name) {
    std::cout << GREEN  << type  << ": Weapon constructor called" << RESET << '\n';
}

Weapon::~Weapon() {
    std::cout << RED << type << ": Weapon destructor called" << RESET << '\n';
}

void Weapon::setType(const std::string &type) {
    Weapon::type = type;
}

const std::string &Weapon::getType() const {
    return type;
}
