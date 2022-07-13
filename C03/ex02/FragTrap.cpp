/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 14:44:50 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/13 15:21:50 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("UNKNOWN")
{
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << BLUE << "UNKNOWN" << RESET << GREEN << " is a FragTrap Constructor" << RESET << '\n';
}

FragTrap::FragTrap(const std::string name) : 
    ClapTrap(name)
{
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
     std::cout << BLUE << name << RESET << GREEN << " is a FragTrap Constructor" << RESET << '\n';
}

FragTrap& FragTrap::operator=(const FragTrap& n)
{
    if (this == &n)
        return (*this);
    this->Name = n.Name;
    this->HitPoints = n.HitPoints;
    this->AttackDamage = n.AttackDamage;
    this->EnergyPoints = n.EnergyPoints;
    return (*this);
}

FragTrap::FragTrap(const FragTrap& n){*this = n;}
FragTrap::~FragTrap()
{
    std::cout << BLUE << Name << RESET << RED << " is  a FragTrap Destructor" << RESET << '\n' ;
}
void FragTrap::highFiveGuys(void){std::cout << BLUE << "FragTrap " << Name << RESET << " A positive high five request" << '\n';}
