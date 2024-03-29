/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 10:53:12 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/04 15:00:04 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie *newZombie(std::string strname)
{
    Zombie *new_zombie;
    new_zombie = new Zombie(strname);
    std::cout << "Zombie (newZombie) instance created on the heap" << '\n';
    return (new_zombie);
}