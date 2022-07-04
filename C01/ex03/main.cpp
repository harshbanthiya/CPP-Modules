/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:36:57 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/04 15:47:07 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.h"
#include "HumanA.h"
#include "HumanB.h"

int main() {
        {
            Weapon club = Weapon("crude spiked club");
            HumanA bob("Bob", club);
            bob.attack();
            club.setType("some other type of club");
            bob.attack();
        }
        {
            Weapon club = Weapon("crude spiked club");
            HumanB jim("Jim");
            jim.setWeapon(club);
            jim.attack();
            club.setType("some other type of club");
            jim.attack();
        }
        return (0);
}
