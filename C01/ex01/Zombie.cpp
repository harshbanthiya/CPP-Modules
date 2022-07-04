/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:37:49 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/04 13:37:50 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.h"

Zombie::Zombie() {
    std::cout << "Zombie instance created" << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Zombie instance destroyed" << std::endl;
}

void Zombie::announce() {
    std::cout << name << ": : BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string &name) {
    Zombie::name = name;
}


Zombie* zombieHorde( int N, std::string name )
{
    int     i;
    Zombie *arr;
    i = 0;
    arr = new Zombie[N];
    while (i < N)
    {
        arr[i].setName(name);
        arr[i].announce();
        i++;
    }
    return (arr);
}

