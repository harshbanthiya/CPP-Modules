/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:45:13 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/13 14:12:31 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#pragma once 

#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */

class ClapTrap
{
    private:
    std::string Name;
    int         HitPoints;
    int         EnergyPoints;
    int         AttackDamage;


    public:
    ClapTrap();
    ClapTrap(std::string n);
    ~ClapTrap();
    ClapTrap(const ClapTrap &n);
    ClapTrap& operator=(const ClapTrap& n);
    // Getters and Setters 
    std::string getName(void) const;
    int     getHitPoints(void) const;
    int     getEnergyPoints(void) const;
    int     getAttackDamage(void) const;
    void    setName(std::string const v);
    void    setEnergyPoints(int const v);
    void    setHitPoints(int const v);
    void    setAttackDamage(int const v);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};