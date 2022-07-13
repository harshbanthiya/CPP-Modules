/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:18:38 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/13 10:56:52 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
    std::cout << "this is ScavTrap Constructor" << '\n';
}

ScavTrap::~ScavTrap()
{
    std::cout << "this is ScavTrap Destructor" << '\n';
}