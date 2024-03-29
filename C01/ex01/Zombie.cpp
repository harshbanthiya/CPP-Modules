/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:37:49 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/04 15:24:32 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.h"

Zombie::Zombie() {
    std::cout << "Zombie instance created" << '\n';
}

Zombie::~Zombie() {
    std::cout << "Zombie instance destroyed" << '\n';
}

void Zombie::announce() {
    std::cout << name << ": : BraiiiiiiinnnzzzZ..." << '\n';
}

void Zombie::setName(const std::string &name) {
    Zombie::name = name;
}