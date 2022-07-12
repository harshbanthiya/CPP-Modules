/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:45:16 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/12 15:28:25 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap A;
    ClapTrap B("Wimbledon Naked Streaker!");
    
    A.setAttackDamage(1);
    B.setAttackDamage(4);

    for(int i = 0 ; i < 5; i++)
    {
        A.attack("Wimbledon Naked Streaker!");
        B.takeDamage(A.getAttackDamage());
        B.attack("UNKNOWN");
        A.takeDamage(B.getAttackDamage());
        A.beRepaired(1);
    }
    
    
    return (0);
}