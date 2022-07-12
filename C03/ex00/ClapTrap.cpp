/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:45:08 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/12 15:29:00 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructors and Destructors 
ClapTrap::ClapTrap() : Name("UNKNOWN"), HitPoints(10), EnergyPoints(10), AttackDamage(0){std::cout << Name << " Constructor Called!" << '\n';}
ClapTrap::ClapTrap(std::string n) : Name(n) , HitPoints(10) , EnergyPoints(10), AttackDamage(0){std::cout << Name << " Constructor Called!" << '\n';}
ClapTrap::~ClapTrap(){std::cout << Name << " Destructor Called!" << '\n';}
ClapTrap::ClapTrap(const ClapTrap& n){*this = n;}

// Getters and Setters
std::string ClapTrap::getName(void) const {return (this->Name);}
int         ClapTrap::getHitPoints(void) const{return (this->HitPoints);}
int         ClapTrap::getEnergyPoints(void) const{ return (this->EnergyPoints);}
int         ClapTrap::getAttackDamage(void) const{return (this->AttackDamage);}
void        ClapTrap::setName(std::string const v){this->Name = v;}
void        ClapTrap::setEnergyPoints(int const v){this->EnergyPoints = v;}
void        ClapTrap::setHitPoints(int const v){this->HitPoints = v;}
void        ClapTrap::setAttackDamage(int const v){this->AttackDamage = v;}

// Assignment Operator 
ClapTrap& ClapTrap::operator=(const ClapTrap& n)
{
    this->HitPoints = n.HitPoints;
    this->AttackDamage = n.AttackDamage;
    this->EnergyPoints = n.EnergyPoints;
    return (*this);
}

//Member Functions 

void ClapTrap::attack(const std::string& target)
{
    if (this->getHitPoints() < 1)
        std::cout << "Clap Trap " << Name << " cannot attack as it is dead!" << '\n';
    if (this->getEnergyPoints() < 1)
        std::cout << "Clap Trap " << Name << " cannot attack as it has no energy left" << '\n';
    else 
    {
        std::cout << "ClapTrap " << Name << " attacks " << target << ", causing "  << AttackDamage << " points of damage!" << '\n';
        this->setEnergyPoints(this->getEnergyPoints() - 1);
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (!amount)
        std::cout << "ClapTrap takes no damage as 0 damage is not useful " << '\n';
    if (this->getHitPoints() < 1)
        std::cout << "ClapTrap cannot take " << amount << " damage because it is already dead" << '\n';
    else 
    {
        if (this->getHitPoints() - (int)amount <= 0)
            amount = this->getHitPoints();
        this->setHitPoints(getHitPoints() - amount);
        if (!getHitPoints())
            std::cout << "ClapTrap cannot take " <<  amount << " damage because it just lost its life" << '\n';
        else 
            std::cout << "ClapTrap " << Name << " takes " << amount << " points of damage!" << '\n';
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!amount)
         std::cout << "ClapTrap makes no repair as 0 repair is not useful " << '\n';
    if (this->getHitPoints() < 1)
        std::cout << "Clap Trap " << Name << " cannot repair as it is dead!" << '\n';
    if (this->getEnergyPoints() < 1)
        std::cout << "Clap Trap " << Name << " cannot repair as it has no energy left" << '\n';
    else
    {
        this->setHitPoints(this->getHitPoints() + amount);
        this->setEnergyPoints(this->getEnergyPoints() - 1);
        std::cout << "ClapTrap " << Name << " repairs " << amount << ", causing points of repair!" << '\n';
    }     
}