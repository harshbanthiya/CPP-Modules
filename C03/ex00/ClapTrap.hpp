/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:45:13 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/12 14:48:28 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


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