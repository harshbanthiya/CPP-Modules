#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string n) : Name(n) , HitPoints(10) , EnergyPoints(10), AttackDamage(0)
{
    std::cout << Name << " Constructor Called!" << '\n';
}

ClapTrap::~ClapTrap(){
    std::cout << Name << " Destructor Called!" << '\n';
}

ClapTrap::ClapTrap(const ClapTrap& n){*this = n;}

void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << Name << " attacks " << target << ", causing "  << AttackDamage << "points of damage!" << '\n';
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap takes " <<  amount << " damage " << '\n';

}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << Name << " attacks " << target << ", causing "  << AttackDamage << "points of damage!" << '\n';

}