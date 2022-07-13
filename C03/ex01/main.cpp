/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:45:16 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/13 10:51:08 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
int main()
{
   // ClapTrap A;
    ClapTrap A("Wimbledon Naked Streaker!");
    ScavTrap he("Hello");
    
    A.setAttackDamage(1);
    he.setAttackDamage(4);

    for(int i = 0 ; i < 5; i++)
    {
        A.attack("Hello");
        he.takeDamage(A.getAttackDamage());
        he.attack("Wimbledon Naked Streaker!");
        A.takeDamage(he.getAttackDamage());
        A.beRepaired(1);
    }
    
    
    return (0);
}