/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:18:38 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/14 10:00:21 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("UNKNOWN")
{
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    std::cout << BLUE << "UNKNOWN" << RESET << GREEN << " is a ScavTrap Constructor" << RESET << '\n';
}

ScavTrap::ScavTrap(const std::string name) : 
    ClapTrap(name)
{
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
     std::cout << BLUE << name << RESET << GREEN << " is a ScavTrap Constructor" << RESET << '\n';
}

ScavTrap& ScavTrap::operator=(const ScavTrap& n)
{
    if (this == &n)
        return (*this);
    this->Name = n.Name;
    this->HitPoints = n.HitPoints;
    this->AttackDamage = n.AttackDamage;
    this->EnergyPoints = n.EnergyPoints;
    return (*this);
}

ScavTrap::ScavTrap(const ScavTrap& n){*this = n;}
ScavTrap::~ScavTrap()
{
    std::cout << BLUE << Name << RESET << RED << " is  a ScavTrap Destructor" << RESET << '\n' ;
}
void ScavTrap::guardGate(void){std::cout << BLUE << "ScavTrap " << Name << RESET << " is now in Gate keeper mode." << '\n';}

void ScavTrap::attack(const std::string& target)
{
    if (this->getHitPoints() < 1)
        std::cout << BLUE << "Scav Trap " << Name << RESET << " cannot attack as it is dead!" << '\n';
    if (this->getEnergyPoints() < 1)
        std::cout << BLUE << "Scav Trap " << Name <<  RESET << " cannot attack as it has no energy left" << '\n';
    else 
    {
        std::cout << BLUE << "ScavTrap " << Name << RESET << " attacks " << target << ", causing "  << AttackDamage << " points of damage!" << '\n';
        this->setEnergyPoints(this->getEnergyPoints() - 1);
    }
}
