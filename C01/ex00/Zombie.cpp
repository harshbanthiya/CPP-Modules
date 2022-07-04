/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 10:53:21 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/04 14:45:31 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie(const std::string &strname): name(strname) {
    std::cout << name << ": Zombie constructor called." << '\n';
}

Zombie::~Zombie() {
    std::cout << name << ": Zombie destructor called." << '\n';
}

void Zombie::announce() {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << '\n';
}

