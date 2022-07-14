/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:45:16 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/13 14:50:58 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
int main()
{
   // ClapTrap A;
    ClapTrap A("Wimbledon Naked Streaker!");
    FragTrap he("Hello");
    
    A.setAttackDamage(10);
    he.setAttackDamage(4);

    for(int i = 0 ; i < 5; i++)
    {
        A.attack("Hello");
        he.takeDamage(A.getAttackDamage());
        he.attack("Wimbledon Naked Streaker!");
        A.takeDamage(he.getAttackDamage());
        A.beRepaired(1);
        he.highFiveGuys();
    }
    
    
    return (0);
}